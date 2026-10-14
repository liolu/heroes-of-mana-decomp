#include "engine.h"
#include "m2c.h"

void func_0200ee40(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_0203673c;

void func_020013ac(void) {
    s32 temp_r2;
    s32 temp_r2_10;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r2_7;
    s32 temp_r2_8;
    s32 temp_r2_9;

    temp_r2 = M2C_FIELD(data_0203673c, s32 *, 4);
    if (temp_r2 != 0) {
        func_0200ee40(0, -1, temp_r2);
        M2C_FIELD(data_0203673c, s32 *, 4) = 0;
    }
    temp_r2_2 = M2C_FIELD(data_0203673c, s32 *, 8);
    if (temp_r2_2 != 0) {
        func_0200ee40(0, -1, temp_r2_2);
        M2C_FIELD(data_0203673c, s32 *, 8) = 0;
    }
    temp_r2_3 = M2C_FIELD(data_0203673c, s32 *, 0xC);
    if (temp_r2_3 != 0) {
        func_0200ee40(0, -1, temp_r2_3);
        M2C_FIELD(data_0203673c, s32 *, 0xC) = 0;
    }
    temp_r2_4 = M2C_FIELD(data_0203673c, s32 *, 0x18);
    if (temp_r2_4 != 0) {
        func_0200ee40(0, -1, temp_r2_4);
        M2C_FIELD(data_0203673c, s32 *, 0x18) = 0;
    }
    temp_r2_5 = M2C_FIELD(data_0203673c, s32 *, 0x10);
    if (temp_r2_5 != 0) {
        func_0200ee40(0, -1, temp_r2_5);
        M2C_FIELD(data_0203673c, s32 *, 0x10) = 0;
    }
    temp_r2_6 = M2C_FIELD(data_0203673c, s32 *, 0x14);
    if (temp_r2_6 != 0) {
        func_0200ee40(0, -1, temp_r2_6);
        M2C_FIELD(data_0203673c, s32 *, 0x14) = 0;
    }
    temp_r2_7 = M2C_FIELD(data_0203673c, s32 *, 0x2C);
    if (temp_r2_7 != 0) {
        func_0200ee40(0, -1, temp_r2_7);
        M2C_FIELD(data_0203673c, s32 *, 0x2C) = 0;
    }
    temp_r2_8 = M2C_FIELD(data_0203673c, s32 *, 0x30);
    if (temp_r2_8 != 0) {
        func_0200ee40(0, -1, temp_r2_8);
        M2C_FIELD(data_0203673c, s32 *, 0x30) = 0;
    }
    temp_r2_9 = M2C_FIELD(data_0203673c, s32 *, 0x24);
    if (temp_r2_9 != 0) {
        func_0200ee40(0, -1, temp_r2_9);
        M2C_FIELD(data_0203673c, s32 *, 0x24) = 0;
    }
    temp_r2_10 = M2C_FIELD(data_0203673c, s32 *, 0x28);
    if (temp_r2_10 == 0) {
        return;
    }
    func_0200ee40(0, -1, temp_r2_10);
    M2C_FIELD(data_0203673c, s32 *, 0x28) = 0;
}
