/* compiler: 2.0/sp1p5 */
#include "m2c.h"
typedef struct {
    volatile u32 s;
    volatile u32 d;
    volatile u32 c;
} Dma;
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_01ff81f4(s32 ch, u32 src, u32 dst, u32 ctl) {
    s32 st = func_0200fa98();
    Dma *r = &((Dma *) 0x040000B0)[ch];
    r->s   = src;
    r->d   = dst;
    r->c   = ctl;
    *(volatile u32 *) 0x040000B0;
    *(volatile u32 *) 0x040000B0;
    if (ch == 0) {
        r->s = 0;
        r->d = 0;
        r->c = 0x81400001;
    }
    func_0200faac(st);
}
