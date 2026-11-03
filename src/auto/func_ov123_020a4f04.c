/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u32 lo;
    u32 hi;
} W;
typedef struct {
    u32 w0;
    u32 w1;
    W v;
    u16 h;
    u16 pad;
} P;
typedef union {
    W w;
    u64 v;
} U;
extern u8 data_ov123_020e2058[];
extern u8 data_ov123_020e2064[];
void MI_CpuCopy8(void *, void *, s32);
u8 *func_ov123_020a4f04(P *p) {
    U u;
    u.w = p->v;
    MI_CpuCopy8(p, data_ov123_020e2058, 5);
    data_ov123_020e2058[5] = ((p->w1 >> 8) & 7) | (((u32) u.v & 0x1f) << 3);
    u.v >>= 5;
    MI_CpuCopy8(&u, data_ov123_020e2058 + 6, 4);
    data_ov123_020e2058[10] = ((u32) (u.v >> 32) & 0x3f) | ((p->h & 3) << 6);
    data_ov123_020e2058[11] = p->h >> 2;
    MI_CpuCopy8((u8 *) p + 0x12, data_ov123_020e2064, 2);
    return data_ov123_020e2058;
}
