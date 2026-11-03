/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x824];
    s32 f824;
    s32 f828;
    s32 f82c;
} Ctx;
typedef struct {
    u8 pad[0xc];
    Ctx *ctx;
} Hd;
extern void (*data_ov123_020df210)(s32);
void func_ov123_02074520(u32 n, Hd *h) {
    Ctx *c;
    c = h->ctx;
    if (n >= (u32) (c->f828 - c->f82c)) {
        if (c->f824 != 0) {
            data_ov123_020df210(c->f824);
        }
        c->f824 = 0;
    } else {
        c->f82c += n;
    }
}
