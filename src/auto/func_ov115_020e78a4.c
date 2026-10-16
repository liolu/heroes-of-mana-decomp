#include "m2c.h"

M2C_UNK func_ov115_020e7774();                      /* extern */
s32 func_ov115_020e77a8();                          /* extern */
s32 func_ov115_020e7cac();                          /* extern */

s32 func_ov115_020e78a4(void) {
    if (func_ov115_020e77a8() == 0) {
        return 0;
    }
    if (func_ov115_020e7cac() == 0) {
        return 0;
    }
    func_ov115_020e7774();
    return 1;
}
