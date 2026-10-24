/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct PalHdr {
    u16 w0;
    u16 cnt : 14;
    u16 hi : 2;
    void *buf;
    u8 pad[4];
    struct PalHdr *next;
} PalHdr;

typedef struct PalSys {
    u8 pad[0x244];
    u8 list[1];
} PalSys;

extern PalSys *data_ov000_02051548;
PalHdr **SearchObjPalSub(void *, s32, s32);
void OS_FreeToHeap(s32, s32, void *);

void DeleteObjPalOneSub(s32 a, s32 b) {
    PalHdr **pp;
    PalHdr *h;
    pp = SearchObjPalSub(data_ov000_02051548->list, a, b);
    if (pp != NULL) {
        PalHdr *q = *pp;
        u32 c     = q->cnt;
        if (c != 0) {
            q->cnt = c - 1;
        }
        h = *pp;
        if (h->cnt == 0) {
            *pp = h->next;
            if (h->buf != NULL) {
                OS_FreeToHeap(0, -1, h->buf);
                h->buf = NULL;
            }
            if (h != NULL) {
                OS_FreeToHeap(0, -1, h);
            }
        }
    }
}
