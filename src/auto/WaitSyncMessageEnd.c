/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
extern void *data_ov000_02051548;
extern void *data_ov000_02051550;
extern M2C_UNK data_ov003_020ac2f0;

void WaitSyncMessageEnd(s32 arg5) {
    if (((u32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x44) << 0x1C) >> 0x1F) != 0) {
        do {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
            OS_SleepThread(0);
        } while (((u32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x44) << 0x1C) >> 0x1F) != 0);
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
    OS_SleepThread(0);
}
