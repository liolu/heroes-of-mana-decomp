#include "m2c.h"

M2C_UNK func_0202f45c(M2C_UNK **);                  /* extern */
M2C_UNK func_ov004_020c0ff4();                      /* extern */
extern M2C_UNK data_ov004_020ce4b0;

M2C_UNK **func_ov004_020c0fcc(M2C_UNK **arg0) {
    *arg0 = &data_ov004_020ce4b0;
    func_ov004_020c0ff4();
    func_0202f45c(arg0);
    return arg0;
}
