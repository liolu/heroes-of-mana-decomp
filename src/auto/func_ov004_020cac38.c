#include "m2c.h"

M2C_UNK func_ov004_020c8e34(s32);                   /* extern */
M2C_UNK func_ov004_020caaa8();                      /* extern */
extern M2C_UNK data_ov004_020cf868;

M2C_UNK **func_ov004_020cac38(M2C_UNK **arg0) {
    func_ov004_020caaa8();
    *arg0 = &data_ov004_020cf868;
    func_ov004_020c8e34((u8 *) arg0 + 0x10);
    return arg0;
}
