#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_020125f8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b60(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0203a5a8;

s32 func_02012ba0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 var_r8;
    void *var_r0;
    void *var_r1;

    var_r8  = 0;
    temp_r4 = func_0200fa98();
    if (func_02012b60(arg1, arg2) == 0) {
        var_r1 = M2C_FIELD(&data_0203a5a8, void **, 0);
        if (var_r1 == NULL) {
            M2C_FIELD(&data_0203a5a8, void **, 0) = arg0;
            M2C_FIELD(&data_0203a5a8, void **, 4) = arg0;
            M2C_FIELD(&data_0203a5a8, s32 *, 0xC) = 0;
            M2C_FIELD(&data_0203a5a8, s16 *, 0xA) = 0;
            M2C_FIELD(&data_0203a5a8, s16 *, 8)   = 0;
        } else {
            var_r0 = M2C_FIELD(var_r1, void **, 4);
            if (var_r0 != NULL) {
                do {
                    var_r1 = var_r0;
                    var_r0 = M2C_FIELD(var_r0, void **, 4);
                } while (var_r0 != NULL);
            }
            M2C_FIELD(var_r1, void **, 4) = arg0;
            M2C_FIELD(arg0, void **, 8)   = var_r1;
        }
        M2C_FIELD(arg0, s32 *, 0)    = func_020125f8(arg1, arg2);
        var_r8                       = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 1);
    }
    func_0200faac(temp_r4);
    return var_r8;
}
