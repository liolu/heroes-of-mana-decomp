#include "m2c.h"

extern M2C_UNK data_ov117_020f0f30;

s32 func_ov117_020e5db0(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    temp_r0 = arg0 - 0x2D;
    switch (temp_r0) {
        case 2:
            if (((u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18) == 0x56) {
                var_r0 = 0xD7;
            } else {
                var_r0 = 0x4A;
            }
            return var_r0;
        case 3:
            if (((u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18) == 0x57) {
                var_r0_2 = 0xD8;
            } else {
                var_r0_2 = 0x4B;
            }
            return var_r0_2;
        case 4:
            if (((u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18) == 0x58) {
                var_r0_3 = 0xD9;
            } else {
                var_r0_3 = 0x4C;
            }
            return var_r0_3;
        case 5:
            if (((u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18) == 0x59) {
                var_r0_4 = 0xDA;
            } else {
                var_r0_4 = 0x4D;
            }
            return var_r0_4;
        case 6:
            if (((u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18) == 0x5A) {
                var_r0_5 = 0xDB;
            } else {
                var_r0_5 = 0x4E;
            }
            return var_r0_5;
        case 0:
            temp_r0_2 = (u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18;
            if (temp_r0_2 == 0x5D) {
                return 0xCA;
            }
            if (temp_r0_2 == 0x5B) {
                var_r0_6 = 0xCA;
            } else {
                var_r0_6 = 0x48;
            }
            return var_r0_6;
        case 1:
            temp_r0_3 = (u32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) << 0x16) >> 0x18;
            if (temp_r0_3 == 0x5E) {
                return 0xCB;
            }
            if (temp_r0_3 == 0x5C) {
                var_r0_7 = 0xCB;
            } else {
                var_r0_7 = 0x49;
            }
            return var_r0_7;
        default:
            return 0;
    }
}
