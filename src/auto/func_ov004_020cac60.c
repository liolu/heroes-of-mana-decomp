#include "m2c.h"

M2C_UNK func_ov004_020c8e58(s32);                   /* extern */
M2C_UNK func_ov004_020cab18(s32);                   /* extern */

s32 func_ov004_020cac60(s32 arg0) {
    func_ov004_020c8e58(arg0 + 0x10);
    func_ov004_020cab18(arg0);
    return arg0;
}
