/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Pal {
    void *buf;
    s32 a;
    u32 flags;
    struct Pal *next;
} Pal;
extern void OS_FreeToHeap(s32, s32, void *);
void ReleaseObjPaletteTransSub(Pal *p) {
    if (p != 0) {
        ReleaseObjPaletteTransSub(p->next);
        if ((p->flags >> 31) && p->buf != 0) {
            OS_FreeToHeap(0, -1, p->buf);
            p->buf = 0;
        }
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
