/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a6778(M2C_UNK *);                 /* extern */
s32 func_ov123_020a678c(u16);                       /* extern */
s32 func_ov123_020a68e8(void *, void *, s32);       /* extern */
M2C_UNK func_ov123_020a6a90(void *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020dd52c;

s32 func_ov123_020a7738(void *arg0, void *arg1) {
    s32 temp_r6;
    s32 var_r4;

    var_r4 = 0;
    func_ov123_020a6a90(arg1, 8, &data_ov123_020dd52c, func_ov123_020a6778(&data_ov123_020dd52c));
    if (func_ov123_020a68e8(arg0, arg1, 6) != 0) {
        var_r4 = -1;
    } else {
        temp_r6 = func_ov123_020a678c(M2C_FIELD(arg0, u16 *, 6));
        if ((temp_r6 + 1) != func_ov123_020a678c(M2C_FIELD(arg1, u16 *, 6))) {
            var_r4 = -2;
        }
    }
    return var_r4;
}
