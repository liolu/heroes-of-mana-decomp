#include "m2c.h"
typedef struct {
    void *p0;
    u8 pad[0x18];
    s32 f1c;
    s32 f20;
} D;
extern D data_ov111_020f1bd8;
s64 func_0202c0ec(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e9c50(s32, s64, s64, s64, s32);
void func_ov111_020e705c(void) {
    s32 a, b, c, e;
    s64 x, y, z;
    func_ov111_020e5d98(1);
    a = func_ov111_020e5d98(1);
    b = func_ov111_020e5d98(5);
    c = func_ov111_020e5d98(3);
    x = func_0202c0ec(a << 10);
    y = func_0202c0ec(b << 10);
    z = func_0202c0ec(c << 10);
    func_ov111_020e9c50(6, x, y, z, data_ov111_020f1bd8.f1c);
    a = func_ov111_020e5d98(7);
    b = func_ov111_020e5d98(9);
    c = func_ov111_020e5d98(0xB);
    x = func_0202c0ec(a);
    y = func_0202c0ec(b);
    func_ov111_020e9c50(7, x, y, func_0202c0ec(c), data_ov111_020f1bd8.f20);
    data_ov111_020f1bd8.f1c += 1;
    data_ov111_020f1bd8.f20 += 1;
    *(u16 *) ((u8 *) data_ov111_020f1bd8.p0 + 0x50C) += 0xD;
}
