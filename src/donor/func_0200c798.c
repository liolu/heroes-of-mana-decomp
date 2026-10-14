/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006390 from projets/blue-dragon-awakened-shadow/src/donor/func_02006390.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_020385d8[8];
extern void func_0200c798(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_0200c854(u32 mask);
extern UnkIrqCallbackInfo data_020385d8[8];
void func_0200c798(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_020385d8[dmaNo].func   = func;
    data_020385d8[dmaNo].arg    = arg;
    data_020385d8[dmaNo].enable = func_0200c854(mask) & mask;
}
extern u32 func_0200c854(u32 mask);
