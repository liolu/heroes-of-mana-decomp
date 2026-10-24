/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    u8 d[8];
    u8 q[0x18];
} E;
extern u8 func_ov123_02092a74(u8 *);
extern void MI_CpuCopy8(void *, void *, s32);
extern u8 data_ov123_020d5044[];
u8 func_ov123_02092c84(u8 *o) {
    u8 n;
    E *e = (E *) (o + 0x300);
    u32 k;
    n = func_ov123_02092a74(o);
    e = e + n;
    k = (u32) (*(u8 *) (o + 0xd0c) << 28) >> 28;
    if (k == 0 || k == 6) {
        MI_CpuCopy8(data_ov123_020d5044, e->d, 8);
        e->b = 8;
        e->a = 8;
        n    = n + 1;
    }
    return n;
}
