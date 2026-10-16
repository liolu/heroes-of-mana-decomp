#include "m2c.h"

M2C_UNK func_ov123_020ccac8(M2C_UNK, s32, s32);     /* extern */
M2C_UNK func_ov123_020ccf88();                      /* extern */
extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020cd970(void) {
    func_ov123_020ccf88();
    if (M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) == 0) {
        return;
    }
    func_ov123_020ccac8(0, M2C_FIELD(&data_ov123_020e47a4, s32 *, 8), 0x2CF4);
    M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) = 0;
}
