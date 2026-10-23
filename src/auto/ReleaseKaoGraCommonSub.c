/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Kao {
    void *a;
    void *b;
    u32 flag : 1;
    u32 rest : 31;
    struct Kao *next;
} Kao;
void OS_FreeToHeap(u32, s32, void *);
void ReleaseKaoGraCommonSub(Kao *k) {
    if (k == 0) {
        return;
    }
    if (k->next != 0) {
        ReleaseKaoGraCommonSub(k->next);
    }
    if (k->flag == 0 && k->a != 0) {
        OS_FreeToHeap(0, -1, k->a);
        k->a = 0;
    }
    if (k->b != 0) {
        OS_FreeToHeap(0, -1, k->b);
        k->b = 0;
    }
    if (k != 0) {
        OS_FreeToHeap(0, -1, k);
    }
}
