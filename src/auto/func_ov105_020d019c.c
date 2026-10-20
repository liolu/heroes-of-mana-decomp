#include "m2c.h"

extern void *data_ov000_02051548;
extern u8 data_ov003_020b0cf0[];
extern u8 data_ov003_020b532c[];
extern u16 data_ov105_020d0900[];
extern u16 data_ov105_020d0904[];

void func_ov105_020d019c(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    u8 *var_r2_2;
    u8 *var_r2;
    s32 *temp_r1;
    s32 *temp_r1_2;
    s32 *temp_r1_3;
    s32 *temp_r3_4;
    s32 temp_r2_2;
    s32 temp_r3;
    u32 temp_r2;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r2 = (u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C;
    if (temp_r2 >= 2U) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 **, 0xEC);
    if ((temp_r1 != NULL) && (((u32) (*temp_r1 << 0x12) >> 0x1C) == 5)) {
        data_ov105_020d0900[temp_r2] += 1;
    }
    data_ov105_020d0904[((u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C)] += 1;
    switch (data_ov003_020b532c[2]) {
    case 0:
        var_r1 = 0;
        var_r2 = data_ov003_020b0cf0;
loop_13:
        if ((((u32) (M2C_FIELD(var_r2, s32 *, 0) << 0x1F) >> 0x1F) != 0) && (temp_r3_2 = M2C_FIELD(var_r2, void **, 0xE8), (temp_r3_2 != NULL))) {
            if ((((u32) (M2C_FIELD(temp_r3_2, s32 *, 8) << 8) >> 0x1F) != 0) || (arg0 == var_r2) || (((u32) (M2C_FIELD(var_r2, s32 *, 8) << 5) >> 0x1C) != ((u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C))) {
                goto block_20;
            }
        } else {
block_20:
            var_r1 += 1;
            var_r2 += 0x110;
            if (var_r1 < 0x42) {
                goto loop_13;
            }
        }
        if (var_r1 != 0x42) {
            return;
        }
        if (((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F) >> 0x1F) != 0) {
            M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x100);
            return;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x200);
        return;
    case 1:
        if (((u32) (M2C_FIELD(arg0, s32 *, 8) * 4) >> 0x1F) == 0) {
            return;
        }
        if (((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F) >> 0x1F) != 0) {
            M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x100);
            return;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x200);
        return;
    case 2:
        temp_r1_2 = M2C_FIELD(arg0, s32 **, 0xEC);
        if (temp_r1_2 == NULL) {
            return;
        }
        if (((u32) (*temp_r1_2 << 0x12) >> 0x1C) != 5) {
            return;
        }
        var_r1_2 = 0;
        var_r2_2 = data_ov003_020b0cf0;
loop_36:
        if ((((u32) (M2C_FIELD(var_r2_2, s32 *, 0) << 0x1F) >> 0x1F) != 0) && (temp_r3_3 = M2C_FIELD(var_r2_2, void **, 0xE8), (temp_r3_3 != NULL))) {
            if ((((u32) (M2C_FIELD(temp_r3_3, s32 *, 8) << 8) >> 0x1F) != 0) || (arg0 == var_r2_2) || (((u32) (M2C_FIELD(var_r2_2, s32 *, 8) << 5) >> 0x1C) != ((u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C)) || (temp_r3_4 = M2C_FIELD(var_r2_2, s32 **, 0xEC), (temp_r3_4 == NULL)) || (((u32) (*temp_r3_4 << 0x12) >> 0x1C) != 5)) {
                goto block_45;
            }
        } else {
block_45:
            var_r1_2 += 1;
            var_r2_2 += 0x110;
            if (var_r1_2 < 0x42) {
                goto loop_36;
            }
        }
        if (var_r1_2 != 0x42) {
            return;
        }
        if (((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F) >> 0x1F) != 0) {
            M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x100);
            return;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x200);
        return;
    case 3:
        temp_r1_3 = M2C_FIELD(arg0, s32 **, 0xEC);
        if (temp_r1_3 == NULL) {
            return;
        }
        if (((u32) (*temp_r1_3 << 0x12) >> 0x1C) != 5) {
            return;
        }
        if (((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F) >> 0x1F) != 0) {
            M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x100);
            return;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 8) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 8) & ~0x700) | 0x200);
        return;
    default:
        return;
    }
}




