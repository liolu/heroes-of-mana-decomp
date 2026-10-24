#include "m2c.h"

typedef struct B {
    u8 *buf;
    u32 cap;
    s32 len;
} B;
extern u8 data_ov123_020da0cc;
extern u8 data_ov123_020da0e4;
extern u8 data_ov123_020da168;
void func_02020d04(void *, void *, s32, s32);
u8 *func_ov123_020996b8(u8 *, s32);
void func_ov123_02086078(s32, void *);

s32 func_ov123_0207e260(s32 a, B *b, u8 c) {
    u8 *buf;
    u32 cap;
    s32 len;
    if (b == 0) {
        func_02020d04(&data_ov123_020da0cc, &data_ov123_020da0e4, 0, 0x25);
    }
    len = b->len;
    cap = ((volatile B *) b)->cap;
    buf = b->buf;
    if (cap == len) {
        cap += 0x800;
        buf = func_ov123_020996b8(buf, cap + 1);
        if (buf == 0) {
            func_ov123_02086078(a, &data_ov123_020da168);
            return 1;
        }
    }
    buf[len]                = c;
    buf[(u32) (len + 1)]    = 0;
    b->len                  = b->len + 1;
    ((volatile B *) b)->cap = cap;
    b->buf                  = buf;
    return 0;
}
