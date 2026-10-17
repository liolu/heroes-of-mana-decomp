#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_ov004_020c2938(void *);                /* extern */
extern M2C_UNK data_ov004_020ceee8;

void *func_ov004_020c7144(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ceee8;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x3C);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    func_ov004_020c2938(arg0);
    func_0202f45c(arg0);
    return arg0;
}
