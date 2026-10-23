/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct G {
    u8 pad[0x30];
    volatile u32 *reg;
    u8 pad2[0x11d - 0x34];
    u8 b;
} G;
extern G *data_ov123_020e45bc;
extern u16 data_ov123_020d7a74[];
extern void func_ov123_020af5e8(s32, s32, s32);
extern void func_ov123_020b0474(void);
extern void func_ov123_020cb618(void *, void *);
void func_ov123_020b0524(void *arg) {
    volatile s32 s[2];
    s32 t;
    G *g            = data_ov123_020e45bc;
    volatile u32 *r = g->reg;
    s32 lim         = data_ov123_020d7a74[1];
    s[0]            = (*r & 0x1ff0000) >> 16;
    t               = *r & 0xff;
    s[1]            = t;
    t               = t - 12;
    s[1]            = t;
    if (t > lim) {
        func_ov123_020af5e8(g->b, 0, t);
        return;
    }
    func_ov123_020af5e8(g->b, 0, lim);
    func_ov123_020af5e8(data_ov123_020e45bc->b, 1, 0xc0);
    func_ov123_020cb618(arg, func_ov123_020b0474);
}
