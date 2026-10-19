/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, s32);       /* extern */
void *func_0200ed38(M2C_UNK, M2C_UNK, s32);         /* extern */
M2C_UNK ReadFontheaderAndHaba(M2C_UNK, void *);       /* extern */
M2C_UNK SetUpStringReadHeaderPos();                      /* extern */
extern M2C_UNK data_ov000_020510a0;
extern void *data_ov000_02051550;

void InitMessageWorkForDS(void) {
    void *temp_r0;

    temp_r0             = func_0200ed38(0, -1, 0x45C);
    data_ov000_02051550 = temp_r0;
    MIi_CpuClear16(0, temp_r0, 0x45C);
    M2C_FIELD(data_ov000_02051550, void **, 0xBC) = func_0200ed38(0, -1, 0x800);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051550, void **, 0xBC), 0x800);
    M2C_FIELD(data_ov000_02051550, void **, 0x18C) = func_0200ed38(0, -1, 0x800);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051550, void **, 0x18C), 0x800);
    M2C_FIELD(data_ov000_02051550, s16 *, 0x346) = 0;
    ReadFontheaderAndHaba(0, data_ov000_02051550 + 0x1A8);
    ReadFontheaderAndHaba(1, data_ov000_02051550 + 0x1C8);
    ReadFontheaderAndHaba(2, data_ov000_02051550 + 0x1E8);
    SetUpStringReadHeaderPos();
}
