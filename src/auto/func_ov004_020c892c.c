#include "m2c.h"

M2C_UNK **func_0202f3f8(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020c295c();                      /* extern */
extern M2C_UNK data_ov004_020cf52c;

M2C_UNK **func_ov004_020c892c(void) {
    M2C_UNK **temp_r0;

    temp_r0 = func_0202f3f8(0x1C);
    if (temp_r0 != NULL) {
        func_ov004_020c295c();
        *temp_r0 = &data_ov004_020cf52c;
    }
    return temp_r0;
}
