#include "m2c.h"

u16 func_ov111_020e2670(s32 arg0, u16 arg1, s32 arg2) {
    s32 var_r2;

    if ((s32) (u16) (arg0 - arg1) < 0x8000) {
        var_r2 = arg0 - arg2;
        if ((s32) (u16) (var_r2 - arg1) >= 0x8000) {
            var_r2 = arg1;
        }
    } else {
        var_r2 = arg0 + arg2;
        if ((s32) (u16) (var_r2 - arg1) <= 0x8000) {
            var_r2 = arg1;
        }
    }
    return var_r2;
}
