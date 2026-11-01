#include "m2c.h"

s32 func_ov004_020b9cf4(s32);
s32 func_ov004_020b9d44(s32, s32);
void func_ov004_020b9d1c(void *, s32);
void func_ov004_020b9d54(void *, s32);

void func_ov004_020c4460(u8 *o, s32 idx) {
    u32 t8;
    u32 t4;
    u32 t0;

    *(s32 *) (o + 4) = func_ov004_020b9cf4(idx);
    func_ov004_020b9d44(idx, 2);
    func_ov004_020b9d1c(&t8, idx);
    *(u32 *) (o + 8) = t8;
    func_ov004_020b9d1c(&t4, idx);
    *(u32 *) (o + 0xC)  = t4;
    *(s32 *) (o + 0x10) = func_ov004_020b9cf4(idx);
    func_ov004_020b9d44(idx, 2);
    func_ov004_020b9d54(&t0, idx);
    o[0x14] = ((u8 *) &t0)[0];
    o[0x15] = ((u8 *) &t0)[1];
    o[0x16] = ((u8 *) &t0)[2];
    o[0x17] = ((u8 *) &t0)[3];
}
