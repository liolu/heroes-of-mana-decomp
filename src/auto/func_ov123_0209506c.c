/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_02094d64(void);
s32 func_ov123_02096238(s32, s32);
void func_ov123_020a6144(void *);
s32 func_ov123_020a62e4(void *, s32);
void func_ov123_020a6334(s32);
typedef struct Sub {
    u8 pad0[8];
    s32 state;
    u8 pad1[0x20c - 0xc];
    s32 (*alloc)(void *, s32);
    void (*release)(void *, s32, s32);
    u8 pad2[0x314 - 0x214];
    s32 handle;
} Sub;
typedef struct Big {
    u8 pad[0x1000];
    Sub s;
} Big;
extern u8 data_ov123_020dbfe0[];
extern u8 data_ov123_020dbff0[];
extern Big *data_ov123_020e1678;
extern u8 data_ov123_020e167c[];
s32 func_ov123_0209506c(void) {
    Sub *s;
    s32 (*alloc)(void *, s32);
    void (*release)(void *, s32, s32);
    s32 r;
    s       = &data_ov123_020e1678->s;
    alloc   = s->alloc;
    release = s->release;
    if (func_ov123_02096238(s->handle, 0) != 1) {
        data_ov123_020e1678->s.state = 0x4E84;
        return 0xE;
    }
    if (func_ov123_02094d64() != 0) {
        return 0xE;
    }
    s = &data_ov123_020e1678->s;
    if (s->state < 0x4E84) {
        if (s->state == 0x4E22) {
            r = alloc(data_ov123_020dbfe0, 0x71F);
            if (r == 0) {
                data_ov123_020e1678->s.state = 0x4E84;
                return 2;
            }
            if (func_ov123_020a62e4(data_ov123_020e167c, (r + 0x1F) & ~0x1F) != 1) {
                release(data_ov123_020dbff0, r, 0);
                data_ov123_020e1678->s.state = 0x4E84;
                return 0xF;
            }
            release(data_ov123_020dbff0, r, 0);
        }
        return 0x15;
    }
    switch (s->state) {
        case 0x4E88:
            func_ov123_020a6144(data_ov123_020e167c);
            data_ov123_020e1678->s.state = 0x4E88;
            return 0x10;
        case 0x4E8C:
            r = alloc(data_ov123_020dbfe0, 0x700);
            if (r == 0) {
                data_ov123_020e1678->s.state = 0x4E8C;
                return 0x11;
            }
            func_ov123_020a6334((r + 0x1F) & ~0x1F);
            release(data_ov123_020dbff0, r, 0);
            data_ov123_020e1678->s.state = 0x4E8C;
            return 0x11;
        default:
            return 0x12;
    }
}
