/* near start: 10 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

extern u8 data_ov111_020ec2dc[];
extern u8 data_ov111_020ec2d4[];
extern u8 data_ov111_020ec2e0[];
extern u8 *data_ov111_020f1bd8;
extern s32 func_ov111_020e5d98(s32 a);
extern void func_0200acd8(u32 a, s32 b, s32 c, s32 d, s32 e);

void func_ov111_020e7a78(s32 idx, s32 arg) {
    u32 off;
    u32 v;
    u8 *p;

    off                                           = idx * 0x90;
    *(u32 *) (data_ov111_020ec2dc + off)          = 0;
    v                                             = func_ov111_020e5d98(2);
    v                                             = (*(u32 *) (data_ov111_020ec2d4 + off) & 0x80007fff) | ((v << 16) >> 1);
    *(volatile u32 *) (data_ov111_020ec2d4 + off) = v;
    *(volatile u32 *) (data_ov111_020ec2e0 + off) = (v << 1) >> 16;
    *(volatile u32 *) (data_ov111_020ec2d4 + off) |= 0x4400;
    if (idx == 0) {
        func_0200acd8(0x4000050, arg, 0x3f, 0x10, 0);
    } else {
        func_0200acd8(0x4001050, arg, 0x3f, 0x10, 0);
    }
    p = data_ov111_020f1bd8;
    *(u16 *) (p + 0x500 + 0xc) += 4;
}
