/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct T {
    u32 v;
    u32 p[3];
    struct T *next;
} T;
void OS_FreeToHeap(u32, s32, void *);
void CancelTransTex2VramSub(T **pp, u32 lo) {
    T *n = *pp;
    if (n != 0) {
        if (n->next != 0) {
            CancelTransTex2VramSub(&n->next, lo);
        }
        n = *pp;
        if (n->v >= lo && n->v < lo + 0x110) {
            T *nx = n->next;
            *pp   = nx;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
        }
    }
}
