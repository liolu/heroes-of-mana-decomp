#include "m2c.h"

extern u8 data_ov117_020f02b4[][5];

u8 func_ov117_020ed0e0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        if (arg0 <= 0x14) {
            return data_ov117_020f02b4[arg1][4];
        }
        if (arg0 <= 0x28) {
            return data_ov117_020f02b4[arg1][3];
        }
        if (arg0 <= 0x3C) {
            return data_ov117_020f02b4[arg1][2];
        }
        if (arg0 <= 0x50) {
            return data_ov117_020f02b4[arg1][1];
        }
        return data_ov117_020f02b4[arg1][0];
    }
    if (arg0 <= 0x14) {
        return data_ov117_020f02b4[arg1][0];
    }
    if (arg0 <= 0x28) {
        return data_ov117_020f02b4[arg1][1];
    }
    if (arg0 <= 0x3C) {
        return data_ov117_020f02b4[arg1][2];
    }
    if (arg0 <= 0x50) {
        return data_ov117_020f02b4[arg1][3];
    }
    return data_ov117_020f02b4[arg1][4];
}
