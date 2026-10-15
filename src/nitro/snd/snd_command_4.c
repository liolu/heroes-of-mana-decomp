#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
extern M2C_UNK *sFreeList;

s32 SND_CountFreeCommand(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200fa98();
    var_r4  = 0;
    var_r1  = sFreeList;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_0200faac(temp_r0);
    return var_r4;
}
