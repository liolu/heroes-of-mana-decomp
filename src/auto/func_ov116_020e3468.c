#include "m2c.h"

typedef struct {
    u32 c : 2;
    u32 b : 10;
    u32 a : 10;
    u32 d : 10;
} Fa;

typedef struct {
    u32 lo : 14;
    u32 hi : 14;
    u32 pad : 4;
} Fb;

typedef struct {
    u32 lo : 14;
    u32 mid : 8;
    u32 top : 10;
} Fc;

typedef struct {
    Fa a;
    u32 t;
    u32 pad;
    Fb b;
    Fc c;
} Tot;

extern s32 data_ov116_020e71a8[];
extern Tot data_ov116_020e7194;
extern u8 data_ov116_020e7188[];
extern u8 data_ov116_020e7678[];

extern void func_ov116_020e46c4(s32 a, s32 b, s32 c, s32 d, s32 e, void *f);
extern void func_ov116_020e3358(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_ov116_020e3424(s32 a, s32 b, s32 c, s32 d);
extern void func_ov116_020e5158(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_ov116_020e4660(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void func_ov116_020e3468(s32 x, s32 n) {
    s32 i;
    s32 j;
    u32 m;

    data_ov116_020e71a8[0] = 0x280;
    data_ov116_020e71a8[2] = 0x480;
    func_ov116_020e46c4(0x10, 0x10, 0x11, 0, 0, data_ov116_020e7678);
    m = data_ov116_020e7194.t / 3600;
    func_ov116_020e3358(0x10, x + 6, m / 60, m % 60, (data_ov116_020e7194.t / 60) % 60);
    func_ov116_020e3424(0x19, x + 6, data_ov116_020e7188[0], 0);
    func_ov116_020e5158(*(u32 *) &data_ov116_020e7194 >> 22, 0x15, x + 9, 3, 1, 0, 0x1c0);
    func_ov116_020e5158(data_ov116_020e7194.a.a, 0x15, x + 12, 3, 1, 0, 0x1c0);
    func_ov116_020e5158(data_ov116_020e7194.a.b, 0x15, x + 15, 3, 1, 0, 0x1c0);
    func_ov116_020e5158(data_ov116_020e7194.b.hi, 0x14, x + 18, 4, 1, 0, 0x1c0);
    func_ov116_020e5158(data_ov116_020e7194.b.lo, 0x14, x + 21, 4, 1, 0, 0x1c0);
    func_ov116_020e3424(0x19, x + 9, data_ov116_020e7188[4], 0);
    func_ov116_020e3424(0x19, x + 12, data_ov116_020e7188[1], 0);
    func_ov116_020e3424(0x19, x + 15, data_ov116_020e7188[6], 0);
    func_ov116_020e3424(0x19, x + 18, data_ov116_020e7188[5], 0);
    func_ov116_020e3424(0x19, x + 21, data_ov116_020e7188[2], 0);
    if (n != 6) {
        func_ov116_020e5158(data_ov116_020e7194.c.mid, 0x15, x + 24, 3, 1, 0, 0x1c0);
        func_ov116_020e5158(data_ov116_020e7194.c.lo, 0x14, x + 27, 4, 1, 0, 0x1c0);
        func_ov116_020e3424(0x19, x + 24, data_ov116_020e7188[3], 0);
        func_ov116_020e3424(0x19, x + 27, data_ov116_020e7188[8], 0);
    }
    i = 0;
    if (n > 0) {
        j = 6;
        do {
            func_ov116_020e4660(3, x + j, i + 0x16, 2, 0, 0);
            i++;
            j += 3;
        } while (i < n);
    }
}
