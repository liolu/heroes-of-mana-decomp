#include "m2c.h"

M2C_UNK **func_0202f3f8(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020be9fc();                      /* extern */
extern M2C_UNK data_ov004_020ce1e8;

M2C_UNK **func_ov004_020bedec(void) {
    M2C_UNK **temp_r0;

    temp_r0 = func_0202f3f8(0x10);
    if (temp_r0 != NULL) {
        func_ov004_020be9fc();
        *temp_r0 = &data_ov004_020ce1e8;
    }
    return temp_r0;
}
