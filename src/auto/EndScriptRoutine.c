/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acc1c;

void EndScriptRoutine(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xC8)  = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) & ~1) | 1);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
}
