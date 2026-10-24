/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u32 *Get_aONEOBJadrsByCharno(u32);
extern void ReleaseObjWorkOne(u32 *);
extern void releaseUnitIconWorkOne(void);

typedef struct {
    u32 id : 5;
    u32 pad : 3;
    u32 hi : 1;
    u32 pad2 : 23;
    u8 b4;
    u8 b5;
    u8 rest[10];
} Ent;

void DeleteEventObjPosOne(u8 *arg0, u32 arg1) {
    Ent *e = (Ent *) (arg0 + 8);
    s32 n  = *(s32 *) (arg0 + 4);
    u32 *o;
    u32 c;

    if (n != 0) {
        do {
            if (arg1 == e->id) {
                c = e->b5;
                if (e->hi != 0) {
                    c += 0xF00;
                }
                o = Get_aONEOBJadrsByCharno(c);
                if (o != 0) {
                    releaseUnitIconWorkOne();
                    ReleaseObjWorkOne(o);
                    *o &= ~1;
                }
            }
            e++;
            n--;
        } while (n != 0);
    }
}
