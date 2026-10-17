#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
extern M2C_UNK data_ov004_020ce3b8;

void *func_ov004_020bfba8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce3b8;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x60);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x5C);
    if (temp_r0_2 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0_2 + 4))(temp_r0_2);
    }
    func_0202f45c(arg0);
    return arg0;
}
