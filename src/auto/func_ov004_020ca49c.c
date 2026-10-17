#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_ov004_020c921c(void *);                /* extern */
M2C_UNK func_ov004_020c988c(void *);                /* extern */
M2C_UNK func_ov004_020ca1fc(void *);                /* extern */
extern M2C_UNK data_ov004_020cf78c;

void *func_ov004_020ca49c(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cf78c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x78);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    func_ov004_020c988c((u8 *) arg0 + 0x30);
    func_ov004_020ca1fc((u8 *) arg0 + 0x28);
    func_ov004_020c921c((u8 *) arg0 + 4);
    func_0202f45c(arg0);
    return arg0;
}
