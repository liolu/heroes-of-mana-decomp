#include "engine.h"
#include "m2c.h"

void func_0200fe88(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020102c4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02035ab0;

void func_0200b8dc(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02035ab0 != -1) && ((u32) arg2 > 0x30U)) {
        func_0200fe88(data_02035ab0, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    func_020102c4(arg0, arg1 + 0x07000400, arg2);
}
