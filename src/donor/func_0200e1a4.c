/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_DisableScheduler from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/OS_DisableScheduler.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0203863c;
extern OSIntrMode func_0200fa98(void);
extern OSIntrMode func_0200faac(OSIntrMode mode);
u32 func_0200e1a4(void) {
    OSIntrMode interruptMode = func_0200fa98();
    u32 count;

    if (data_0203863c.rescheduleCount < (u32) (0 - 1)) {
        count = data_0203863c.rescheduleCount++;
    }
    (void) func_0200faac(interruptMode);

    return count;
}
