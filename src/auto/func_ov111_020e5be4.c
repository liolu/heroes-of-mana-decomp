#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov111_020f13c0;

void func_ov111_020e5be4(void) {
    s32 var_r8;
    s32 var_r9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    if (M2C_FIELD(&data_ov111_020f13c0, u16 *, 0) == 0) {
        return;
    }
    var_r8 = 0;
    if ((s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0) > 0) {
        var_r9 = 0;
        do {
            temp_r1 = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + var_r9;
            if (M2C_FIELD(temp_r1, u16 *, 0x26) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1, s32 *, 0x28));
            }
            temp_r1_2 = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + var_r9;
            if (M2C_FIELD(temp_r1_2, u16 *, 0x24) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1_2, s32 *, 0x2C));
            }
            temp_r1_3 = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + var_r9;
            if (M2C_FIELD(temp_r1_3, u16 *, 0x22) != 0) {
                OS_FreeToHeap(0, -1, M2C_FIELD(temp_r1_3, s32 *, 0x30));
            }
            var_r8 += 1;
            var_r9 += 0x510;
        } while (var_r8 < (s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0));
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov111_020f13c0, s32 *, 4));
}
