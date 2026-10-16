#include "m2c.h"

s32 func_ov123_020cdb44(void *, M2C_UNK *);         /* extern */
extern void *data_ov123_020e4794;
extern M2C_UNK func_ov123_020cc564;

void func_ov123_020cc51c(void) {
    M2C_FIELD(data_ov123_020e4794, s32 *, 4) = 0x44535359;
    if (func_ov123_020cdb44(data_ov123_020e4794, &func_ov123_020cc564) != 0) {
        return;
    }
    M2C_FIELD(data_ov123_020e4794, s32 *, 4) = 0;
}
