/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 13;
    u32 v : 15;
    u32 rest : 4;
} E;
typedef struct {
    u8 pad[0x18];
    u8 *tab;
} G;
extern G *data_0203673c;
s32 GetHouseBuildSpeed(u8 *obj, s32 idx) {
    u16 h = *(u16 *) (obj + 0x2b0);
    E *e  = (E *) (data_0203673c->tab + idx * 4 + 8);
    s32 v = e->v;
    if (h & 2) {
        v = v * 50 / 100;
        if (v < 0) {
            v = 0;
        }
    }
    return v;
}
