#include "m2c.h"

M2C_UNK func_0200dd50(void *);                      /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */

void func_0200dd0c(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_0200dd50(arg0 + 0x9C);
    }
    func_0200faac(temp_r4);
}
