/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void func_0200fddc(void);
extern u8 *data_ov000_0205154c;
s32 SearchTexPalMap(s32 n) {
    s32 b;
    s32 run;
    s32 start;
    u32 k;
    u32 *next;
    s32 pos;
    u32 *p;
    u32 word;
    s32 j;

    b    = 0;
    run  = 0;
    word = *(u32 *) (data_ov000_0205154c + 0xAB4);
    next = (u32 *) (data_ov000_0205154c + 0xAB4) + 1;
    pos  = 0;
    for (;;) {
        if (word & 1) {
            run = 0;
        } else {
            run += 1;
        }
        if (run >= n) {
            start = pos - (run - 1);
            for (j = 0; j < n; j++) {
                k            = start + j;
                p            = (u32 *) (data_ov000_0205154c + (k >> 5) * 4);
                p[0xAB4 / 4] = p[0xAB4 / 4] | (1 << (k & 0x1F));
            }
            return start << 5;
        }
        pos += 1;
        if (b == 0x1F) {
            word = *next++;
            b    = 0;
        } else {
            b += 1;
            word = word >> 1;
        }
        if (pos >= 0x200) {
            func_0200fddc();
            return 0;
        }
    }
}
