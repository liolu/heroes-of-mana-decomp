#include "m2c.h"

s32 func_ov123_0207b3f4();                          /* extern */
M2C_UNK func_ov123_0208c100(void *, M2C_UNK);       /* extern */
extern void *data_ov123_020db5f4;

void func_ov123_0208d4cc(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_ov123_020db5f4;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) == 0) {
        return;
    }
    if ((u32) (func_ov123_0207b3f4() - M2C_FIELD(var_r4, s32 *, 0xAC)) < 0x2710U) {
        M2C_FIELD(var_r4, s32 *, 0xB4) = 1;
        return;
    }
    func_ov123_0208c100(var_r4, 1);
    M2C_FIELD(var_r4, s32 *, 0xB4) = 0;
}
