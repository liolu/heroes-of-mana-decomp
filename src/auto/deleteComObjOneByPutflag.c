/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u32 a;
    u32 b;
    u32 c;
    u32 flag : 1;
    u8 pad[0x6c];
    struct Obj *child;
} Obj;
extern void DeleteOneObj(Obj **);
void deleteComObjOneByPutflag(Obj **pp) {
    Obj *o = *pp;
    if (o != 0) {
        if (o->child != 0) {
            deleteComObjOneByPutflag(&o->child);
        }
        if (!(*pp)->flag) {
            DeleteOneObj(pp);
        }
    }
}
