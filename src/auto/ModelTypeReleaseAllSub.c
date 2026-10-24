/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct M {
    u8 pad[0x14];
    void *p;
    struct M *next;
} M;
void OS_FreeToHeap(u32, s32, void *);
void ModelTypeReleaseAllSub(M *m) {
    if (m != 0) {
        ModelTypeReleaseAllSub(m->next);
        if (m->p != 0) {
            OS_FreeToHeap(0, -1, m->p);
            m->p = 0;
        }
        if (m != 0) {
            OS_FreeToHeap(0, -1, m);
        }
    }
}
