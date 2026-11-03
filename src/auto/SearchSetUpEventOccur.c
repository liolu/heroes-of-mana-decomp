/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov000_02051548;
extern void OS_FreeToHeap(s32, s32, void *);

typedef struct Node {
    u16 id;
    u16 low : 14;
    u16 tag : 2;
    struct Node *next;
} Node;

s32 SearchSetUpEventOccur(s32 a0, s32 a1) {
    Node **link = (Node **) (data_ov000_02051548 + 0x1ac);
    Node *n     = *link;

    while (n != 0) {
        if (n->tag == a1 && (s32) n->id == a0) {
            s32 v;
            Node *next = n->next;

            *link = next;
            v     = n->low;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
            return v;
        }
        link = &n->next;
        n    = n->next;
    }
    return -1;
}
