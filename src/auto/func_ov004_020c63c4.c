#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_ov004_020c2938(void *);                /* extern */
extern M2C_UNK data_ov004_020cec88;

void *func_ov004_020c63c4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cec88;
    func_0202f45c(M2C_FIELD(arg0, void **, 0x24));
    func_ov004_020c2938(arg0);
    func_0202f45c(arg0);
    return arg0;
}
