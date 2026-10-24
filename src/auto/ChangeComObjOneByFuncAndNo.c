/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u8 pad[0xc];
    u32 f0 : 25;
    u32 flag : 1;
    u32 f1 : 6;
    u8 pad1[0x60];
    u16 no;
    u8 pad2[0xa];
    struct Obj *child;
} Obj;
void ChangeComObjOneByFuncAndNo(Obj **pp, s32 no, void (*fn)(Obj *)) {
    Obj *o = *pp;
    if (o != 0) {
        if (o->child != 0) {
            ChangeComObjOneByFuncAndNo(&o->child, no, fn);
        }
        {
            s32 n = (*pp)->no;
            if (n == no) {
                if (!(*pp)->flag) {
                    fn(*pp);
                }
            }
        }
    }
}
