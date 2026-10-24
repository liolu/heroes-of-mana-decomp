/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct M {
    void *p;
    u32 pad;
    u32 w : 31;
    u32 fl : 1;
    struct M *next;
} M;
void OS_FreeToHeap(u32, s32, void *);
void ReleaseTexPaletteTransSub(M *m) {
    if (m != 0) {
        ReleaseTexPaletteTransSub(m->next);
        if (m->fl && m->p != 0) {
            OS_FreeToHeap(0, -1, m->p);
            m->p = 0;
        }
        if (m != 0) {
            OS_FreeToHeap(0, -1, m);
        }
    }
}
