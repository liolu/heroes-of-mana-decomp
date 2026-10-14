#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
void *func_0201866c();                              /* extern */
s32 func_0201867c();                                /* extern */

s32 func_02018c08(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0200fa98();
    temp_r0 = func_0201867c();
    if (temp_r0 != 0) {
        func_0200faac(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_0201866c(), s32 *, 0xC8) = arg0;
    func_0200faac(temp_r5);
    return 0;
}
