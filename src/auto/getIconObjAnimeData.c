/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 w;
    s32 a;
    s32 b;
    s32 c;
    s32 p;
} S;
void ReadAnaFile(int, s32 *, s32 *);

void getIconObjAnimeData(s32 x) {
    S v;
    v.p = x;
    v.a = 5;
    v.b = 6;
    v.c = 1;
    ReadAnaFile(4, &v.a, &v.w);
}
