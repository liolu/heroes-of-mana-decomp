/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Node {
    s32 obj;
    s32 pad;
    struct Node *next;
} Node;
extern u8 *data_ov000_02051550;
extern void DeleteNoAnimeObjOnlyOne(s32);
extern void OS_FreeToHeap(u32, s32, void *);
void DeleteNameByNoAnimeObj(s32 i, s32 j) {
    Node *cur;
    Node *n;
    s32 oj = j * 0x14;
    s32 oi = i * 0xd0;
    n      = *(Node **) (data_ov000_02051550 + oi + 0x9c + oj);
    if (n != 0) {
        do {
            cur = n;
            n   = n->next;
            DeleteNoAnimeObjOnlyOne(cur->obj);
            if (cur != 0) {
                OS_FreeToHeap(0, -1, cur);
            }
        } while (n != 0);
    }
    *(Node **) (data_ov000_02051550 + oi + 0x9c + oj) = 0;
}
