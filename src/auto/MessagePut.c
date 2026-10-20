/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);               /* extern */
M2C_UNK PutMessageStart(M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_ov000_02051548;
extern void *data_ov000_02051550;

void MessagePut(s32 arg0, s32 arg1) {

    if (((u32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x44) << 0x1C) >> 0x1F) != 0) {
        do {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x760) =
                M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1;
            OS_SleepThread(0);
        } while (((u32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x44) << 0x1C) >> 0x1F)
                 != 0);
    }
    if (arg0 != -1) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x34) = arg0;
    } else {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x34) =
            M2C_FIELD(data_ov000_02051548, s32 *, 0x34) + 1;
    }
    PutMessageStart(0, 0, M2C_FIELD(data_ov000_02051548, s32 *, 0x34));
}
