#include "m2c.h"

s32 GetUnitStatus(s32);                       /* extern */
extern void *data_ov000_02051548;

s32 func_ov032_020d3d80(void) {
    s32 var_r4;

    var_r4 = 0;
    if ((GetUnitStatus(0xF04) == 3) || (GetUnitStatus(0xF04) == 2)) {
        var_r4 += 1;
    }
    if ((GetUnitStatus(0xF05) == 3) || (GetUnitStatus(0xF05) == 2)) {
        var_r4 += 1;
    } else {
        var_r4 = 0;
    }
    if ((GetUnitStatus(0xF06) == 3) || (GetUnitStatus(0xF06) == 2)) {
        var_r4 += 1;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 3) {
        return 0;
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 8);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x10);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x54) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x54) | 0x20);
    return 1;
}
