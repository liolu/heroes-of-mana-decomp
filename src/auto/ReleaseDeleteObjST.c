/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Node {
    u32 a;
    struct Node *next;
} Node;
typedef struct {
    u8 pad[0x13c];
    Node *head;
} G;
extern G *data_ov000_02051548;
extern void OS_FreeToHeap(s32, s32, void *);
void ReleaseDeleteObjST(void) {
    Node *p = data_ov000_02051548->head;
    if (p != 0) {
        do {
            Node *q = p;
            p       = q->next;
            if (q != 0) {
                OS_FreeToHeap(0, -1, q);
            }
        } while (p != 0);
    }
    data_ov000_02051548->head = 0;
}
