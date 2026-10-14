#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200789c(M2C_UNK, M2C_UNK);
void func_020078b4(M2C_UNK, M2C_UNK);
M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

s32 func_02007214(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;
    void *temp_r1;

    temp_r5 = func_0200fa98();
    temp_r0 = func_0200789c(arg0, 0);
    if (temp_r0 != 0) {
        func_020078b4(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_0200faac(temp_r5);
    return temp_r0;
}
