#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov119_020f2750;

void func_ov119_020eddc4(void) {
    s32 var_r9;
    s32 var_r10;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    var_r9 = 0;
    if ((s32) M2C_FIELD(&data_ov119_020f2750, u16 *, 0) > 0) {
        var_r10 = 0;
        do {
            temp_r1 = M2C_FIELD(&data_ov119_020f2750, s32 *, 4) + var_r10;
            if (M2C_FIELD(temp_r1, u16 *, 0x12) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1, s32 *, 0x14));
            }
            temp_r1_2 = M2C_FIELD(&data_ov119_020f2750, s32 *, 4) + var_r10;
            if (M2C_FIELD(temp_r1_2, u16 *, 0x10) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1_2, s32 *, 0x18));
            }
            temp_r1_3 = M2C_FIELD(&data_ov119_020f2750, s32 *, 4) + var_r10;
            if (M2C_FIELD(temp_r1_3, u16 *, 0xE) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1_3, s32 *, 0x1C));
            }
            var_r10 += 0x4FC;
            var_r9 += 1;
        } while (var_r9 < (s32) M2C_FIELD(&data_ov119_020f2750, u16 *, 0));
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov119_020f2750, s32 *, 4));
}
