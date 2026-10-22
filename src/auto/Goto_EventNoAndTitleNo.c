/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void RestoreRetryData(void);
void OS_SleepThread(s32);

extern void *data_ov000_02051548;

void Goto_EventNoAndTitleNo(s16 arg0, s32 arg1) {
    s16 temp_r4;
    s32 temp_r5;

    temp_r4 = arg0;
    temp_r5 = arg1;
    RestoreRetryData();
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0xFFFF) | (u16) temp_r5);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3A)  = temp_r4;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
}
