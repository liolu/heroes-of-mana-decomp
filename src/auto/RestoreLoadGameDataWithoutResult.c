/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK RestoreLoadGameData(s32, s32);              /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov000_02050954;

void RestoreLoadGameDataWithoutResult(void *arg0, void *arg1, s32 arg6) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = arg0;
    temp_r6 = arg1;
    temp_r0 = func_0200ed38(0, -1, 0xA00);
    MIi_CpuCopy16(M2C_FIELD(data_0203673c, s32 *, 0x2C), temp_r0, 0xA00);
    temp_r0_2 = func_0200ed38(0, -1, 0x200);
    MIi_CpuCopy16(M2C_FIELD(data_0203673c, s32 *, 0x28) + 0x10, temp_r0_2, 0x200);
    RestoreLoadGameData(temp_r7, temp_r6);
    MIi_CpuCopy16(temp_r0, M2C_FIELD(data_0203673c, s32 *, 0x2C), 0xA00);
    if (temp_r0 != 0) {
        OS_FreeToHeap(0, -1, temp_r0);
    }
    MIi_CpuCopy16(temp_r0_2, M2C_FIELD(data_0203673c, s32 *, 0x28) + 0x10, 0x200);
    if (temp_r0_2 != 0) {
        OS_FreeToHeap(0, -1, temp_r0_2);
    }
}
