#include "m2c.h"

M2C_UNK func_ov115_020e74b0(M2C_UNK *);             /* extern */
s32 func_ov115_020e78a4();                          /* extern */
s32 func_ov115_020e78d4(s32);                       /* extern */
M2C_UNK func_ov120_020eb538();                      /* extern */
extern M2C_UNK data_ov120_020f46dc;
extern M2C_UNK func_ov120_020eb498;

s32 func_ov120_020eb5a4(s32 arg0) {
    s32 var_r4;

    var_r4                                        = arg0;
    M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) = (s32) (M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) | 0x800000);
    if (var_r4 >= 3) {
        var_r4 = 0;
    }
    func_ov115_020e74b0(&func_ov120_020eb498);
    if (func_ov115_020e78a4() == 0) {
        func_ov120_020eb538();
    }
    if (func_ov115_020e78d4(var_r4) == 0) {
        func_ov120_020eb538();
    }
    return 1;
}
