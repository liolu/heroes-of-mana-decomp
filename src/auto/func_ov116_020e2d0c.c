/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void func_ov116_020e4660(s32, s32, s32, s32, s32, s32);
void func_ov116_020e46c4(s32, s32, s32, s32, s32, void *);
void func_ov116_020e4850(s32, s32, u8, s32, s32, void *);
extern u8 data_ov116_020e7194[];
extern s32 data_ov116_020e71a8[];
typedef struct E30 {
    u8 b[0x30];
} E30;
extern E30 data_ov116_020e75b8[];
extern u8 data_ov116_020e7678[];

void func_ov116_020e2d0c(s32 a) {
    s32 i;
    u8 *p;
    s32 y;
    s32 n;
    data_ov116_020e71a8[0] = 0x200;
    data_ov116_020e71a8[2] = 0x400;
    func_ov116_020e46c4(0x10, 0x10, 0x10, 0, 0, data_ov116_020e7678);
    func_ov116_020e4660(3, a + 5, 0x12, 2, 0, 0);
    func_ov116_020e4660(3, a + 0x15, 0x13, 2, 0, 0);
    func_ov116_020e4660(0x13, a + 6, 0x14, 2, 0, 0);
    func_ov116_020e4660(0x13, a + 0xC, 0x15, 2, 0, 0);
    func_ov116_020e4850(0x8D, 0x4A, data_ov116_020e7194[8], 0, 0, data_ov116_020e75b8);
    i = 0;
    p = data_ov116_020e7194;
    y = 0x7A;
    do {
        n = i + 1;
        func_ov116_020e4850(0x8D, y, p[9], 0, 0, (u8 *) data_ov116_020e75b8 + n * 0x30);
        i++;
        p++;
        y += 0x18;
    } while (i < 3);
}
