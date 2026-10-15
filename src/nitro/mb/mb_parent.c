#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
extern void *mbc;

void MB_CommSetParentStateCallback(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_0200fa98();
    M2C_FIELD(mbc, s32 *, 0x14E4) = arg0;
    func_0200faac(temp_r0);
}
