/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 FS_SeekFile(M2C_UNK *, s32, M2C_UNK);           /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_0201360c(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK data_02036744;
extern M2C_UNK data_ov000_020511e0;
extern void *data_ov000_02051550;

void SetPaletteDataToVram(void *arg0, void *arg1, s32 arg5) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = arg0;
    temp_r5 = arg1;
    temp_r4 = func_0200ed38(0, -1, M2C_FIELD(data_ov000_02051550, s32 *, 0x1BC) << 5);
    if (FS_SeekFile(&data_02036744, M2C_FIELD(data_ov000_02051550, s32 *, 0x1C0), 0) == 0) {
        func_0200fddc();
    }
    if (func_0201360c(&data_02036744, temp_r4, M2C_FIELD(data_ov000_02051550, s32 *, 0x1BC) << 5) == 0) {
        func_0200fddc();
    }
    MIi_CpuCopy16(temp_r4 + (temp_r5 << 5), temp_r6, 0xA);
    if (temp_r4 != 0) {
        OS_FreeToHeap(0, -1, temp_r4);
    }
}
