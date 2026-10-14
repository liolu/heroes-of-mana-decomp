#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_0201f0c4();                                /* extern */
s32 func_0201f814();                                /* extern */
M2C_UNK func_0201f9c8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020415e0;
extern M2C_UNK func_0201f0fc;

s32 func_0201f108(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_0200fa98();
    if (M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), u16 *, 0x526) == 0) {
        M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s32 *, 0x5E4) = 0;
        M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), u16 *, 0x526) = 1U;
        if (func_0201f814() != 0) {
            func_0201f9c8(&func_0201f0fc);
            var_r5 = 0;
        } else {
            var_r5 = func_0201f0c4();
        }
    }
    func_0200faac(temp_r4);
    return var_r5;
}
