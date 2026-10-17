/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
s32 IsThereAikyoEffect(s32, s32);                  /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac1c4;

void WaitSyncAikyoEffect(void *arg0, void *arg1, s32 arg6) {
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = arg0;
    temp_r6 = arg1;
loop_1:
    if (IsThereAikyoEffect(temp_r7, temp_r6) != 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        goto loop_1;
    }
}
