/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 func_020055ac();                           /* extern */
M2C_UNK func_02007a78();                /* extern */

s32 func_020055f4(s32 *arg0, s32 arg1) {
    func_02007a78(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_020055ac(arg0) != 0) {
        return 1;
    }
    return 0;
}
