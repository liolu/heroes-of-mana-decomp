/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020a84e4;
void OS_FreeToHeap(int, int, void *);
typedef struct N {
    u32 key;
    u8 p[12];
    struct N *next;
} N;

void CancelTransTex2VramSubForArm(N **pp, u32 lo) {
    N *n;
    if (*pp != 0) {
        if ((*pp)->next != 0) {
            CancelTransTex2VramSubForArm(&(*pp)->next, lo);
        }
        n = *pp;
        if (n->key >= lo && n->key < lo + 0x7c) {
            *pp = n->next;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
        }
    }
}
