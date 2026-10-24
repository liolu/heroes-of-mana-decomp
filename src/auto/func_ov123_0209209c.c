/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 v : 2;
} BF;
typedef struct {
    u8 b[0xC0];
} D;
typedef struct {
    u8 pad[0x47C];
    D d[10];
    u8 pad2[0xD13 - 0x47C - 0xC0 * 10];
    u8 idx;
} S;
void MI_CpuCopy8(u8 *, u8 *, s32);
void func_ov123_0209417c(u8 *, u8 *);
void func_ov123_02094204(u8 *, u8 *);

s32 func_ov123_0209209c(u8 *p, u32 k, u8 *out) {
    s32 base;
    switch (k) {
        case 8:
        case 9:
        default:
            break;
        case 2:
            p += 0x100;
        case 1:
            p += 0x100;
        case 0:
            out[0] = ((BF *) (p + 0xE6))->v;
            MI_CpuCopy8(p + 0x80, out + 2, 0x50);
            break;
        case 5:
            p += 0x100;
        case 4:
            p += 0x100;
        case 3:
            out[0] = 1;
            MI_CpuCopy8(p + 0xD1, out + 2, 0x14);
            out[0x16] = 0;
            break;
        case 6:
            out[0] = 2;
            base   = (s32) p + 0x47C;
            func_ov123_0209417c((u8 *) (base + p[0xD13] * 0xC0), out + 2);
            break;
        case 7:
            out[0] = 2;
            base   = (s32) p + 0x47C;
            func_ov123_02094204((u8 *) (base + p[0xD13] * 0xC0), out + 2);
            break;
    }
    if (out[0] != 0) {
        return 1;
    }
    return 0;
}
