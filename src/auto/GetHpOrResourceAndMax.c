/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

int func_02002414(int);
extern u8 data_ov003_020ac6c0;
typedef struct {
    u8 p[0x10];
    u16 hp;
    u16 max;
    u8 q[0x20];
} U;
typedef struct {
    u8 p[0x24];
    U *units;
} G;
extern G *data_0203673c;

void GetHpOrResourceAndMax(int a, int *hp, int *max) {
    int v;
    int i = func_02002414(a);
    if (i == -1) {
        v   = 0;
        *hp = 0;
    } else {
        *hp = data_0203673c->units[i].hp;
        v   = data_0203673c->units[i].max;
    }
    *max = v;
}
