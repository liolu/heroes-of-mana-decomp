/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct MW {
    u8 pad[0xc];
    struct MW *next;
    u8 pad2[0x24];
    void *p34;
    u8 pad3[4];
    void *p3c;
} MW;
void ClearPolWorkOnMDA(MW *);
void OS_FreeToHeap(u32, s32, void *);
void ModelWorkReleaseAllSub(MW **pp) {
    MW *m;
    if (*pp != 0) {
        if ((*pp)->next != 0) {
            ModelWorkReleaseAllSub(&(*pp)->next);
        }
        m = *pp;
        ClearPolWorkOnMDA(m);
        if (m->p3c != 0) {
            OS_FreeToHeap(0, -1, m->p3c);
            m->p3c = 0;
        }
        if (m->p34 != 0) {
            OS_FreeToHeap(0, -1, m->p34);
            m->p34 = 0;
        }
        *pp = m->next;
        if (m != 0) {
            OS_FreeToHeap(0, -1, m);
        }
    }
}
