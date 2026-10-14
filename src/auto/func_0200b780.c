#include "engine.h"
#include "m2c.h"

void func_0200fef8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02010294(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02035ab0;

void func_0200b780(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02035ab0 != -1) && ((u32) arg2 > 0x1CU)) {
        func_0200fef8(data_02035ab0, arg0, arg1 + 0x05000400, arg2);
        return;
    }
    func_02010294(arg0, arg1 + 0x05000400, arg2);
}
