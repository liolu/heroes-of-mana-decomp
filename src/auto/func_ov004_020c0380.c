#include "m2c.h"

M2C_UNK func_ov004_020c03e0();                      /* extern */
extern M2C_UNK data_ov004_020ce498;

void *func_ov004_020c0380(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce498;
    if (M2C_FIELD(arg0, u8 *, 0x34) != 0) {
        func_ov004_020c03e0(arg0);
    }
    return arg0;
}
