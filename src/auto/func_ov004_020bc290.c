#include "m2c.h"

M2C_UNK func_0202f45c(M2C_UNK **);                  /* extern */
M2C_UNK func_ov004_020b9edc();                      /* extern */
extern M2C_UNK data_ov004_020cd9a4;

M2C_UNK **func_ov004_020bc290(M2C_UNK **arg0) {
    *arg0 = &data_ov004_020cd9a4;
    func_ov004_020b9edc();
    func_0202f45c(arg0);
    return arg0;
}
