/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK *func_ov123_0208e7f0(s32, M2C_UNK);         /* extern */
s32 func_ov123_0208e85c(M2C_UNK *);                 /* extern */
M2C_UNK func_ov123_0208ea78(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020dbd70;

void func_ov123_0208e76c(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r8;
    M2C_UNK *var_r7;

    var_r8 = func_ov123_0208e7f0(arg1 + 1, 0x5C);
    if (var_r8 == NULL) {
        return;
    }
    do {
        var_r7 = func_ov123_0208e7f0(0, 0x5C);
        if (var_r7 == NULL) {
            var_r7 = &data_ov123_020dbd70;
        }
        if (func_ov123_0208e85c(var_r8) != 0) {
            func_ov123_0208ea78(arg0, var_r8, var_r7);
        }
        var_r8 = func_ov123_0208e7f0(0, 0x5C);
    } while (var_r8 != NULL);
}
