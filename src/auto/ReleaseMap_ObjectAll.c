/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p[0xf0];
    void *next;
} M;
extern void ReleaseObjWorkOne(M *);
extern void OS_FreeToHeap(s32, s32, void *);
void ReleaseMap_ObjectAll(M *m) {
    if (m != 0) {
        if (m->next != 0) {
            ReleaseMap_ObjectAll(m->next);
        }
        ReleaseObjWorkOne(m);
        if (m != 0) {
            OS_FreeToHeap(0, -1, m);
        }
    }
}
