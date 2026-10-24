/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct P {
    u32 a;
    u32 b;
    u32 w8_lo : 23;
    u32 f : 1;
    u32 w8_hi : 8;
} P;
typedef struct U {
    u32 on : 1;
    u32 r : 31;
    u8 pad[0xc8];
    u8 o_cc;
    u8 pp[3];
    s8 o_d0;
    s8 o_d1;
    s8 o_d2;
    s8 o_d3;
    u8 pad2[0x11];
    P *p;
} U;
void changeOccasion(s8, void *, void *, s32, s32);
void changeOccWithKihon(s8 a, U *u, s32 b, s8 c) {
    s8 t;
    if (u->on != 0 && u->p != 0) {
        if (u->p->f == 0) {
            u->o_d0 = a;
            t       = b;
            u->o_d1 = t;
            u->o_d2 = t;
            u->o_d3 = c;
            u->o_cc = 0xff;
            changeOccasion(a, &u->o_cc, u, b, c);
        }
    }
}
