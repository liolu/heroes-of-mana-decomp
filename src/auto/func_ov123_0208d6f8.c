#include "m2c.h"

M2C_UNK func_ov123_0208d528(void *);                /* extern */
M2C_UNK func_ov123_0208d650(void *);                /* extern */
extern void *data_ov123_020db5f4;

void func_ov123_0208d6f8(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        var_r4 = data_ov123_020db5f4;
    }
    if (M2C_FIELD(var_r4, s32 *, 0xBC) != 0) {
        func_ov123_0208d528(var_r4);
    }
    func_ov123_0208d650(var_r4);
}
