/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_0203863c;
extern u32 func_0200fa98(void);
extern void func_0200faac(u32 state);
u32 func_0200e1d8(void) {
    u32 savedState = func_0200fa98();
    u32 count      = 0;

    if (data_0203863c.rescheduleCount != 0) {
        count                         = data_0203863c.rescheduleCount;
        data_0203863c.rescheduleCount = count - 1;
    }
    func_0200faac(savedState);
    return count;
}
