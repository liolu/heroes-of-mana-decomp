/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N N;
struct N {
    void *buf;
    u32 p0 : 5;
    u32 no : 27;
    u32 p1 : 5;
    u32 size : 26;
    u32 flag : 1;
    N *next;
};
void OS_FreeToHeap(s32, s32, void *);

void ReleaseObjPaletteTransSubByNoAndSize(N **head, u32 no, u32 size) {
    N *n = *head;
    if (n != NULL) {
        if (no == n->no && size == n->size) {
            *head = n->next;
            if (n->flag && n->buf != NULL) {
                OS_FreeToHeap(0, -1, n->buf);
                n->buf = NULL;
            }
            if (n != NULL) {
                OS_FreeToHeap(0, -1, n);
            }
        } else {
            ReleaseObjPaletteTransSubByNoAndSize(&n->next, no, size);
        }
    }
}
