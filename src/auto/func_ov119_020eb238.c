#include "m2c.h"

M2C_UNK GX_BeginLoadBGExtPltt(u32);                 /* extern */
M2C_UNK GX_EndLoadBGExtPltt(u32);                   /* extern */
u32 MIi_CpuCopy32(void *, s32, M2C_UNK);            /* extern */
extern void *data_ov119_020f1e40;

void func_ov119_020eb238(void) {
    u32 var_r0;
    u32 var_r0_2;

    var_r0 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x404) << 0x1F) >> 0x1F;
    if (var_r0 == 0) {
        var_r0 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0xC24) << 0x1F) >> 0x1F;
        if (var_r0 == 0) {
            return;
        }
    }
    GX_BeginLoadBGExtPltt(var_r0);
    if (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x404) << 0x1F) >> 0x1F) != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x200, 0x06886000, 0x200);
    }
    var_r0_2 = (u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0xC24) << 0x1F) >> 0x1F;
    if (var_r0_2 != 0) {
        var_r0_2 = MIi_CpuCopy32(data_ov119_020f1e40 + 0xA20, 0x06886200, 0x200);
    }
    GX_EndLoadBGExtPltt(var_r0_2);
    M2C_FIELD(data_ov119_020f1e40, s32 *, 0x404) = (s32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x404) & ~1);
    M2C_FIELD(data_ov119_020f1e40, s32 *, 0xC24) = (s32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0xC24) & ~1);
}
