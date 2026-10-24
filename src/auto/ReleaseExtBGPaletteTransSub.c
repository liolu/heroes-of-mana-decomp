/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_FreeToHeap(u32, s32, void *);
typedef struct N {
    void *ptr;
    u32 pad;
    u32 pad1 : 31;
    u32 f : 1;
    struct N *next;
} N;
void ReleaseExtBGPaletteTransSub(N *n) {
    if (n != NULL) {
        ReleaseExtBGPaletteTransSub(n->next);
        if (n->f && n->ptr != NULL) {
            OS_FreeToHeap(0, -1, n->ptr);
            n->ptr = NULL;
        }
        if (n != NULL) {
            OS_FreeToHeap(0, -1, n);
        }
    }
}
