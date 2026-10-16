#include "m2c.h"

M2C_UNK func_ov122_020559f0();                      /* extern */
M2C_UNK func_ov122_0205cee4(M2C_UNK *);             /* extern */
s32 func_ov122_0205d03c();                          /* extern */
s32 func_ov122_0205d300(s32);                       /* extern */
extern M2C_UNK data_ov122_02065604;
extern M2C_UNK func_ov122_0205594c;

s32 func_ov122_02055a60(s32 arg0) {
    s32 var_r4;

    var_r4                                        = arg0;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) | 0x08000000);
    if (var_r4 >= 3) {
        var_r4 = 0;
    }
    func_ov122_0205cee4(&func_ov122_0205594c);
    if (func_ov122_0205d03c() == 0) {
        func_ov122_020559f0();
    }
    if (func_ov122_0205d300(var_r4) == 0) {
        func_ov122_020559f0();
    }
    return 1;
}
