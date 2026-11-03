/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020b5380[];

struct WmNode {
    s32 pad0;
    void *f4;
    struct WmNode *next;
};

void OS_FreeToHeap(u32, s32, void *);
void ReleaseWmWorkDataw(void);

void ReleaseWmWorksTrnsWork(void) {
    struct WmNode *cur;
    struct WmNode *node;

    node = *(struct WmNode **) (data_ov003_020b5380 + 0x19C);
    if (node != NULL) {
        do {
            cur  = node;
            node = cur->next;
            if (cur->f4 != NULL) {
                OS_FreeToHeap(0, -1, cur->f4);
                cur->f4 = NULL;
            }
            if (cur != NULL) {
                OS_FreeToHeap(0, -1, cur);
            }
        } while (node != NULL);
    }
    if (*(void **) (data_ov003_020b5380 + 0x180) != NULL) {
        OS_FreeToHeap(0, -1, *(void **) (data_ov003_020b5380 + 0x180));
        *(void **) (data_ov003_020b5380 + 0x180) = NULL;
    }
    *(struct WmNode **) (data_ov003_020b5380 + 0x19C) = NULL;
    ReleaseWmWorkDataw();
}
