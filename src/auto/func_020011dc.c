#include "m2c.h"

M2C_UNK func_020013ac();                            /* extern */
s32 func_02001598(M2C_UNK, s32 *);                  /* extern */
void *func_0200ed38(M2C_UNK, M2C_UNK, s32);         /* extern */
M2C_UNK func_0201027c(M2C_UNK, void *, s32);        /* extern */
extern s32 data_02036738;
extern void *data_0203673c;

void func_020011dc(void) {
    s32 sp0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;

    func_020013ac();
    M2C_FIELD(data_0203673c, s32 *, 0xC)    = func_02001598(1, &sp0);
    M2C_FIELD(data_0203673c, s32 *, 0x18)   = func_02001598(7, &sp0);
    M2C_FIELD(data_0203673c, s32 *, 0x10)   = func_02001598(3, &sp0);
    M2C_FIELD(data_0203673c, s32 *, 0x14)   = func_02001598(5, &sp0);
    M2C_FIELD(data_0203673c, u32 *, 0x20)   = (u32) ((u32) (sp0 - 8) >> 3);
    M2C_FIELD(data_0203673c, void **, 0x24) = func_0200ed38(0, -1, 0x11E0);
    func_0201027c(0, M2C_FIELD(data_0203673c, void **, 0x24), 0x11E0);
    M2C_FIELD(data_0203673c, void **, 0x28) = func_0200ed38(0, -1, 0xB40);
    func_0201027c(0, M2C_FIELD(data_0203673c, void **, 0x28), 0xB40);
    M2C_FIELD(data_0203673c, void **, 0x2C) = func_0200ed38(0, -1, 0x113C);
    func_0201027c(0, M2C_FIELD(data_0203673c, void **, 0x2C), 0x113C);
    M2C_FIELD(data_0203673c, void **, 0x30) = func_0200ed38(0, -1, 0x14);
    func_0201027c(0, M2C_FIELD(data_0203673c, void **, 0x30), 0x14);
    temp_r0                             = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0, s32 *, 0x108C)   = (s32) ((M2C_FIELD(temp_r0, s32 *, 0x108C) & ~7) | 2);
    temp_r0_2                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_2, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_2, s32 *, 0x108C) & ~0x38) | 0x20);
    temp_r0_3                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_3, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_3, s32 *, 0x108C) & ~0x1C0) | 0x100);
    temp_r0_4                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_4, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_4, s32 *, 0x108C) & ~0x1E00) | 0x200);
    data_02036738                       = 5;
}
