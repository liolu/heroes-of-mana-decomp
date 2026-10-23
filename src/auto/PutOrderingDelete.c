/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    s32 a;
    struct N *next;
} N;
extern void OS_FreeToHeap(s32 a, s32 b, void *p);
void PutOrderingDelete(N *n) {
    if (n != 0) {
        PutOrderingDelete(n->next);
        if (n != 0) {
            OS_FreeToHeap(0, -1, n);
        }
    }
}
