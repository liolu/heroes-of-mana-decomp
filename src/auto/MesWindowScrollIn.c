/* compiler: 2.0/sp1p5 -profile */
/* near start: 4 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 pad : 8;
    u32 k : 1;
    u32 rest : 23;
} F44;

extern u8 *data_ov000_02051550;
void MIi_CpuCopy16(void *src, void *dst, s32 n);

s32 MesWindowScrollIn(s32 idx) {
    s32 off = idx * 0xd0;
    u16 c;
    s32 r;
    u8 *w;
    u32 k;
    u8 *e;
    s32 *p;

    c = *(u16 *) (data_ov000_02051550 + 0xc0 + off);
    if (c == 0) {
        r = 1;
    } else if (c != 0) {
        if (c > 2) {
            *(u16 *) (data_ov000_02051550 + 0xc0 + off) = c - 2;
        } else {
            *(u16 *) (data_ov000_02051550 + 0xc0 + off) = 0;
        }
        w = data_ov000_02051550 + off;
        c = *(u16 *) (w + 0xc0);
        MIi_CpuCopy16(*(u8 **) (w + 0xbc) + (c << 6), *(void **) (w + 0xc4), (0xa - c) << 6);
        w = data_ov000_02051550 + off;
        k = ((F44 *) (w + 0x44))->k;
        e = w + k * 0x14;
        if (((*(u32 *) (e + 0x8c) << 30) >> 31) != 0) {
            p = *(s32 **) (e + 0x98);
            if (k == 0) {
                if (p != 0) {
                    *p = 0x30 - (*(u16 *) (w + 0xc0) * 8);
                }
            } else if (p != 0) {
                *p = *(u16 *) (w + 0xc0) * 8 + 0xd0;
            }
        }
        if (*(u16 *) (data_ov000_02051550 + off + 0xc0) == 0) {
            r = 1;
        } else {
            goto blk;
        }
    } else {
    blk:
        r = 0;
    }
    return r;
}
