#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
extern M2C_UNK data_0203a630;

void TP_SetCallback(s32 arg0) {
    s32 temp_r0;

    temp_r0                             = func_0200fa98();
    M2C_FIELD(&data_0203a630, s32 *, 4) = arg0;
    func_0200faac(temp_r0);
}
