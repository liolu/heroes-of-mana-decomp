#include "m2c.h"
typedef struct C {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
} C;
s32 func_0202d478(s32, s32);
void func_ov119_020f0e84(C *arg0, C *arg1, C *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 dr, dg, db, t;
    arg2->a = 0;
    dr      = func_0202d478(arg1->r * arg3, arg4);
    dg      = func_0202d478(arg1->g * arg3, arg4);
    db      = func_0202d478(arg1->b * arg3, arg4);
    if (arg5 == 0) {
        arg2->b = 0;
        arg2->g = arg2->b;
        arg2->r = arg2->g;
        t       = arg0->r - dr;
        if (t > 0) {
            arg2->r = t;
        }
        t = arg0->g - dg;
        if (t > 0) {
            arg2->g = t;
        }
        t = arg0->b - db;
        if (t > 0) {
            arg2->b = t;
        }
    } else {
        arg2->b = 0x1F;
        arg2->g = arg2->b;
        arg2->r = arg2->g;
        t       = dr + arg0->r;
        if (t < 0x1F) {
            arg2->r = t;
        }
        t = dg + arg0->g;
        if (t < 0x1F) {
            arg2->g = t;
        }
        t = db + arg0->b;
        if (t < 0x1F) {
            arg2->b = t;
        }
    }
}