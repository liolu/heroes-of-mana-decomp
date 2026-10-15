/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PXIi_HandlerRecvFifoNotEmpty from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/pxi/pxi_fifo.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_0200fa98(void);
extern u32 func_0200faac(u32 state);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_02011954(void);
typedef union UnkPxiFifoMessage {
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
    u32 raw;
} UnkPxiFifoMessage;
extern PxiCallback FifoRecvCallbackTable[32];
static inline s32 PxiSetToFifo(u32 data) {
    u32 enabled;

    if ((*(vu16 *) 0x04000184) & 0x4000) {
        (*(vu16 *) 0x04000184) |= 0xc000;
        return -1;
    }
    enabled = func_0200fa98();
    if ((*(vu16 *) 0x04000184) & 2) {
        func_0200faac(enabled);
        return -2;
    }
    (*(vu32 *) 0x04000188) = data;
    func_0200faac(enabled);
    return 0;
}
static inline s32 PxiGetFromFifo(u32 *data) {
    u32 enabled;

    if ((*(vu16 *) 0x04000184) & 0x4000) {
        (*(vu16 *) 0x04000184) |= 0xc000;
        return -3;
    }
    enabled = func_0200fa98();
    if ((*(vu16 *) 0x04000184) & 0x100) {
        func_0200faac(enabled);
        return -4;
    }
    *data = (*(vu32 *) 0x04100000);
    func_0200faac(enabled);
    return 0;
}
void func_02011954(void) {
    UnkPxiFifoMessage msg;
    s32 ret;
    u32 tag;

    while (1) {
        ret = PxiGetFromFifo(&msg.raw);
        if (ret == -4) {
            return;
        }
        if (ret == -3) {
            continue;
        }
        tag = msg.e.tag;
        if (tag) {
            if (FifoRecvCallbackTable[tag]) {
                FifoRecvCallbackTable[tag](tag, msg.e.data, msg.e.err);
            } else if (!msg.e.err) {
                msg.e.err = 1;
                PxiSetToFifo(msg.raw);
            }
        }
    }
}
