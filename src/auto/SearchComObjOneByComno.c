/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct C {
    u8 pad[0x70];
    u16 no;
    u8 pad2[10];
    struct C *next;
} C;
C *SearchComObjOneByComno(C **pp, u32 no) {
    C *c = *pp;
    if (c == NULL) {
        return NULL;
    }
    if (no == c->no) {
        return c;
    }
    if (c->next == NULL) {
        return NULL;
    }
    return SearchComObjOneByComno(&c->next, no);
}
