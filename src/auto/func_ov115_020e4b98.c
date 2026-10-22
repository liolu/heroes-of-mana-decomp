#include "m2c.h"

void func_ov115_020e696c(s32, s32, s32, s32, s32, s32);
void func_ov115_020e69d0(s32, s32, s32, s32, s32, s32);
extern s32 data_ov115_020e9160;
extern s16 data_ov115_020e99d8[2];
extern s16 data_ov115_020e99dc[4];

void func_ov115_020e4b98(s32 arg0) {
    s32 i;
    s32 off;
    s32 off2;
    s32 j;

    data_ov115_020e9160 = 0x200;
    i                   = 0;
    off                 = 5;
    for (; i < 2; i++) {
        if (data_ov115_020e99d8[i] != 0) {
            func_ov115_020e696c(5, arg0 + off, data_ov115_020e99d8[i], 4, 0, 0);
        }
        off += 3;
    }
    off2 = 0xC;
    j    = 0;
    while (j < 4) {
        if (data_ov115_020e99dc[j] != 0) {
            func_ov115_020e69d0(5, arg0 + off2, data_ov115_020e99dc[j], 4, 0, 0);
        }
        off2 += 3;
        j++;
    }
}
