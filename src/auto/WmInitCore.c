#include "m2c.h"

#define WM_FIFO_BUF_SIZE 256
#define WM_ARM9WM_BUF_SIZE 512
#define WM_ARM7WM_BUF_SIZE (256 + 512)
#define WM_STATUS_BUF_SIZE 2048
#define WM_NUM_OF_PORT 16
#define WM_BUF_MSG_NUM 10
#define WM_API_REQUEST_ACCEPTED 0x8000

typedef int BOOL;
typedef void (*WMCallbackFunc)(void *arg);

typedef struct WMStatus {
    u16 state;
    u16 BusyApiid;
    BOOL apiBusy;
    u8 reserved0[0x7f8];
} WMStatus;

typedef struct WMArm7Buf {
    WMStatus *status;
    u8 reserved_a[4];
    u32 *fifo7to9;
    u8 reserved_b[0x2f4];
} WMArm7Buf;

typedef struct WMArm9Buf {
    WMArm7Buf *WM7;
    WMStatus *status;
    u32 *indbuf;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc CallbackTable[44];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} WMArm9Buf;

extern u16 wmInitialized;
#define wmInitialized wmInitialized
#define wm9buf (*(WMArm9Buf **) ((u8 *) &wmInitialized + 4))

extern int PXI_Init();
extern int PXI_IsCallbackReady(int, int);
extern void DC_InvalidateRange(void *, u32);
extern void MI_DmaFill32(int, void *, int, u32);
extern void func_02018b20();
extern void WM_SetPortCallback(u16, int, int);
extern void OS_InitMessageQueue(void *, void *, int);
extern void DC_StoreRange(void *, int);
extern void func_0200e358(void *, void *, int);
extern void PXI_SetFifoRecvCallback(int, void *);
extern M2C_UNK bufMsgQ;
extern M2C_UNK data_0203b028;
extern u32 data_0203b0a0[][WM_FIFO_BUF_SIZE / 4];
extern M2C_UNK WmReceiveFifo;

#pragma push
#pragma optimization_level 2
#pragma opt_common_subs off
s32 WmInitCore(void *wmSysBuf, u16 dmaNo, u32 bufSize) {
    if (wmInitialized) {
        return 3;
    }
    wmInitialized = 1;
    if (wmSysBuf == NULL) {
        wmInitialized = 0;
        return 6;
    }
    if (dmaNo > 3) {
        wmInitialized = 0;
        return 6;
    }
    if ((u32) wmSysBuf & 0x1F) {
        wmInitialized = 0;
        return 6;
    }

    PXI_Init();
    if (!PXI_IsCallbackReady(0xA, 1)) {
        wmInitialized = 0;
        return 4;
    }

    DC_InvalidateRange(wmSysBuf, bufSize);
    MI_DmaFill32(dmaNo, wmSysBuf, 0, bufSize);
    wm9buf           = (WMArm9Buf *) wmSysBuf;
    wm9buf->WM7      = (WMArm7Buf *) ((u32) wm9buf + WM_ARM9WM_BUF_SIZE);
    wm9buf->status   = (WMStatus *) ((u32) (wm9buf->WM7) + WM_ARM7WM_BUF_SIZE);
    wm9buf->fifo9to7 = (u32 *) ((u32) (wm9buf->status) + WM_STATUS_BUF_SIZE);
    wm9buf->fifo7to9 = (u32 *) ((u32) (wm9buf->fifo9to7) + WM_FIFO_BUF_SIZE);

    func_02018b20();

    wm9buf->dmaNo              = dmaNo;
    wm9buf->connectedAidBitmap = 0;
    wm9buf->myAid              = 0;

    {
        s32 i;

        for (i = 0; i < WM_NUM_OF_PORT; i++) {
            WM_SetPortCallback((u16) i, 0, 0);
        }
    }

    {
        s32 i;

        OS_InitMessageQueue(&bufMsgQ, &data_0203b028, WM_BUF_MSG_NUM);
        for (i = 0; i < WM_BUF_MSG_NUM; i++) {
            *((u16 *) (data_0203b0a0[i])) = WM_API_REQUEST_ACCEPTED;
            DC_StoreRange(data_0203b0a0[i], 2);
            func_0200e358(&bufMsgQ, data_0203b0a0[i], 1);
        }
    }

    PXI_SetFifoRecvCallback(0xA, &WmReceiveFifo);

    return 0;
}
#pragma pop
