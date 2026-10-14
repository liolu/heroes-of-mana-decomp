#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_020389e0;

s32 func_020110d0(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_0200fa98();
    temp_r4 = M2C_FIELD(&data_020389e0, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_0200faac(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_020389e0, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_020389e0, s32 *, 0x10) = 0;
    }
    func_0200faac(temp_r0);
    return (s32) temp_r4;
}
