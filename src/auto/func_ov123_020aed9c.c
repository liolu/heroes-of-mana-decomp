/* compiler: 1.2/sp3 */
/* near start: 4 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct G {
    u8 pad[0x90];
    volatile u32 *p;
    u8 pad2[0x89];
    u8 c;
} G;
extern G *data_ov123_020e45bc;
extern u8 func_ov123_020aed20[];
void func_ov123_020af5e8(u8, s32, s32);
void func_ov123_020cb618(void *, void *);
void func_ov123_020aed9c(void *a) {
    volatile s32 x;
    volatile s32 y;
    s32 v;
    G *g            = data_ov123_020e45bc;
    volatile u32 *p = g->p;
    x               = (*p & 0x1ff0000) >> 16;
    v               = *p & 0xff;
    y               = v;
    y               = v + 12;
    v               = v + 12;
    func_ov123_020af5e8(g->c, 2, v);
    if (y < 0xc0) {
        return;
    }
    func_ov123_020cb618(a, func_ov123_020aed20);
}
