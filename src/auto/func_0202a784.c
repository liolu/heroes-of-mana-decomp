#include "m2c.h"

typedef struct {
    u16 a[19];
} Buf;

extern u8 data_02036134;
extern u8 data_02036164;
extern u8 data_0203618c;
extern u8 data_020361a4;
extern u8 data_020361b4;
extern u8 data_020361bc;
extern u8 data_020361c4;
extern u8 data_020361cc;
extern u8 data_020361d4;
extern u8 data_020361d8;
extern u8 data_020361dc;
extern u8 data_020361e0;
extern u8 data_020361e4;
extern u8 data_020361e8;
extern u8 data_020361ec;
extern u8 data_020361f0;
extern u8 data_020361f4;
extern u8 data_020361f8;
extern u8 data_020361fc;
extern u8 data_02036200;
extern u8 data_02036204;

void __str2dec(Buf *, void *, s32);
void func_0202a564(Buf *, Buf *, Buf *);

void func_0202a784(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            __str2dec(dst, &data_02036134, -20);
            return;
        case -53:
            __str2dec(dst, &data_02036164, -16);
            return;
        case -32:
            __str2dec(dst, &data_0203618c, -10);
            return;
        case -16:
            __str2dec(dst, &data_020361a4, -5);
            return;
        case -8:
            __str2dec(dst, &data_020361b4, -3);
            return;
        case -7:
            __str2dec(dst, &data_020361bc, -3);
            return;
        case -6:
            __str2dec(dst, &data_020361c4, -2);
            return;
        case -5:
            __str2dec(dst, &data_020361cc, -2);
            return;
        case -4:
            __str2dec(dst, &data_020361d4, -2);
            return;
        case -3:
            __str2dec(dst, &data_020361d8, -1);
            return;
        case -2:
            __str2dec(dst, &data_020361dc, -1);
            return;
        case -1:
            __str2dec(dst, &data_020361e0, -1);
            return;
        case 0:
            __str2dec(dst, &data_020361e4, 0);
            return;
        case 1:
            __str2dec(dst, &data_020361e8, 0);
            return;
        case 2:
            __str2dec(dst, &data_020361ec, 0);
            return;
        case 3:
            __str2dec(dst, &data_020361f0, 0);
            return;
        case 4:
            __str2dec(dst, &data_020361f4, 1);
            return;
        case 5:
            __str2dec(dst, &data_020361f8, 1);
            return;
        case 6:
            __str2dec(dst, &data_020361fc, 1);
            return;
        case 7:
            __str2dec(dst, &data_02036200, 2);
            return;
        case 8:
            __str2dec(dst, &data_02036204, 2);
            return;
        default:
            func_0202a784(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            func_0202a564(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    __str2dec(&tmp2, &data_020361e8, 0);
                } else {
                    __str2dec(&tmp2, &data_020361e0, -1);
                }
                func_0202a564(dst, &tmp, &tmp2);
            }
            return;
    }
}
