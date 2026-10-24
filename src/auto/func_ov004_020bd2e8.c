#include "m2c.h"

extern void func_ov004_020b9d1c(s32 *, void *);
extern s32 func_ov004_020b9cf4(void *);
extern void func_ov004_020b9d44(void *, s32);

void func_ov004_020bd2e8(s32 *dst, void *src) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    func_ov004_020b9d1c(&a, src);
    dst[1] = a;
    dst[2] = func_ov004_020b9cf4(src);
    func_ov004_020b9d44(src, 2);
    func_ov004_020b9d1c(&b, src);
    dst[3] = b;
    dst[4] = func_ov004_020b9cf4(src);
    func_ov004_020b9d44(src, 2);
    func_ov004_020b9d1c(&c, src);
    dst[5] = c;
    dst[6] = func_ov004_020b9cf4(src);
    func_ov004_020b9d44(src, 2);
    func_ov004_020b9d1c(&d, src);
    dst[7] = d;
    dst[8] = func_ov004_020b9cf4(src);
    func_ov004_020b9d44(src, 2);
    func_ov004_020b9d1c(&e, src);
    dst[9] = e;
}
