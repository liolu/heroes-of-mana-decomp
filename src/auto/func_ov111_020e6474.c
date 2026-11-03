#include "m2c.h"
typedef struct {
    s32 x;
    s32 pad;
    s32 y;
    s32 x2;
    s32 pad2;
    s32 y2;
    u8 rest[0x510 - 0x18];
} E;
typedef struct {
    s32 a;
    E *p;
} G;
extern G data_ov111_020f13c0;
extern u8 *data_ov111_020f1bd8;
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e6474(void) {
    s32 i                       = func_ov111_020e5d60(1);
    data_ov111_020f13c0.p[i].x  = func_ov111_020e5d98(3) << 10;
    data_ov111_020f13c0.p[i].y  = func_ov111_020e5d98(5) << 10;
    data_ov111_020f13c0.p[i].x2 = data_ov111_020f13c0.p[i].x;
    data_ov111_020f13c0.p[i].y2 = data_ov111_020f13c0.p[i].y;
    *(u16 *) (data_ov111_020f1bd8 + 0x50c) += 7;
}
