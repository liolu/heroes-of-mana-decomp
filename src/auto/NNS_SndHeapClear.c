/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 size;
    u8 list[4];
} Heap;

typedef struct {
    u8 pad[8];
    s32 field8;
    M2C_UNK (*callback)(void *, s32, s32, s32);
    s32 field10;
    s32 field14;
    u8 pad2[8];
} Node;

M2C_UNK EraseSync();                                /* extern */
void *NNS_FndGetPrevListObject(void *, void *);     /* extern */
M2C_UNK func_020055ac(Heap *);                      /* extern */
M2C_UNK func_020078b4(void *, void *);              /* extern */
M2C_UNK func_020081b4(s32, M2C_UNK);                /* extern */

void NNS_SndHeapClear(Heap *heap) {
    Node *node;
    void *p;
    void *q;
    s32 flag;

    flag = 0;
    p = NNS_FndGetPrevListObject(&heap->list, NULL);
    if (p != NULL) {
        do {
            q = NNS_FndGetPrevListObject(p, NULL);
            while (q != NULL) {
                node = q;
                if (node->callback != NULL) {
                    node->callback((u8 *)node + 0x20, node->field8, node->field10, node->field14);
                    flag = 1;
                }
                q = NNS_FndGetPrevListObject(p, q);
            }
            func_020078b4(&heap->list, p);
            p = NNS_FndGetPrevListObject(&heap->list, NULL);
        } while (p != NULL);
    }
    func_020081b4(heap->size, 3);
    if (flag != 0) {
        EraseSync();
    }
    func_020055ac(heap);
}
