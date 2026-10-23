#include "m2c.h"
typedef struct {
    u8 pad[4];
    s32 f4;
    u8 b[4];
} O;
s32 func_ov004_020b9cf4(s32);
void func_ov004_020b9d44(s32, s32);
void func_ov004_020b9d54(u8 *, s32);

void func_ov004_020bdbb0(O *o, s32 x) {
    u8 sp[4];
    o->f4 = func_ov004_020b9cf4(x);
    func_ov004_020b9d44(x, 2);
    func_ov004_020b9d54(sp, x);
    o->b[0] = sp[0];
    o->b[1] = sp[1];
    o->b[2] = sp[2];
    o->b[3] = sp[3];
}
