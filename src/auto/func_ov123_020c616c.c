#include "m2c.h"

s32 FS_OpenFile(M2C_UNK *, s32);                    /* extern */
s32 MB_RegisterFile(s32 *, void *);                 /* extern */
M2C_UNK func_02013190(M2C_UNK *);                   /* extern */
M2C_UNK func_020134b8();                            /* extern */
s32 func_0201c3d8(M2C_UNK *);                       /* extern */
s32 func_0201c458(M2C_UNK *, void *, M2C_UNK);      /* extern */
extern void *data_ov123_020e46e8;

M2C_UNK *func_ov123_020c616c(s32 *arg0) {
    u8 sp0[72];
    M2C_UNK *var_r4;
    M2C_UNK *var_r5;
    void *temp_r1;

    var_r4 = NULL;
    if (*arg0 == 0) {
        var_r5 = NULL;
        goto block_5;
    }
    func_02013190((void *) sp0);
    if (FS_OpenFile((void *) sp0, *arg0) == 0) {
        return NULL;
    }
    var_r5 = (void *) sp0;
block_5:
    if (func_0201c3d8(var_r5) != 0) {
        M2C_FIELD(data_ov123_020e46e8, void **, 0x1B144) = (void *) (data_ov123_020e46e8 + 0x2C);
        temp_r1                                          = M2C_FIELD(data_ov123_020e46e8, void **, 0x1B144);
        if ((temp_r1 != NULL) && (func_0201c458(var_r5, temp_r1, 0x10000) != 0) &&
            (MB_RegisterFile(arg0, M2C_FIELD(data_ov123_020e46e8, void **, 0x1B144)) != 0)) {
            var_r4 = (M2C_UNK *) 1;
        }
    }
    if (var_r5 == (void *) sp0) {
        func_020134b8();
    }
    return var_r4;
}
