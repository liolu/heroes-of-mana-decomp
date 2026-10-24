/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void MIi_CpuClear16(int, void *, int);
int GetNoInCanOut(int, int);
int SetUpOneObjByFirstPosByCntUnit(int, void *, void *, int, int);
extern u8 data_ov003_020a874c;
typedef struct {
    int p0;
    u32 lo : 4;
    u32 mid : 5;
    u32 hi : 23;
} S;

int SetUpOneObjByFirstPos(int a, void *b, S *c, int d) {
    int r;
    MIi_CpuClear16(0, b, 0x110);
    r = GetNoInCanOut(c->lo, c->mid);
    if (r == -1) {
        return 0;
    }
    return SetUpOneObjByFirstPosByCntUnit(a, b, c, d, r);
}
