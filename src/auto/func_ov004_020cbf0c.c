#include "m2c.h"

M2C_UNK func_ov004_020c295c();                      /* extern */
extern M2C_UNK data_ov004_020cf06c;
extern M2C_UNK data_ov004_020cf210;

void *func_ov004_020cbf0c(void *arg0) {
    func_ov004_020c295c();
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_ov004_020cf210;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_ov004_020cf06c;
    return arg0;
}
