/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    u32 a : 2;
    u32 b : 10;
    u32 rest : 20;
    u32 pad4;
    void *p8;
    void *pc;
    void *p10;
    void *p14;
    struct N *next;
} N;

void ReleaseTexAreaOne(void *);
void DeleteTexPalMap(void *, void *);
void OS_FreeToHeap(s32, s32, void *);

void DeleteModelTypeSub(s32 type, s32 id, N **link) {
    N *n = *link;
    if (n != 0) {
        if (type == n->a && id == n->b) {
            ReleaseTexAreaOne(n->p8);
            DeleteTexPalMap(n->pc, n->p10);
            if (n->p14 != 0) {
                OS_FreeToHeap(0, -1, n->p14);
                n->p14 = 0;
            }
            *link = n->next;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
        } else {
            DeleteModelTypeSub(type, id, &n->next);
        }
    }
}
