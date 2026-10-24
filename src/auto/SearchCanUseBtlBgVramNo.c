/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void func_0200fddc();
extern u8 *data_ov000_02051550;

u32 SearchCanUseBtlBgVramNo(u32 n, s32 idx) {
    u16 cnt;
    u16 start;
    u16 i;
    s32 base;
    base = idx * 0xD0;
    i    = 1;
    while (1) {
        if (!(*(u32 *) (base + (s32) data_ov000_02051550 + (((s32) i >> 5) << 2) + 8) & (1 << (i & 0x1F)))) {
            start = i;
            cnt   = 0;
            if (cnt < n) {
                do {
                    if (*(u32 *) (base + (s32) data_ov000_02051550 + (((s32) i >> 5) << 2) + 8) & (1 << (i & 0x1F))) {
                        break;
                    }
                    i   = i + 1;
                    cnt = cnt + 1;
                    if (i >= 0x1C0) {
                        func_0200fddc();
                    }
                } while (cnt < n);
            }
            if (cnt == n) {
                return start;
            }
        }
        if (*(s32 *) (base + (s32) data_ov000_02051550 + (((s32) i >> 5) << 2) + 8) == -1) {
            i = (i + 0x20) & ~0x1F;
        } else {
            i = i + 1;
        }
        if (i >= 0x1C0) {
            func_0200fddc();
        }
    }
}
