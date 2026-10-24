/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct P {
    u16 w0;
    u16 ref : 14;
    u16 hi : 2;
    void *p4;
    void *p8;
    void *pc;
    void *p10;
    struct P *next;
} P;

typedef struct {
    P *p;
} N;

typedef struct {
    u8 pad[0x240];
    u8 list[1];
} G;

extern G *data_ov000_02051548;

N *SearchObjPatSub(void *, s32, s32);
void OS_FreeToHeap(s32, s32, void *);

void DeleteObjPatOneSub(s32 a, s32 b) {
    N *n;
    P *p;

    n = SearchObjPatSub(data_ov000_02051548->list, a, b);
    if (n != 0) {
        if (n->p->ref != 0) {
            n->p->ref = n->p->ref - 1;
        }
        p = n->p;
        if (p->ref == 0) {
            n->p = p->next;
            if (p->pc != 0) {
                OS_FreeToHeap(0, -1, p->pc);
                p->pc = 0;
            }
            if (p->p10 != 0) {
                OS_FreeToHeap(0, -1, p->p10);
                p->p10 = 0;
            }
            if (p->p4 == 0 && p->p8 != 0) {
                OS_FreeToHeap(0, -1, p->p8);
                p->p8 = 0;
            }
            if (p != 0) {
                OS_FreeToHeap(0, -1, p);
            }
        }
    }
}
