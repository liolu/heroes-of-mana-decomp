#include "m2c.h"

extern M2C_UNK data_02035c9c;

s32 RTC_ConvertDateToDay(void *arg0) {
    s32 var_r2;
    u32 temp_r1;
    u32 temp_r2;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0);
    if ((temp_r3 >= 0x64U) || (temp_r2 = M2C_FIELD(arg0, u32 *, 4), (temp_r2 < 1U)) || (temp_r2 > 0xCU) ||
        (temp_r1 = M2C_FIELD(arg0, u32 *, 8), (temp_r1 < 1U)) || (temp_r1 > 0x1FU) ||
        ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) || (temp_r2 < 1U) || (temp_r2 > 0xCU)) {
        return -1;
    }
    var_r2 = (temp_r1 - 1) + *((M2C_UNK *) ((s8 *) &data_02035c9c + (temp_r2 * 4)));
    if ((temp_r2 >= 3U) && !(temp_r3 & 3)) {
        var_r2 += 1;
    }
    return (temp_r3 * 0x16D) + var_r2 + ((u32) (temp_r3 + 3) >> 2);
}
