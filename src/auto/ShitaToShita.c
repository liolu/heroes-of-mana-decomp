/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u16 ShitaToShita(s32 a, s32 b, s32 step) {
    s32 d = a - b;
    s32 ad;
    if (d < 0) {
        ad = -d;
    } else {
        ad = d;
    }
    if (ad <= step) {
        return (u16) a;
    }
    if (a > b) {
        if (d > 0x8000) {
            b -= step;
        } else {
            b += step;
        }
    } else {
        if (b - a > 0x8000) {
            b += step;
        } else {
            b -= step;
        }
    }
    return (u16) b;
}
