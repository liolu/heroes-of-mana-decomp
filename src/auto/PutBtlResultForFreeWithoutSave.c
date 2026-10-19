/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
M2C_UNK AllUnitStatusToNormal(s32);                   /* extern */
M2C_UNK SetGameTimeMax(M2C_UNK);               /* extern */
M2C_UNK PutOnOffTimer(M2C_UNK);               /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac9c0;

void PutBtlResultForFreeWithoutSave(M2C_UNK arg0) {
    AllUnitStatusToNormal(arg0);
    SetGameTimeMax(0);
    PutOnOffTimer(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0)  = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1F) | 0xE);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
}
