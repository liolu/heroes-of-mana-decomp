#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T;

typedef struct {
    u8 pad0[0x10];
    s32 s10;
    u8 cnt;
    u8 pad2[2];
    u8 b17;
    u8 pad3[8];
    s32 s20;
    s32 a24[1];
    u8 pad4[0xa4 - 0x28];
    u16 a_a4[1];
    u8 pad5[0xf4 - 0xa6];
    s32 af4[1];
    u8 pad6[0x1b4 - 0xf8];
    u16 s1b4;
    u8 pad7[2];
    s32 s1b8;
    s32 s1bc;
    u8 pad8[0x1c8 - 0x1c0];
    s32 s1c8;
    u8 pad9[0x204 - 0x1cc];
    s32 s204;
    u8 pad10[0x2d0 - 0x208];
    u8 b2d0[1];
} S;

S *func_ov123_0209d368(void);
void func_ov123_0208d4cc(s32);
u8 func_ov123_0209e554(void);
s32 func_ov123_020a1b40(s32, s32, s32, s32, T *, s32);
void func_ov123_0209e364(s32);

s32 func_ov123_020a0524(s32 a, s32 b, s32 c) {
    T t;
    s32 i;
    s32 r;

    if (func_ov123_0209d368()->b17 != 0 && a == func_ov123_0209d368()->s20) {
        return 0;
    }
    func_ov123_0209d368()->b17  = 1;
    func_ov123_0209d368()->s20  = a;
    func_ov123_0209d368()->s1bc = 0;
    func_ov123_0209d368()->s1c8 = 0;
    func_ov123_0208d4cc(func_ov123_0209d368()->s10);
    func_ov123_0209d368()->s204                                 = 0;
    func_ov123_0209d368()->af4[func_ov123_0209d368()->cnt + 1]  = a;
    func_ov123_0209d368()->a24[func_ov123_0209d368()->cnt + 1]  = b;
    func_ov123_0209d368()->a_a4[func_ov123_0209d368()->cnt + 1] = c;
    func_ov123_0209d368()->s1b8                                 = b;
    func_ov123_0209d368()->s1b4                                 = c;
    func_ov123_0209d368()->b2d0[func_ov123_0209d368()->cnt + 1] = func_ov123_0209e554();
    t.a                                                         = a;
    t.b                                                         = func_ov123_0209d368()->b2d0[func_ov123_0209d368()->cnt + 1];
    i                                                           = 1;
    if (i <= func_ov123_0209d368()->cnt) {
        do {
            r = func_ov123_020a1b40(7, func_ov123_0209d368()->af4[i], func_ov123_0209d368()->a24[i],
                                    func_ov123_0209d368()->a_a4[i], &t, 2);
            if (r != 0) {
                return r;
            }
            i++;
        } while (i <= func_ov123_0209d368()->cnt);
    }
    func_ov123_0209e364(1);
    return 0;
}
