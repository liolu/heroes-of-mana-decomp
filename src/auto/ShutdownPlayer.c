/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 sPrioList[];
extern u8 data_020367c0[];
void func_020078b4(void *, void *);
void NNS_FndAppendListObject(void *, void *);

typedef struct Seq {
    u32 *a;
    u8 *owner;
    u32 *c;
    u8 pad[0x20];
    u8 state;
} Seq;

void ShutdownPlayer(Seq *p) {
    u8 *owner;
    if (p->a != NULL) {
        *p->a = 0;
        p->a  = NULL;
    }
    owner = p->owner;
    func_020078b4(owner, p);
    p->owner = NULL;
    if (p->c != NULL) {
        NNS_FndAppendListObject(owner + 0xc, p->c);
        p->c[3] = 0;
        p->c    = NULL;
    }
    func_020078b4(sPrioList, p);
    NNS_FndAppendListObject(data_020367c0, p);
    p->state = 0;
}
