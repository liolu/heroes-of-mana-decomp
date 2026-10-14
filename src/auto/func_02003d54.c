#include "m2c.h"

M2C_UNK func_02003f3c(void *);                      /* extern */
M2C_UNK func_02003f98(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020078b4(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020367cc;

void func_02003d54(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020078b4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020078b4(&data_020367cc, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02003f98(temp_r4, arg0);
    }
    func_02003f3c(arg0);
}
