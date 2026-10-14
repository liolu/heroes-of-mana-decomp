/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_CountUpTick from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_CountUpTick.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef volatile u16 vu16;
typedef int BOOL;
typedef int OSTimer;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    *((vu16 *) ((u32) 0x04000100 + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((vu16 *) ((u32) 0x04000102 + id * 4)) = control;
}
extern struct {
    u16 useTick;
    u16 pad;
    BOOL needResetTimer;
    volatile u64 tickCounter;
} data_02038974;
extern void func_0200c7e0(int timerNo, void (*callback)(void *), void *arg);
void func_0200f4a8(void) {
    data_02038974.tickCounter++;

    if (data_02038974.needResetTimer) {
        OS_SetTimerControl(0, 0);
        OS_SetTimerCount((OSTimer) 0, (u16) 0);
        OS_SetTimerControl(0, (u16) (0x0080 | 0x0040 | (1UL << 0)));

        data_02038974.needResetTimer = 0;
    }

    func_0200c7e0(0, (void (*)(void *)) func_0200f4a8, 0);
}
