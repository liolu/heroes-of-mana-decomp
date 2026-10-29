/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    u8 pad[8];
    u32 key;
} Entry;

s32 func_ov004_020bbff0(void *arg0, u32 arg1) {
    s32 var_r5;
    s32 temp_r2;
    s32 var_r3;
    Entry *base;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 <= 0) {
        return temp_r2;
    }
    var_r5 = temp_r2 - 1;
    var_r3 = 0;
    if (var_r5 > 0) {
        base = M2C_FIELD(arg0, Entry **, 0xC);
        do {
            s32 temp_r4 = (var_r3 + var_r5) / 2;
            if (base[temp_r4].key < arg1) {
                var_r3 = temp_r4 + 1;
            } else {
                var_r5 = temp_r4;
            }
        } while (var_r3 < var_r5);
    }
    if (arg1 != M2C_FIELD(((var_r3 * 0xC) + M2C_FIELD(arg0, s32 *, 0xC)), s32 *, 8)) {
        var_r3 = temp_r2;
    }
    return var_r3;
}
