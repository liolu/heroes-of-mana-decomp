#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_0203a66c;

s32 func_020158f4(void) {
    s32 temp_r0;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&data_0203a66c, s32 *, 0x18) != 0) {
        func_0200faac(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_0203a66c, s32 *, 0x18) = 1;
    func_0200faac(temp_r0);
    return 1;
}
