/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

void func_ov123_020af480(int, int);
void func_ov123_020af5e8(int, int, int);
extern u8 data_ov123_020d7a74;
typedef struct {
    u8 p[0x11d];
    s8 v;
} G;
extern G *data_ov123_020e45bc;

void func_ov123_020af55c(s8 a) {
    int i, x, y, j;
    x                      = 0;
    y                      = 0;
    i                      = 0;
    j                      = 0;
    data_ov123_020e45bc->v = a;
    do {
        func_ov123_020af5e8(a, i, *((u16 *) ((u32 *) &data_ov123_020d7a74 + j) + 1));
        i += 1;
        j += 12;
    } while (i < 4);
    if (a == 2) {
        x = 1;
    } else if (a == 1) {
        y = 1;
    }
    func_ov123_020af480(0x2f, x);
    func_ov123_020af480(0x30, y);
}
