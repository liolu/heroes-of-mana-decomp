/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Node {
    void *data;
    s32 size;
    struct Node *next;
} Node;
typedef struct {
    u8 pad[0x4c4];
    u8 *buf;
    u32 unk;
    Node *head;
    s32 used;
} G;

extern void MIi_CpuCopy16(void *, void *, s32);
extern void OS_FreeToHeap(u32, s32, void *);
extern G *data_ov000_02051548;

void TrsEtcDataWork(void) {
    Node *n;
    Node *cur;
    u8 *dst;

    n   = data_ov000_02051548->head;
    dst = data_ov000_02051548->buf + data_ov000_02051548->used;
    if (n != NULL) {
        do {
            if (data_ov000_02051548->used > 0x800 - n->size) {
                break;
            }
            cur = n;
            MIi_CpuCopy16(n->data, dst, n->size);
            dst += n->size;
            data_ov000_02051548->used += n->size;
            n = n->next;
            if (cur->data != NULL) {
                OS_FreeToHeap(0, -1, cur->data);
                cur->data = NULL;
            }
            if (cur != NULL) {
                OS_FreeToHeap(0, -1, cur);
            }
        } while (n != NULL);
    }
    data_ov000_02051548->head = n;
}
