#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_020389e0;

s32 func_02010f14(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&data_020389e0, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_020389e0, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_020389e0, s32 *, 0x20);
    }
    func_0200faac(temp_r0);
    return var_r4;
}
