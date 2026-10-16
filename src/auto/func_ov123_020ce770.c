#include "m2c.h"

s32 func_ov123_020ce7c4();                          /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020ce770(void) {
    if (data_ov123_020e4790 == NULL) {
        return;
    }
    if ((u32) M2C_FIELD(data_ov123_020e4790, u32 *, 0xE58) > (u32) M2C_FIELD(data_ov123_020e4790, u32 *, 0xE5C)) {
        if (func_ov123_020ce7c4() == 0) {
            return;
        }
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE44) = 2;
        return;
    }
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE44) = 3;
}
