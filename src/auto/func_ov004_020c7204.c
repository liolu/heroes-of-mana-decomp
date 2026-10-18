#include "m2c.h"

M2C_UNK **func_0202f3f8(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b972c(M2C_UNK **);            /* extern */
extern M2C_UNK data_ov004_020ceee8;

M2C_UNK **func_ov004_020c7204(void) {
    M2C_UNK **temp_r0;

    temp_r0 = func_0202f3f8(0x44);
    if (temp_r0 != NULL) {
        *temp_r0 = &data_ov004_020ceee8;
        func_ov004_020b972c((void *) ((u8 *) temp_r0 + 0x18));
    }
    return temp_r0;
}
