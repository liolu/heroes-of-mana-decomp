/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct P {
    u32 w0;
    u32 w1;
    u32 pad0 : 8;
    u32 pad1 : 8;
    u32 pad2 : 7;
    u32 f : 1;
    u32 pad3 : 8;
} P;
typedef struct Q {
    u32 pad1 : 23;
    u32 team : 4;
    u32 pad0 : 5;
} Q;
typedef struct O {
    u32 flag : 1;
    u32 rest0 : 24;
    u32 fin : 1;
    u32 rest : 6;
    u32 pad[1];
    Q q;
    u8 pad2[0xE8 - 0xC];
    P *p;
    u8 pad3[0x110 - 0xEC];
} O;
extern O data_ov003_020b0cf0[];

s32 CheckGundanGetOutFinish(u32 arg0) {
    O *o = data_ov003_020b0cf0;
    s32 i;
    for (i = 0; i < 0x42; i++, o++) {
        if (o->flag && o->p != NULL && o->p->f == 0 && arg0 == o->q.team && o->fin) {
            return 0;
        }
    }
    return 1;
}
