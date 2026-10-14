#include "m2c.h"

M2C_UNK func_02007a78(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_02037098;
extern M2C_UNK data_0203709c;
extern M2C_UNK func_020046d4;
extern M2C_UNK func_02004744;

void func_02004a00(void *arg0) {
    if (data_02037098 == 0) {
        func_02007a78(&data_0203709c, 0);
        data_02037098 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)        = &func_02004744;
    M2C_FIELD(arg0, void **, 0xC)         = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14)     = &func_020046d4;
    M2C_FIELD(arg0, void **, 0x18)        = arg0;
    M2C_FIELD(arg0, volatile s32 *, 0x44) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x48) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x24) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, volatile s32 *, 0x24) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x24) & ~2);
}
