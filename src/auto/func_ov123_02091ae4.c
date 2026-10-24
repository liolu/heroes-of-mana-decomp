/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct E {
    u8 b0;
    u8 b1;
    u8 lvl;
    u8 b3;
} E;
void MIi_CpuCopy32(void *, void *, s32);
void func_ov123_02091ae4(s32 i, u16 *src, s32 val, s32 b) {
    u8 *base = (u8 *) b;
    u8 *dst  = base + 0x470 + i * 0xc0;
    s32 w    = src[1];
    E *e     = (E *) ((u32 *) base + 0x111) + i;
    if (w & 2) {
        w = (u8) (w >> 2);
    } else {
        w = (u8) ((w >> 2) + 0x19);
    }
    if ((u8) w > e->lvl) {
        e->lvl = w;
        e->b3  = (e->b3 & ~0x7f) | (val & 0x7f);
    }
    MIi_CpuCopy32(src, dst, 0xc0);
}
