/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct I {
    u8 pad[0x70];
    u16 comno;
    u8 pad2[0xA];
    struct I *next;
} I;

I *IsThereIconByComno(I *p, u16 comno) {
    for (; p != NULL; p = p->next) {
        if (p->comno == comno) {
            return p;
        }
    }
    return NULL;
}
