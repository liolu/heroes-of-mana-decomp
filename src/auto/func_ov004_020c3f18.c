#include "m2c.h"
s32 func_ov004_020b9cf4(void *p);
void func_ov004_020b9d44(void *p, s32 n);
void func_ov004_020b9d1c(s32 *out, void *p);
void func_ov004_020b9d54(u8 *out, void *p);
void func_ov004_020c3f18(s32 *o, void *r) {
    s32 a;
    s32 b;
    u8 c[4];
    o[1] = func_ov004_020b9cf4(r);
    func_ov004_020b9d44(r, 2);
    func_ov004_020b9d1c(&a, r);
    o[2] = a;
    func_ov004_020b9d1c(&b, r);
    o[3] = b;
    func_ov004_020b9d54(c, r);
    ((u8 *) o)[0x10] = c[0];
    ((u8 *) o)[0x11] = c[1];
    ((u8 *) o)[0x12] = c[2];
    ((u8 *) o)[0x13] = c[3];
}
