#include "m2c.h"

M2C_UNK func_0200de58();                            /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */

void func_0200de08(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0200fa98();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0200de58();
    func_0200faac(temp_r4);
}
