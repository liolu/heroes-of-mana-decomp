#include "m2c.h"

M2C_UNK func_02004568(void *);
M2C_UNK func_02004580(void *);
M2C_UNK func_020045f8(void *, M2C_UNK);
M2C_UNK func_02004d84(M2C_UNK);
s32 func_02005500(void *, M2C_UNK *, s32, M2C_UNK);
M2C_UNK NNS_SndHeapDestroy(s32);
s32 func_0200577c(s32, M2C_UNK);
M2C_UNK func_020061a0(u16, s32);
M2C_UNK func_020061d4(u16, s32);
M2C_UNK func_02006208(s32, s32);
s32 func_020064d0(s32);
M2C_UNK func_0200769c(M2C_UNK, s32);
M2C_UNK func_0200fddc();
extern M2C_UNK data_02035a80;
extern M2C_UNK data_02035a84;
extern void *data_0203678c;

void func_02003948(s32 arg0, s32 arg1) {
    s32 temp_r4;

    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0xF) >> 0x1F) != 0) {
        func_020045f8(data_0203678c, 0);
        func_02004568(data_0203678c);
        M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x10000);
    }
    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0x10) >> 0x1F) != 0) {
        func_020045f8(data_0203678c + 4, 0);
        func_02004568(data_0203678c + 4);
        M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x8000);
    }
    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0x11) >> 0x1F) != 0) {
        NNS_SndHeapDestroy(M2C_FIELD(data_0203678c, s32 *, 0x9C));
        M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) & ~0x4000);
    }
    M2C_FIELD(data_0203678c, s32 *, 0x9C) = func_0200577c(M2C_FIELD(data_0203678c, s32 *, 0x98), 0xB0000);
    M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) | 0x4000);
    if (func_02005500(data_0203678c + 8, &data_02035a84, M2C_FIELD(data_0203678c, s32 *, 0x9C), 0) == 0) {
        func_0200fddc();
    }
    if (func_020064d0(M2C_FIELD(data_0203678c, s32 *, 0x9C)) == 0) {
        func_0200fddc();
    }
    func_0200769c(0xA, M2C_FIELD(data_0203678c, s32 *, 0x9C));
    func_02004d84(3);
    if (arg0 > 0) {
        func_02006208(arg0, M2C_FIELD(data_0203678c, s32 *, 0x9C));
    }
    temp_r4 = arg1 * 2;
    func_020061d4(*((u16 *) ((s8 *) &data_02035a80 + (temp_r4 * 2))), M2C_FIELD(data_0203678c, s32 *, 0x9C));
    func_020061a0(*((u16 *) ((s8 *) &data_02035a80 + ((temp_r4 + 1) * 2))), M2C_FIELD(data_0203678c, s32 *, 0x9C));
    M2C_FIELD(data_0203678c, s32 *, 0xA4) = arg1;
    if (arg0 != -1) {
        func_02004580(data_0203678c);
        M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) | 0x10000);
    }
    func_02004580(data_0203678c + 4);
    M2C_FIELD(data_0203678c, s32 *, 0xAC) = (s32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) | 0x8000);
    M2C_FIELD(data_0203678c, s32 *, 0xA0) = arg0;
}
