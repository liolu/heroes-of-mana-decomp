#include "m2c.h"

s32 func_ov123_020cd9ac();                          /* extern */
M2C_UNK func_ov123_020ce770();                      /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020ce420(void) {
    u32 temp_r0;

    if (data_ov123_020e4790 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e4790, u32 *, 0xE44);
    switch (temp_r0) {
        case 1:
            func_ov123_020ce770();
            return;
        case 2:
            if (func_ov123_020cd9ac() != 0) {
                return;
            }
            M2C_FIELD(data_ov123_020e4790, u32 *, 0xE44) = 1U;
            return;
        case 0:
        case 3:
            return;
        default:
            return;
    }
}
