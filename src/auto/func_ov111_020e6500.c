#include "m2c.h"
typedef struct {
    s32 a;
    u8 *p;
} G;
extern G data_ov111_020f13c0;
extern u8 *data_ov111_020f1bd8;
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);

void func_ov111_020e6500(void) {
    s32 off = func_ov111_020e5d60(1) * 0x510;
    u8 *p;
    u8 *q;
    s32 t;
    s32 v                                  = func_ov111_020e5d98(3);
    *(s32 *) (data_ov111_020f13c0.p + off) = v << 10;
    p                                      = data_ov111_020f13c0.p;
    t                                      = *(s32 *) (p + off);
    p += off;
    *(s32 *) (p + 0xc) = t;
    q                  = data_ov111_020f1bd8;
    q += 0x500;
    *(u16 *) (q + 0xc) += 5;
}
