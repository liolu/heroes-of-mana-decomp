/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac91c;

s32 WaitSyncTouchOrder(s32 arg4) {
    u32 temp_r0;

    M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) & ~0x4000);
loop_1:
    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x11) >> 0x1F;
    if (temp_r0 == 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        goto loop_1;
    }
    return temp_r0;
}
