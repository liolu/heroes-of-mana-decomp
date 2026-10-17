/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac930;

s32 WaitShipInnerToBtlField(s32 arg4) {
    u32 temp_r0;

loop_1:
    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F;
    if (temp_r0 != 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        goto loop_1;
    }
    return temp_r0;
}
