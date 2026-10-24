/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    void *mem;
    u32 w4;
    u32 lo : 31;
    u32 flag : 1;
    struct N *next;
} N;
void OS_FreeToHeap(int, int, void *);
void ReleaseExtObjPaletteTransSub(N *n) {
    if (n != 0) {
        ReleaseExtObjPaletteTransSub(n->next);
        if (n->flag != 0 && n->mem != 0) {
            OS_FreeToHeap(0, -1, n->mem);
            n->mem = 0;
        }
        if (n != 0) {
            OS_FreeToHeap(0, -1, n);
        }
    }
}
