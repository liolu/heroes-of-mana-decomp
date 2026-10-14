#include "m2c.h"

M2C_UNK func_0200dd50(void *);                      /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */

s32 func_02012fb8(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r5;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x10) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x1C);
        if (var_r0_2 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 0x40);
            do {
                func_0200dd50(arg0 + 0x14);
                if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x40) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
            } while (var_r0_3 != 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 8);
        }
    }
    func_0200faac(temp_r4);
    return var_r5;
}
