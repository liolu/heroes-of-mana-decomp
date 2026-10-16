#include "m2c.h"

M2C_UNK func_ov004_020be950();                      /* extern */
extern M2C_UNK data_ov004_020ce0a8;

M2C_UNK **func_ov004_020be680(M2C_UNK **arg0) {
    *arg0 = &data_ov004_020ce0a8;
    func_ov004_020be950();
    return arg0;
}
