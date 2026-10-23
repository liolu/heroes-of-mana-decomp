#include "m2c.h"
u32 func_ov123_02078770(u32 i, u32 *a) {
    u32 t = a[i] ^ (a[(i + 2) & 15] ^ (a[(i + 13) & 15] ^ a[i ^ 8]));
    a[i]  = (t * 2) | (t >> 31);
    return *(volatile u32 *) &a[i];
}
