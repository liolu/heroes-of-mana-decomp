/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Node {
    u32 a;
    u8 pad[0xc];
    struct Node *next;
} Node;
void CancelTransTex2VramSubArm(Node **pp, u32 base);
void OS_FreeToHeap(s32, s32, void *);

void CancelTransTex2VramSubArm(Node **pp, u32 base) {
    Node *n = *pp;
    if (n != 0) {
        if (n->next != 0) {
            CancelTransTex2VramSubArm(&n->next, base);
        }
        n = *pp;
        if (n->a >= base && n->a < base + 0x7c) {
            *pp = n->next;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
        }
    }
}
