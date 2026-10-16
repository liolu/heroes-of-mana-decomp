#include "m2c.h"

M2C_UNK func_ov115_020e74b0(M2C_UNK *);             /* extern */
s32 func_ov115_020e78a4();                          /* extern */
s32 func_ov115_020e78d4(s32);                       /* extern */
M2C_UNK func_ov121_020ecb60();                      /* extern */
extern M2C_UNK data_ov121_020f6d60;
extern M2C_UNK func_ov121_020eca94;

s32 func_ov121_020ecbdc(s32 arg0) {
    s32 var_r4;

    var_r4                                        = arg0;
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) = (s32) (M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) | 0x08000000);
    if (var_r4 >= 3) {
        var_r4 = 0;
    }
    func_ov115_020e74b0(&func_ov121_020eca94);
    if (func_ov115_020e78a4() == 0) {
        func_ov121_020ecb60();
    }
    if (func_ov115_020e78d4(var_r4) == 0) {
        func_ov121_020ecb60();
    }
    return 1;
}
