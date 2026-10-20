#include "m2c.h"

typedef struct {
    u8 pad[8];
    u32 key;
} Entry;

s32 func_ov004_020bb654(void *arg0, u32 arg1) {
    s32 var_ip;
    s32 var_lr;
    Entry *base;

    var_lr = M2C_FIELD(arg0, s32 *, 8);
    if (var_lr <= 0) {
        return var_lr;
    }
    var_ip = 0;
    if (var_lr > 0) {
        base = M2C_FIELD(arg0, Entry **, 0xC);
        do {
            s32 temp_r3 = (var_ip + var_lr) / 2;
            if (base[temp_r3].key < arg1) {
                var_ip = temp_r3 + 1;
            } else {
                var_lr = temp_r3;
            }
        } while (var_ip < var_lr);
    }
    return var_ip;
}
