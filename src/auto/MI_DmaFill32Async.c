#include "m2c.h"

void MI_WaitDma(s32 n);
u32 func_0200fa98(void);
void func_0200faac(u32 s);
void OSi_EnterDmaCallback(s32 n, void (*cb)(void *), void *arg);
void MIi_DmaSetParams_noInt(s32 n, u32 ctrl, u32 src, u32 cnt);

void MI_DmaFill32Async(s32 dmaNo, u32 dest, u32 data, u32 size, void (*callback)(void *), void *arg) {
    u32 state;
    if (size == 0) {
        if (callback != NULL) {
            callback(arg);
        }
        return;
    }
    MI_WaitDma(dmaNo);
    if (callback != NULL) {
        OSi_EnterDmaCallback(dmaNo, callback, arg);
        state                                               = func_0200fa98();
        *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
        MIi_DmaSetParams_noInt(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0xC5000000);
        func_0200faac(state);
        return;
    }
    state                                               = func_0200fa98();
    *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
    MIi_DmaSetParams_noInt(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0x85000000);
    func_0200faac(state);
}
