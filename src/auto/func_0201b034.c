#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
void func_02010434(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0201c3a4(M2C_UNK);

extern s32 data_020415ec;

s32 func_0201b034(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if ((data_020415ec != 0) && (func_0201c3a4(arg0) != 0)) {
        func_02010434(((arg0 - 1) * 0x16) + (data_020415ec + 0x1340), data_020415ec + 0x1772, 0x16);
        func_0200faac(temp_r4);
        return data_020415ec + 0x1772;
    }
    func_0200faac(temp_r4);
    return 0;
}
