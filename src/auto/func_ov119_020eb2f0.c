#include "m2c.h"

M2C_UNK GXS_BeginLoadBGExtPltt(u32);                /* extern */
M2C_UNK GXS_EndLoadBGExtPltt(u32);                  /* extern */
u32 MIi_CpuCopy32(void *, s32, M2C_UNK);            /* extern */
extern void *data_ov119_020f1e40;

void func_ov119_020eb2f0(void) {
    u32 var_r0;
    u32 var_r0_2;

    var_r0 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x814) << 0x1F) >> 0x1F;
    if (var_r0 == 0) {
        var_r0 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1034) << 0x1F) >> 0x1F;
        if (var_r0 == 0) {
            return;
        }
    }
    GXS_BeginLoadBGExtPltt(var_r0);
    if (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x814) << 0x1F) >> 0x1F) != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x610, 0x0689E000, 0x200);
    }
    var_r0_2 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1034) << 0x1F) >> 0x1F;
    if (var_r0_2 != 0) {
        var_r0_2 = MIi_CpuCopy32(data_ov119_020f1e40 + 0xE30, 0x0689E200, 0x200);
    }
    GXS_EndLoadBGExtPltt(var_r0_2);
    M2C_FIELD(data_ov119_020f1e40, s32 *, 0x814)  = (s32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x814) & ~1);
    M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1034) = (s32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1034) & ~1);
}
