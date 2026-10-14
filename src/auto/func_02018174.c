#include "m2c.h"

M2C_UNK func_0200fafc(s32);                         /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_02015e78();                                /* extern */
M2C_UNK func_02018240(M2C_UNK, M2C_UNK);            /* extern */

void func_02018174(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_02015e78();
        if (var_r0 == 4) {
            do {
                func_0200fafc(0xA3A47);
                var_r0 = func_02015e78();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02018240(1, 1);
    }
    func_0200fddc();
}
