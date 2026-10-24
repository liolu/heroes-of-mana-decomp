/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    void **p4;
    u8 pad1[5];
    u8 fd;
    u8 pad2[9];
    u8 f17;
    u8 pad3[8];
    s32 f20;
    s32 a24[32];
    u16 aa4[40];
    s32 af4[45];
    u8 f1a8;
    u8 pad4[0x348 - 0x1a9];
    s32 f348;
} G;

G *func_ov123_0209d368(void);
s32 func_ov123_020a1b40(s32, s32, s32, u16, void *, s32);
void func_ov123_020885ec(void *);

s32 func_ov123_0209fae0(void) {
    s32 i = 1;
    s32 t;
    if ((s32) func_ov123_0209d368()->fd >= 1) {
        do {
            G *a = func_ov123_0209d368();
            G *b = func_ov123_0209d368();
            G *c = func_ov123_0209d368();
            G *d = func_ov123_0209d368();
            t    = func_ov123_020a1b40(10, a->af4[i], b->a24[i], c->aa4[i], &d->f348, func_ov123_0209d368()->f348 + 1);
            if (t != 0) {
                return t;
            }
            i++;
        } while (i <= func_ov123_0209d368()->fd);
    }
    func_ov123_0209d368()->f17  = 0;
    func_ov123_0209d368()->f20  = 0;
    func_ov123_0209d368()->f1a8 = 1;
    func_ov123_020885ec(*func_ov123_0209d368()->p4);
    func_ov123_0209d368()->f1a8 = 0;
    return 0;
}
