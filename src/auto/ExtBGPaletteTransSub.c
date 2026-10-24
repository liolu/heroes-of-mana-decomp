/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Pal {
    void *data;
    u32 dst;
    u32 size : 31;
    u32 own : 1;
    struct Pal *next;
} Pal;
void GX_LoadBGExtPltt(void *, u32, u32);
void OS_FreeToHeap(s32, s32, void *);

void ExtBGPaletteTransSub(Pal *p) {
    if (p != 0) {
        ExtBGPaletteTransSub(p->next);
        GX_LoadBGExtPltt(p->data, p->dst, p->size);
        if (p->own != 0 && p->data != 0) {
            OS_FreeToHeap(0, -1, p->data);
            p->data = 0;
        }
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
