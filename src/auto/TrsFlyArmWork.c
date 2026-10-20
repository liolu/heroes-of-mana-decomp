/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(void *, s32, s32);            /* extern */
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);    /* extern */
extern void *data_ov000_02051548;

void TrsFlyArmWork(void) {
    void *var_r8;
    void *temp_r9;
    s32 var_r10;

    var_r8 = M2C_FIELD(data_ov000_02051548, void **, 0x4C8);
    var_r10 = M2C_FIELD(data_ov000_02051548, s32 *, 0x4C4) + M2C_FIELD(data_ov000_02051548, s32 *, 0x4D0);
    if (var_r8 != NULL) {
        do {
            if ((u32) M2C_FIELD(data_ov000_02051548, u32 *, 0x4D0) > 0x7ECU) {
                break;
            }
            temp_r9 = var_r8;
            MIi_CpuCopy16(var_r8, var_r10, 0x14);
            var_r10 += 0x14;
            M2C_FIELD(data_ov000_02051548, u32 *, 0x4D0) = (u32) (M2C_FIELD(data_ov000_02051548, u32 *, 0x4D0) + 0x14);
            var_r8 = M2C_FIELD(var_r8, void **, 0x14);
            if (temp_r9 != NULL) {
                OS_FreeToHeap(0, -1, temp_r9);
            }
        } while (var_r8 != NULL);
    }
    M2C_FIELD(data_ov000_02051548, void **, 0x4C8) = var_r8;
}
