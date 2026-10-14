#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
M2C_UNK func_02016c30(void);

extern M2C_UNK data_0203a6d4;

s32 func_0201658c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&data_0203a6d4, s32 *, 4) != 0) {
        func_0200faac(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0203a6d4, s32 *, 4) = 1;
    func_0200faac(temp_r0);
    M2C_FIELD(&data_0203a6d4, s32 *, 0x18) = 1;
    M2C_FIELD(&data_0203a6d4, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0203a6d4, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_0203a6d4, s32 *, 8)    = arg1;
    M2C_FIELD(&data_0203a6d4, s32 *, 0x14) = arg2;
    if (func_02016c30() != 0) {
        return 0;
    }
    return 3;
}
