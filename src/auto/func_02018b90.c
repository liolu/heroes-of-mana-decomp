#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern M2C_UNK data_0203b000;

s32 func_02018b90(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&data_0203b000, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0203b000, void **, 4), s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    func_0200faac(temp_r0);
    return (s32) (u16) var_r4;
}
