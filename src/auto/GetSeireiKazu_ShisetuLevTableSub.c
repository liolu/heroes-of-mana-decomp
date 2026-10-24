/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *ReadAnaFile(s32, s32 *, s32 *);
u8 *GetSeireiKazu_ShisetuLevTableSub(u8 *out) {
    s32 x;
    s32 arr[4];
    u8 *r;
    *out   = 0;
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 12;
    r      = ReadAnaFile(3, arr, &x);
    if (r != 0) {
        u8 b = r[4];
        *out = b;
    }
    return r;
}
