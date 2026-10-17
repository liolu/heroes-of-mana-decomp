/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_ov123_02082c70(M2C_UNK, void *);           /* extern */
s32 func_ov123_02082fc8(M2C_UNK, void *);           /* extern */
s32 func_ov123_02083214(M2C_UNK, void *);           /* extern */
extern M2C_UNK data_ov123_020dab78;
extern M2C_UNK data_ov123_020daca4;

s32 func_ov123_02082bcc(M2C_UNK arg0, void *arg1) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg1, s32 *, 0) == 0x64) {
        func_02020d04(&data_ov123_020daca4, &data_ov123_020dab78, 0, 0x1D9);
    }
    if (M2C_FIELD(arg1, s32 *, 0) != 0x69) {
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            var_r4 = func_ov123_02083214(arg0, arg1);
        } else {
            var_r4 = func_ov123_02082fc8(arg0, arg1);
        }
    }
    if ((var_r4 == 0) && (M2C_FIELD(arg1, s32 *, 0) == 0x69)) {
        var_r4 = func_ov123_02082c70(arg0, arg1);
    }
    return var_r4;
}
