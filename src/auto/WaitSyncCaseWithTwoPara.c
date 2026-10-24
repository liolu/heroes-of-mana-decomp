/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_SleepThread(s32);
extern u8 *data_ov000_02051548;
void WaitSyncCaseWithTwoPara(s32 (*fn)(s32), s32 arg) {
    if (fn != NULL) {
        do {
            *(u32 *) (data_ov000_02051548 + 0x760) &= ~1;
            OS_SleepThread(0);
        } while (fn(arg) == 0);
    }
}
