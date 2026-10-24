#include "m2c.h"

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wc;
    s32 w10;
    s32 w14;
    u16 h18;
    u16 h1a;
    u16 h1c;
    u8 pad[0x510 - 0x20];
} E;
typedef struct {
    s32 a;
    E *arr;
} G;
typedef struct {
    u8 pad[0x50c];
    u16 cnt;
} H;
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
extern G data_ov111_020f13c0;
extern H *data_ov111_020f1bd8;

void func_ov111_020e6628(void) {
    s32 i = func_ov111_020e5d60(1);
    E *p;
    data_ov111_020f13c0.arr[i].h1c = func_ov111_020e5d98(3);
    data_ov111_020f13c0.arr[i].h18 = func_ov111_020e5d98(3);
    data_ov111_020f13c0.arr[i].wc  = data_ov111_020f13c0.arr[i].w0;
    p                              = &data_ov111_020f13c0.arr[i];
    p->w14                         = p->w8;
    *(u16 *) ((u8 *) data_ov111_020f1bd8 + 0x50c) += 5;
}
