#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
extern M2C_UNK data_ov004_020ce6fc;

void *func_ov004_020c37b4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce6fc;
    func_0202f45c(M2C_FIELD(arg0, void **, 0x44));
    func_0202f45c(arg0);
    return arg0;
}
