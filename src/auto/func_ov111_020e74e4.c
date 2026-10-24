#include "m2c.h"

typedef struct C {
    u8 pad[0x50C];
    u16 h50c;
} C;
s64 func_0202c0ec(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e9c50(s32, s64, s64, s64, s32);
extern C *data_ov111_020f1bd8;
extern s32 data_ov111_020f1bdc[];

void func_ov111_020e74e4(void) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s64 x;
    s64 y;
    s64 z;
    a = func_ov111_020e5d98(1);
    func_ov111_020e5d98(3);
    func_ov111_020e5d98(5);
    func_ov111_020e5d98(7);
    b = func_ov111_020e5d98(3);
    c = func_ov111_020e5d98(7);
    d = func_ov111_020e5d98(5);
    x = func_0202c0ec(b << 10);
    y = func_0202c0ec(c << 10);
    z = func_0202c0ec(d << 10);
    func_ov111_020e9c50(a, x, y, z, data_ov111_020f1bdc[a]);
    data_ov111_020f1bdc[a] = data_ov111_020f1bdc[a] + 1;
    data_ov111_020f1bd8->h50c += 9;
}
