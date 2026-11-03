/* near start: 12 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    u8 *st;
    u8 *pp;
} G;

extern G data_ov117_020f0ee0;
s32 func_ov117_020ed2d0(s32, s32, u8 *);
s32 func_ov117_020ed1c8(void);

void func_ov117_020e2f00(s32 a, s32 b) {
    s32 sum;
    s32 off2;
    s32 off1;
    s32 r;
    off1                         = a * 0x14;
    sum                          = 0;
    r                            = func_ov117_020ed2d0(0, b, data_ov117_020f0ee0.pp + off1);
    off2                         = a * 0xC;
    data_ov117_020f0ee0.st[off2] = r;
    sum += data_ov117_020f0ee0.st[off2];
    r                                = func_ov117_020ed2d0(1, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 1] = r;
    sum += data_ov117_020f0ee0.st[off2 + 1];
    r                                = func_ov117_020ed2d0(2, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 2] = r;
    sum += data_ov117_020f0ee0.st[off2 + 2];
    r                                = func_ov117_020ed2d0(3, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 3] = r;
    sum += data_ov117_020f0ee0.st[off2 + 3];
    r                                = func_ov117_020ed2d0(4, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 4] = r;
    sum += data_ov117_020f0ee0.st[off2 + 4];
    r                                = func_ov117_020ed2d0(5, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 5] = r;
    sum += data_ov117_020f0ee0.st[off2 + 5];
    r                                = func_ov117_020ed2d0(6, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 6] = r;
    sum += data_ov117_020f0ee0.st[off2 + 6];
    r                                              = func_ov117_020ed2d0(7, b, data_ov117_020f0ee0.pp + off1);
    data_ov117_020f0ee0.st[off2 + 8]               = r;
    *(u16 *) (data_ov117_020f0ee0.st + off2 + 0xA) = sum + data_ov117_020f0ee0.st[off2 + 8];
    data_ov117_020f0ee0.st[off2 + 7]               = func_ov117_020ed1c8();
}
