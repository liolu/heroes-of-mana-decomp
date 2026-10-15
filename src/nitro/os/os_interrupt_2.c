/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 OS_EnableIrqMask(u32 mask);
extern UnkIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern u32 OS_EnableIrqMask(u32 mask);

/* func_02006390 from projets/blue-dragon-awakened-shadow/src/donor/func_02006390.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void OSi_EnterDmaCallback(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    OSi_IrqCallbackInfo[dmaNo].func   = func;
    OSi_IrqCallbackInfo[dmaNo].arg    = arg;
    OSi_IrqCallbackInfo[dmaNo].enable = OS_EnableIrqMask(mask) & mask;
}
