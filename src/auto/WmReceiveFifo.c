#include "m2c.h"

extern void DC_InvalidateRange(void *addr, u32 size);
extern void DC_StoreRange(void *addr, u32 size);
extern void func_02018b20(void);
extern s32 func_02018490(void);
extern void func_0200fddc(void);
extern void MI_CpuFill8(void *dst, u8 value, u32 size);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern void MIi_CpuCopy16(const void *src, void *dst, u32 size);
extern void MIi_CpuClear16(u16 value, void *dst, u32 size);

typedef void (*WMCallbackFunc)(void *arg);

typedef struct {
    u16 state;
    u16 busyApiid;
    s32 apiBusy;
    u8 reserved[0x6a];
    u16 dataSize;
} WMStatus;

typedef struct {
    void *WM7;
    WMStatus *status;
    u32 *indbuf;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc callbackTable[44];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} WMArm9Buf;

typedef struct {
    u16 type;
    u16 field02;
    u16 field04;
    u16 field06;
    u16 field08;
    u16 field0a;
    u16 field0c;
    u16 pad0e;
    u16 field10;
    u16 field12;
    u16 field14;
    u16 field16;
    u16 field18;
    u16 field1a;
    u32 field1c;
    u16 field20;
    u16 field22;
    u16 field24;
    u16 field26;
    u16 field28;
    u16 field2a;
    u16 field2c;
    u16 field2e;
} WMRecvMessage;

typedef struct {
    u16 type;
    u16 field02;
    u16 field04;
    u16 field06;
    u32 field08;
    u32 field0c;
    u16 field10;
    u16 field12;
    u8 field14[6];
    u16 field1a;
    u32 field1c;
    u16 field20;
    u16 field22;
    u8 field24[24];
    u16 field3c;
    u16 pad3e;
    u16 field40;
    u16 field42;
} WMSendMessage;

typedef struct {
    u16 initialized;
    WMArm9Buf *wm9buf;
    u8 reserved[0x48];
    WMSendMessage msg;
} WMSys;

extern WMSys wmInitialized;

void WmReceiveFifo(void *chan, void *buf, s32 flag) {
    WMArm9Buf *wm      = wmInitialized.wm9buf;
    WMRecvMessage *msg = (WMRecvMessage *) buf;
    u16 value;
    void *src;
    void *payload;
    u16 sub;
    u16 port;
    u16 aid;
    u16 x;
    u16 y;
    u16 i;

    if (flag) {
        return;
    }

    DC_InvalidateRange(wm->fifo7to9, 0x100);
    if (!wm->scanOnlyFlag) {
        DC_InvalidateRange(wm->status, 0x800);
    }
    if (buf != wm->fifo7to9) {
        DC_InvalidateRange(buf, 0x100);
    }

    if (msg->type >= 0x2c) {
        if (msg->type == 0x80) {
            if (msg->field02 == 0x13) {
                func_0200fddc();
            }
            if (wm->indCallback) {
                wm->indCallback(buf);
            }
        } else if (msg->type == 0x82) {
            if (wm->portCallbackTable[msg->field06]) {
                msg->field1c = (u32) wm->portCallbackArgument[msg->field06];
                msg->field22 = wm->connectedAidBitmap;
                DC_InvalidateRange(M2C_FIELD(msg, u32 *, 8), wm->status->dataSize);
                wm->portCallbackTable[msg->field06](buf);
            }
        } else if (msg->type == 0x81) {
            msg->type = 0xf;
            if (msg->field1c) {
                ((WMCallbackFunc) msg->field1c)(buf);
            }
        }
    } else {
        if (msg->type == 0xe) {
            if ((u16) (msg->field04 + 0xfff5) <= 1 && msg->field02 == 0) {
                DC_InvalidateRange(M2C_FIELD(msg, u32 *, 8), wm->status->dataSize);
            }
        }
        if (msg->type == 2 && msg->field02 == 0) {
            WMCallbackFunc cb = wm->callbackTable[msg->type];
            func_02018490();
            if (cb) {
                cb(buf);
            }
            return;
        }
        if (wm->callbackTable[msg->type]) {
            wm->callbackTable[msg->type](buf);
            if (!wmInitialized.initialized) {
                return;
            }
        }
        if (msg->type == 8 || msg->type == 0xc) {
            if (msg->type == 8) {
                src     = &msg->field0a;
                sub     = msg->field08;
                port    = msg->field10;
                value   = msg->field12;
                payload = &msg->field14;
                aid     = 0;
                y       = msg->field2c;
                x       = msg->field2e;
            } else if (msg->type == 0xc) {
                sub     = msg->field08;
                aid     = msg->field0a;
                value   = msg->field0c;
                port    = 0;
                payload = 0;
                src     = &msg->field10;
                y       = msg->field16;
                x       = msg->field18;
            }
            if (sub == 7 || sub == 9 || sub == 0x1a) {
                if (sub == 7) {
                    wm->connectedAidBitmap |= 1 << port;
                } else {
                    wm->connectedAidBitmap &= ~(1 << port);
                }
                wm->myAid = aid;
                MI_CpuFill8(&wmInitialized.msg, 0, 0x44);
                wmInitialized.msg.type    = 0x82;
                wmInitialized.msg.field02 = 0;
                wmInitialized.msg.field04 = sub;
                wmInitialized.msg.field08 = 0;
                wmInitialized.msg.field0c = 0;
                wmInitialized.msg.field10 = 0;
                wmInitialized.msg.field12 = port;
                wmInitialized.msg.field20 = aid;
                wmInitialized.msg.field22 = wm->connectedAidBitmap;
                wmInitialized.msg.field1a = 0xffff;
                wmInitialized.msg.field3c = value;
                MI_CpuCopy8(src, &wmInitialized.msg.field14, 6);
                if (payload) {
                    MIi_CpuCopy16(payload, &wmInitialized.msg.field24, 0x18);
                } else {
                    MIi_CpuClear16(0, &wmInitialized.msg.field24, 0x18);
                }
                wmInitialized.msg.field40 = (aid == 0) ? y : x;
                wmInitialized.msg.field42 = (aid == 0) ? x : y;
                for (i = 0; i < 16; i++) {
                    wmInitialized.msg.field06 = i;
                    if (wm->portCallbackTable[i]) {
                        wmInitialized.msg.field1c = (u32) wm->portCallbackArgument[i];
                        wm->portCallbackTable[i](&wmInitialized.msg);
                    }
                }
            }
        }
    }

    DC_InvalidateRange(wm->fifo7to9, 0x100);
    func_02018b20();
    if (buf != wm->fifo7to9) {
        msg->type |= 0x8000;
        DC_StoreRange(buf, 0x100);
    }
}
