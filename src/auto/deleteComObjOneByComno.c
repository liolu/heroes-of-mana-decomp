/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u8 pad[0x70];
    u16 no;
    u8 pad2[0xA];
    struct Obj *next;
} Obj;
void DeleteOneObj(Obj **);
void deleteComObjOneByComno(Obj **p, int no) {
    Obj *o = *p;
    if (o != 0) {
        if (o->next != 0) {
            deleteComObjOneByComno((Obj **) ((u8 *) o + 0x7c), no);
        }
        if ((*p)->no == no) {
            DeleteOneObj(p);
        }
    }
}
