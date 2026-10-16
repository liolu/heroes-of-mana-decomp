#include "m2c.h"

M2C_UNK func_ov114_020e5078();                      /* extern */
s32 func_ov114_020e50ac();                          /* extern */
s32 func_ov114_020e540c();                          /* extern */

s32 func_ov114_020e51a8(void) {
    if (func_ov114_020e50ac() == 0) {
        return 0;
    }
    if (func_ov114_020e540c() == 0) {
        return 0;
    }
    func_ov114_020e5078();
    return 1;
}
