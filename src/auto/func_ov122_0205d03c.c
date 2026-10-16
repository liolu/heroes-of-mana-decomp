#include "m2c.h"

M2C_UNK func_ov122_0205cf14();                      /* extern */
s32 func_ov122_0205cf48();                          /* extern */
s32 func_ov122_0205d6d8();                          /* extern */

s32 func_ov122_0205d03c(void) {
    if (func_ov122_0205cf48() == 0) {
        return 0;
    }
    if (func_ov122_0205d6d8() == 0) {
        return 0;
    }
    func_ov122_0205cf14();
    return 1;
}
