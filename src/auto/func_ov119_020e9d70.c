/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_ov119_020e9ebc(M2C_UNK *);             /* extern */
M2C_UNK func_ov119_020eddc4();                      /* extern */
extern M2C_UNK data_ov119_020f1e40;
extern M2C_UNK data_ov119_020f1f50;
extern M2C_UNK data_ov119_020f1fbc;
extern M2C_UNK data_ov119_020f2044;
extern M2C_UNK data_ov119_020f20b0;
extern M2C_UNK data_ov119_020f215c;
extern M2C_UNK data_ov119_020f21c8;
extern u8 data_ov119_020f2258;

void func_ov119_020e9d70(void) {
    s32 i;
    s32 zero;
    s32 minus1;

    zero   = 0;
    minus1 = -1;
    for (i = 0; i < 5; i++) {
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f2258 + i * 4, s32 *, 0x20));
    }
    func_ov119_020e9ebc(&data_ov119_020f2044);
    func_ov119_020e9ebc(&data_ov119_020f20b0);
    func_ov119_020e9ebc(&data_ov119_020f215c);
    func_ov119_020e9ebc(&data_ov119_020f21c8);
    func_ov119_020e9ebc(&data_ov119_020f1f50);
    func_ov119_020e9ebc(&data_ov119_020f1fbc);
    func_ov119_020eddc4();
    if (((u32) (M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x44C) << 0x14) >> 0x1F) != 0) {
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x428));
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x42C));
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x430));
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x434));
    }
    if (((u32) (M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x44C) << 0x10) >> 0x1F) != 0) {
        OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x8EC));
    }
    OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x860));
    OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0x864));
    OS_FreeToHeap(zero, minus1, M2C_FIELD(&data_ov119_020f1e40, s32 *, 0));
}
