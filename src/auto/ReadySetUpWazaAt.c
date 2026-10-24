/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 kind : 3;
    u32 rest : 29;
} K;
typedef struct {
    u8 pad[0x14];
    u16 w0;
    u16 w1;
} W;
typedef struct {
    u8 pad[0xe4];
    K *k;
    W *w;
} O;
void Logic_separateForSelWaza(O *o);
void SetUseWaza(O *o, s32 i, s32 w);
void ReadySetUpWazaAt(O *o) {
    Logic_separateForSelWaza(o);
    if (o->k->kind == 2) {
        SetUseWaza(o, 0, o->w->w0);
        if (o->k->kind == 2) {
            SetUseWaza(o, 1, o->w->w1);
        }
    }
}
