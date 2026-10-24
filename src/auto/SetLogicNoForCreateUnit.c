/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u16 id : 8;
    u16 fl : 1;
    u16 rest : 7;
} E;
typedef struct W {
    u8 pad[0x28];
    u8 *p;
} W;
extern W *data_0203673c;

void SetLogicNoForCreateUnit(s32 a, s32 b, s32 fl, s32 id) {
    if (a < 4 && b < 8) {
        ((E *) (data_0203673c->p + a * 0x2D0 + 0x2C0))[b].id = (u16) id;
        ((E *) (data_0203673c->p + a * 0x2D0 + 0x2C0))[b].fl = (u16) fl;
    }
}
