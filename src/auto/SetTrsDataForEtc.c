/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, void *, s32);            /* extern */
void **func_0200ed38(M2C_UNK, M2C_UNK, s32);        /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8660;

void SetTrsDataForEtc(void *arg0, void *arg1, s32 arg5) {
    s32 temp_r5;
    s32 temp_r6;
    void **var_r0;
    void **temp_r4;
    void *var_r1;

    temp_r6    = arg0;
    temp_r5    = arg1;
    temp_r4    = func_0200ed38(0, -1, 0xC);
    temp_r4[0] = (void *) func_0200ed38(0, -1, temp_r5);
    MIi_CpuCopy16(temp_r6, temp_r4[0], temp_r5);
    temp_r4[1] = (void *) temp_r5;
    temp_r4[2] = NULL;
    var_r1     = M2C_FIELD(data_ov000_02051548, void **, 0x4CC);
    var_r0     = (void **) ((u8 *) data_ov000_02051548 + 0x4CC);
    if (var_r1 != NULL) {
        do {
            var_r0 = (void **) ((u8 *) var_r1 + 8);
            var_r1 = M2C_FIELD(var_r1, void **, 8);
        } while (var_r1 != NULL);
    }
    *var_r0 = temp_r4;
}
