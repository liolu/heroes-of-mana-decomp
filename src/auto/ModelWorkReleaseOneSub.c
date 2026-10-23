/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 4;
    u32 a : 2;
    u32 b : 8;
    u32 id : 8;
    u32 rest : 10;
} W;
typedef struct {
    u32 pad : 12;
    u32 cnt : 8;
    u32 rest : 12;
} M;
typedef struct N {
    W w;
    u32 p4;
    u32 p8;
    struct N *next;
    u8 pad[0x24];
    void *p34;
    u32 p38;
    void *p3c;
} N;
M *SearchModelTypeSt(u32, u32);
void DeleteModelType(u32, u32);
void ClearPolWorkOnMDA(N *);
void OS_FreeToHeap(u32, s32, void *);
void ModelWorkReleaseOneSub(N **pp, u32 id) {
    N *n = *pp;
    if (n != 0) {
        if (id == n->w.id) {
            M *m = SearchModelTypeSt(n->w.a, n->w.b);
            if (m != 0) {
                if (m->cnt < 2) {
                    DeleteModelType(n->w.a, n->w.b);
                } else {
                    m->cnt = m->cnt - 1;
                }
            }
            ClearPolWorkOnMDA(n);
            if (n->p3c != 0) {
                OS_FreeToHeap(0, -1, n->p3c);
                n->p3c = 0;
            }
            if (n->p34 != 0) {
                OS_FreeToHeap(0, -1, n->p34);
                n->p34 = 0;
            }
            *pp = n->next;
            if (n != 0) {
                OS_FreeToHeap(0, -1, n);
            }
        } else if (n->next != 0) {
            ModelWorkReleaseOneSub(&n->next, id);
        }
    }
}
