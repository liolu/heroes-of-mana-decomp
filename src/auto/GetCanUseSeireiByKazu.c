/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aa578;
extern u8 *data_ov000_02051548;

typedef struct {
    s32 a;
    s32 b;
} Ent;

s32 GetCanUseSeireiByKazu(s32 n) {
    s32 r  = 0;
    Ent *e = *(Ent **) (data_ov000_02051548 + 0x77C);
    if (e != 0) {
        s32 cnt = *(u8 *) (data_ov000_02051548 + 0x780);
        Ent *t  = e + 1;
        if (n >= cnt) {
            n = cnt - 1;
        }
        r = t[n].b & ~2;
    }
    return r;
}
