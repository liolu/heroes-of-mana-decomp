#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_020389e0;

s32 func_02010fcc(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200fa98();
    var_r4  = 0;
    var_r1  = M2C_FIELD(&data_020389e0, M2C_UNK **, 8);
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_0200faac(temp_r0);
    return var_r4;
}
