#include "engine.h"
#include "m2c.h"

void func_02009d98(M2C_UNK);
void func_020100c0(M2C_UNK);

extern s32 data_02035ab0;
extern M2C_UNK data_020385b8;

s32 func_0200c36c(void) {
    if (data_02035ab0 != -1) {
        func_020100c0(data_02035ab0);
    }
    func_02009d98(M2C_FIELD(&data_020385b8, s32 *, 0x14));
    M2C_FIELD(&data_020385b8, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020385b8, s32 *, 0x18) = 0;
    M2C_FIELD(&data_020385b8, s32 *, 4)    = 0;
    M2C_FIELD(&data_020385b8, s32 *, 0x14) = 0;
    return (s32) &data_020385b8;
}
