#include "m2c.h"

M2C_UNK DC_FlushRange(u32 *, u32);                  /* extern */
M2C_UNK FS_OpenFile(M2C_UNK *, s32);                /* extern */
M2C_UNK FS_SeekFile(M2C_UNK *, u32, M2C_UNK);       /* extern */
M2C_UNK MI_UncompressLZ8(u32 *, u32 *);             /* extern */
M2C_UNK MIi_CpuCopy16(u32 *, u32 *, u32);           /* extern */
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, u32 *);     /* extern */
u32 *func_0200ed38(M2C_UNK, M2C_UNK, u32);          /* extern */
M2C_UNK func_02013190(M2C_UNK *);                   /* extern */
M2C_UNK func_020134b8(M2C_UNK *);                   /* extern */
M2C_UNK func_0201360c(M2C_UNK *, u32 *, M2C_UNK);   /* extern */
M2C_UNK VBlankIntrWaitInGame();                      /* extern */
M2C_UNK func_ov120_020ea9e8();                      /* extern */
extern M2C_UNK data_ov120_020f3280;
extern M2C_UNK data_ov120_020f4228;

void func_ov120_020eade8(s32 arg0) {
    u8 sp4[0x48];
    u32 sp0;
    s32 temp_r4;
    u32 *temp_r0;
    u32 *temp_r0_2;
    u32 *temp_r0_3;
    u32 *temp_r0_4;
    u32 *temp_r0_5;
    u32 *temp_r0_6;
    u8 *temp_r6_2;
    u8 *temp_r6_3;
    u8 *temp_r6_4;
    u8 *temp_r6_5;
    u8 *temp_r6_6;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    u32 temp_r7_5;

    temp_r4 = M2C_FIELD(&data_ov120_020f3280, s32 *, 4);
    func_ov120_020ea9e8();
    func_02013190((M2C_UNK *) sp4);
    FS_OpenFile((M2C_UNK *) sp4, temp_r4);
    temp_r0 = func_0200ed38(0, -1, 0x4000U);
    if (temp_r0 != NULL) {
        FS_SeekFile((M2C_UNK *) sp4, arg0 * 4, 0);
        func_0201360c((M2C_UNK *) sp4, &sp0, 4);
        FS_SeekFile((M2C_UNK *) sp4, sp0, 0);
        func_0201360c((M2C_UNK *) sp4, temp_r0, 0x4000);
        temp_r6   = (u32) *temp_r0 >> 8;
        temp_r0_2 = func_0200ed38(0, -1, temp_r6);
        if (temp_r0_2 != NULL) {
            MI_UncompressLZ8(temp_r0, temp_r0_2);
            DC_FlushRange(temp_r0_2, temp_r6);
            VBlankIntrWaitInGame();
            temp_r7                                       = *temp_r0_2;
            temp_r6_2                                     = (u8 *) temp_r0_2 + 4;
            temp_r0_3                                     = func_0200ed38(0, -1, temp_r7);
            M2C_FIELD(&data_ov120_020f4228, u32 **, 0xA4) = temp_r0_3;
            MIi_CpuCopy16((u32 *) temp_r6_2, temp_r0_3, temp_r7);
            temp_r7_2                                     = *(u32 *) (temp_r6_2 + temp_r7);
            temp_r6_3                                     = temp_r6_2 + temp_r7 + 4;
            temp_r0_4                                     = func_0200ed38(0, -1, temp_r7_2);
            M2C_FIELD(&data_ov120_020f4228, u32 **, 0xA8) = temp_r0_4;
            MIi_CpuCopy16((u32 *) temp_r6_3, temp_r0_4, temp_r7_2);
            temp_r7_3                                     = *(u32 *) (temp_r6_3 + temp_r7_2);
            temp_r6_4                                     = temp_r6_3 + temp_r7_2 + 4;
            temp_r0_5                                     = func_0200ed38(0, -1, temp_r7_3);
            M2C_FIELD(&data_ov120_020f4228, u32 **, 0x9C) = temp_r0_5;
            MIi_CpuCopy16((u32 *) temp_r6_4, temp_r0_5, temp_r7_3);
            temp_r7_4                                     = *(u32 *) (temp_r6_4 + temp_r7_3);
            temp_r6_5                                     = temp_r6_4 + temp_r7_3 + 4;
            temp_r0_6                                     = func_0200ed38(0, -1, temp_r7_4);
            M2C_FIELD(&data_ov120_020f4228, u32 **, 0xA0) = temp_r0_6;
            MIi_CpuCopy16((u32 *) temp_r6_5, temp_r0_6, temp_r7_4);
            temp_r7_5 = *(u32 *) (temp_r6_5 + temp_r7_4);
            temp_r6_6 = temp_r6_5 + temp_r7_4 + 4;
            temp_r0_6 = (u32 *) 0x6400000;
            MIi_CpuCopy16((u32 *) temp_r6_6, (u32 *) ((u8 *) temp_r0_6 + 0x9F00), temp_r7_5);
            MIi_CpuCopy16((u32 *) (temp_r6_6 + temp_r7_5 + 4), (u32 *) 0x05000340, *(u32 *) (temp_r6_6 + temp_r7_5));
            M2C_FIELD(&data_ov120_020f4228, s32 *, 4) = (s32) (M2C_FIELD(&data_ov120_020f4228, s32 *, 4) | 0x04000000);
            OS_FreeToHeap(0, -1, temp_r0_2);
        }
        OS_FreeToHeap(0, -1, temp_r0);
    }
    func_020134b8((M2C_UNK *) sp4);
}
