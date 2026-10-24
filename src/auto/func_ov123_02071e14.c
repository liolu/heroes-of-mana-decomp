/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[8];
    u8 f8;
    u8 p9;
    u16 fa;
    u8 pad2[0x18 - 0xc];
    u16 f18;
    u8 pad3[2];
    s32 f1c;
    u8 pad4[0x40 - 0x20];
    s32 f40;
    s32 f44;
} P;
typedef struct {
    u8 pad[0xc4];
    P *p;
    u8 pad2[0xf8 - 0xc8];
    s32 base;
} Q;
typedef struct {
    u8 pad[0x64];
    Q *q;
} O;
s32 func_ov123_02071e14(O *o, s32 *out1, u16 *out2, u16 *out3, s32 *out4) {
    Q *q     = o->q;
    P *p     = q->p;
    s32 base = q->base;
    s32 d    = p->f44 - base;
    if (d >= 0) {
        *out2 = p->fa;
        *out3 = p->f18;
        *out4 = p->f1c;
        *out1 = d;
        if (d == 0 && p->f8 != 4) {
            return 0;
        }
    } else {
        *out1 = -1;
        return 0;
    }
    return p->f40 + base;
}
