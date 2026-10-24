/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u32 f : 5;
    u32 q : 3;
    u32 g : 1;
    u32 h : 23;
    u8 b4;
    u8 b5;
    u8 pad[10];
} E;
typedef struct T {
    u32 pad;
    s32 n;
    E e[1];
} T;
typedef struct R {
    u8 pad[0x20];
    u32 f;
} R;
extern R *data_ov000_02051548;
s32 Get_aONEOBJadrsByCharno(s32);
void AppearOneUnit(E *, s32);

void SetEventObjPosOne(T *t, u32 no) {
    E *p  = t->e;
    s32 n = t->n;
    s32 id;
    if (n != 0) {
        do {
            if (no == (p->f)) {
                if (p->g) {
                    id = p->b5 + 0xF00;
                } else {
                    id = p->b5;
                }
                if (Get_aONEOBJadrsByCharno(id) == 0) {
                    AppearOneUnit(p, id);
                }
            }
            p++;
            n--;
        } while (n != 0);
    }
    data_ov000_02051548->f &= ~0x10000;
}
