#include "m2c.h"

s32 func_ov120_020f15b4(u32, u32, u32);             /* extern */
void *func_ov120_020f16dc(u32);                     /* extern */

typedef struct {
    u32 dummy : 2;
    u32 f2 : 10;
    u32 f12 : 10;
    u32 f22 : 10;
} A0_020f17c8;

typedef struct {
    u32 g0 : 14;
    u32 g14 : 14;
    u32 dummy : 4;
} A3_020f17c8;

typedef struct {
    u32 h0 : 14;
    u32 h14 : 8;
    u32 dummy : 10;
} A4_020f17c8;

typedef struct {
    u32 f0 : 1;
    u32 f1 : 15;
    u32 f16 : 1;
    u32 f17 : 15;
} P_020f17c8;

typedef struct {
    u32 h0 : 10;
    u32 h10 : 8;
    u32 h18 : 14;
} P4_020f17c8;

s32 func_ov120_020f17c8(u32 arg0, u32 arg1, void *arg2) {
    P_020f17c8 *p;

    p = func_ov120_020f16dc(arg1);
    if (p == NULL) {
        return 0;
    }
    switch (arg0) {
        case 0:
            return func_ov120_020f15b4(((u32 *) arg2)[1] / 60 * 100 / ((u32 *) p)[1], 0, 0);
        case 4:
            return func_ov120_020f15b4(((A0_020f17c8 *) arg2)->f22 * 100 / p[2].f1, 1, p[2].f0);
        case 5:
            return func_ov120_020f15b4(((A3_020f17c8 *) ((u32 *) arg2 + 3))->g14 * 100 / p[3].f1, 1, p[3].f0);
        case 2:
            return func_ov120_020f15b4(((A3_020f17c8 *) ((u32 *) arg2 + 3))->g0 * 100 / p[3].f17, 1, p[3].f16);
        case 6:
            return func_ov120_020f15b4(((A0_020f17c8 *) arg2)->f2 * 100 / ((P4_020f17c8 *) p)[4].h0, 0, 0);
        case 1:
            return func_ov120_020f15b4(((A0_020f17c8 *) arg2)->f12 * 100 / p[2].f17, 0, p[2].f16);
        case 7:
            return func_ov120_020f15b4(((A4_020f17c8 *) ((u32 *) arg2 + 4))->h0 * 100 / ((P4_020f17c8 *) p)[4].h18, 0, 0);
        case 3:
            return func_ov120_020f15b4(((A4_020f17c8 *) ((u32 *) arg2 + 4))->h14 * 100 / ((P4_020f17c8 *) p)[4].h10, 1, 0);
        default:
            return 0;
    }
}
