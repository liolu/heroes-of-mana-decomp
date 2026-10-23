#include "m2c.h"

typedef struct {
    s32 f0, f4, f8, fc, f10, f14;
    u8 pad[0x510 - 0x18];
} E;

typedef struct {
    s32 x;
    E *arr;
} G;

typedef struct {
    u8 pad[0x50c];
    u16 h;
} H;

extern G data_ov111_020f13c0;
extern H *data_ov111_020f1bd8;
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);

void func_ov111_020e63bc(void) {
    s32 i                          = func_ov111_020e5d60(1);
    data_ov111_020f13c0.arr[i].f0  = func_ov111_020e5d98(3) << 10;
    data_ov111_020f13c0.arr[i].f8  = func_ov111_020e5d98(5) << 10;
    data_ov111_020f13c0.arr[i].f4  = func_ov111_020e5d98(7) << 10;
    data_ov111_020f13c0.arr[i].fc  = data_ov111_020f13c0.arr[i].f0;
    data_ov111_020f13c0.arr[i].f14 = data_ov111_020f13c0.arr[i].f8;
    data_ov111_020f13c0.arr[i].f10 = data_ov111_020f13c0.arr[i].f4;
    data_ov111_020f1bd8->h += 9;
}
