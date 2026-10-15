#include "m2c.h"

M2C_UNK func_02003724();
M2C_UNK func_02003c1c();
void *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200fddc();
M2C_UNK MIi_CpuClear16(M2C_UNK, void *, M2C_UNK);
extern void *data_0203678c;

void func_02003664(void) {
    void *temp_r0;

    temp_r0       = func_0200ed38(0, -1, 0xB0);
    data_0203678c = temp_r0;
    if (temp_r0 == NULL) {
        func_0200fddc();
    }
    MIi_CpuClear16(0, data_0203678c, 0xB0);
    M2C_FIELD(data_0203678c, void **, 0x98) = func_0200ed38(0, -1, 0xB0000);
    if (M2C_FIELD(data_0203678c, void **, 0x98) == NULL) {
        func_0200fddc();
    }
    MIi_CpuClear16(0, M2C_FIELD(data_0203678c, void **, 0x98), 0xB0000);
    M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) ((M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x7F) | 0x7F);
    M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) ((M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x3F80) | 0x3F80);
    func_02003c1c();
    func_02003724();
}
