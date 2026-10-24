/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void MI_CpuCopy8(void *, void *, s32);
u64 func_0200f510(void);
s32 func_0200fa98(void);
void func_0200faac(s32);
extern u8 data_ov123_020e0c04[];

void func_ov123_020775f0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *best;
    s32 saved;
    u32 now;
    s32 i;
    u32 score;
    u8 *p;
    u32 d;
    u8 used;

    saved = func_0200fa98();
    now   = (u32) (func_0200f510() >> 16);
    best  = data_ov123_020e0c04;
    score = 0;
    i     = 0;
    p     = best;
    for (; i < 4; i++, p += 0x5C) {
        used = p[0x5A];
        if (used != 0 && arg1 != 0 && arg1 == *(s32 *) (p + 0x54) && arg2 != 0 && arg2 == *(u16 *) (p + 0x58)) {
            best = p;
            break;
        }
        if (score != -1U) {
            if (used == 0) {
                score = -1U;
                best  = p;
            } else {
                d = now - *(u32 *) (p + 0x50);
                if (d > score) {
                    score = d;
                    best  = p;
                }
            }
        }
    }
    MI_CpuCopy8(arg0 + 0x74, best, 0x20);
    MI_CpuCopy8(arg0, best + 0x20, 0x30);
    *(u32 *) (best + 0x50) = now;
    best[0x5A]             = 1;
    *(s32 *) (best + 0x54) = arg1;
    *(s16 *) (best + 0x58) = arg2;
    func_0200faac(saved);
}
