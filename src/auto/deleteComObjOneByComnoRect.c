/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u8 pad[0x70];
    u16 no;
    u8 pad2[0xa];
    struct Obj *child;
} Obj;
extern void DeleteOneObj(Obj **);
void deleteComObjOneByComnoRect(Obj **pp, s32 lo, s32 hi) {
    Obj *o = *pp;
    if (o != 0) {
        if (o->child != 0) {
            deleteComObjOneByComnoRect(&o->child, lo, hi);
        }
        {
            s32 n = (*pp)->no;
            if (lo <= n && n <= hi) {
                DeleteOneObj(pp);
            }
        }
    }
}
