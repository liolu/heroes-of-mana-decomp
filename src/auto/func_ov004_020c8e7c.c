#include "m2c.h"

M2C_UNK func_0202f45c(M2C_UNK **);                  /* extern */
M2C_UNK func_ov004_020c8f50(M2C_UNK **, M2C_UNK);   /* extern */
extern M2C_UNK data_ov004_020cf614;

M2C_UNK **func_ov004_020c8e7c(M2C_UNK **arg0) {
    *arg0 = &data_ov004_020cf614;
    func_ov004_020c8f50(arg0, 1);
    func_0202f45c(arg0);
    return arg0;
}
