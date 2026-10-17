#include "m2c.h"

M2C_UNK DC_FlushRange(u32 *, u32);                  /* extern */
s32 FS_OpenFile(M2C_UNK *, s32);                    /* extern */
M2C_UNK FS_SeekFile(M2C_UNK *, u32, M2C_UNK);       /* extern */
M2C_UNK MI_UncompressLZ8(u32 *, u32 *);             /* extern */
M2C_UNK MIi_CpuCopy16(u32 *, void *, M2C_UNK);      /* extern */
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, u32 *);     /* extern */
u32 *func_0200ed38(M2C_UNK, M2C_UNK, u32);          /* extern */
M2C_UNK func_02013190(M2C_UNK *);                   /* extern */
M2C_UNK func_020134b8(M2C_UNK *);                   /* extern */
M2C_UNK func_0201360c(M2C_UNK *, u32 *, M2C_UNK);   /* extern */
extern M2C_UNK data_ov119_020f1a00;
extern void *data_ov119_020f1e40;
extern M2C_UNK data_ov119_020f2258;

void func_ov119_020ea798(s32 arg0, s32 arg1) {
    u8 sp4[72];
    u32 sp0;
    s32 temp_r4;
    u32 *temp_r0;
    u32 *temp_r0_2;
    u32 temp_r8;

    temp_r4 = M2C_FIELD(&data_ov119_020f1a00, s32 *, 0x10);
    if (arg0 > (s32) M2C_FIELD(&data_ov119_020f2258, s32 *, 0x444)) {
        return;
    }
    func_02013190(sp4);
    if (FS_OpenFile(sp4, temp_r4) == 0) {
        return;
    }
    temp_r0 = func_0200ed38(0, -1, 0x10000U);
    if (temp_r0 != NULL) {
        FS_SeekFile(sp4, arg0 * 4, 0);
        func_0201360c(sp4, &sp0, 4);
        FS_SeekFile(sp4, sp0, 0);
        func_0201360c(sp4, temp_r0, 0x10000);
        temp_r8   = (u32) *temp_r0 >> 8;
        temp_r0_2 = func_0200ed38(0, -1, temp_r8);
        if (temp_r0_2 != NULL) {
            MI_UncompressLZ8(temp_r0, temp_r0_2);
            DC_FlushRange(temp_r0_2, temp_r8);
            if (arg0 == 0) {
                MIi_CpuCopy16(temp_r0_2, data_ov119_020f1e40 + 0x1860, 0x200);
                MIi_CpuCopy16(temp_r0_2, data_ov119_020f1e40 + 0x1A60, 0x200);
                M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1C64) =
                    (s32) ((M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1C64) & ~1) | 1);
            } else {
                MIi_CpuCopy16(temp_r0_2, M2C_FIELD(&data_ov119_020f2258, s32 *, 0x4D4) + (u16) (arg1 << 0xF), 0x8000);
            }
            OS_FreeToHeap(0, -1, temp_r0_2);
        }
        OS_FreeToHeap(0, -1, temp_r0);
    }
    func_020134b8(sp4);
}
