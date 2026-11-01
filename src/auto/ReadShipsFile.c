/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 p;
    s32 q;
} S;
void ReadAnaFile(s32, s32 *, s32 *);

void ReadShipsFile(s32 x, s32 y, s32 *z) {
    S v;
    v.q = y;
    v.p = x;
    v.a = 5;
    v.b = 8;
    ReadAnaFile(4, &v.a, z);
}
