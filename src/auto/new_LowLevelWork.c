/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, s32);       /* extern */
void *func_0200ed38(M2C_UNK, M2C_UNK, s32);         /* extern */
extern M2C_UNK data_ov000_02050744;
extern M2C_UNK data_ov000_02051544;

void new_LowLevelWork(void) {
    void *temp_r0;

    temp_r0                                     = func_0200ed38(0, -1, 0xAFC);
    M2C_FIELD(&data_ov000_02051544, void **, 8) = temp_r0;
    MIi_CpuClear16(0, temp_r0, 0xAFC);
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x164) = 0x07000000;
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x614) = 0x07000400;
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x160) = 0x05000200;
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x610) = 0x05000600;
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x15C) = 0x06400000;
    M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x60C) = 0x06600000;
}
