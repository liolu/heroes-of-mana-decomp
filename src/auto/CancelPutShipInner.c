/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 OS_SleepThread(M2C_UNK);                        /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac8ac;
extern void *data_ov109_020ea340;

s32 CancelPutShipInner(void) {
    u32 var_r0;

    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F;
    if (var_r0 != 0) {
        M2C_FIELD(data_ov109_020ea340, s32 *, 4)     = (s32) ((M2C_FIELD(data_ov109_020ea340, s32 *, 4) & ~0x1F) | 1);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        var_r0                                       = OS_SleepThread(0);
    }
    return var_r0;
}
