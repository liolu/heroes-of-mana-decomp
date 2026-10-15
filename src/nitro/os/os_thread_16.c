/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 OSi_SystemCallbackInSwitchThread;
extern u32 func_0200fa98(void);
extern void func_0200faac(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 OS_EnableScheduler(void) {
    u32 savedState = func_0200fa98();
    u32 count      = 0;

    if (OSi_SystemCallbackInSwitchThread.rescheduleCount != 0) {
        count                         = OSi_SystemCallbackInSwitchThread.rescheduleCount;
        OSi_SystemCallbackInSwitchThread.rescheduleCount = count - 1;
    }
    func_0200faac(savedState);
    return count;
}
