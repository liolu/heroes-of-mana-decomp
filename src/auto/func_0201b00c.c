#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

extern void *data_020415ec;

void func_0201b00c(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_0200fa98();
    M2C_FIELD(data_020415ec, s32 *, 0x14E4) = arg0;
    func_0200faac(temp_r0);
}
