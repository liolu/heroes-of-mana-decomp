/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    s32 *p0;
    s32 w4;
    s32 w8;
    s32 wc;
    struct N *next;
} N;

extern u32 data_ov003_020b08ac;
void GX_LoadTex(s32, s32, s32);
void OS_FreeToHeap(s32, s32, void *);

void TransTex2VramSub(N **pp) {
    N *n = *pp;
    if (n != 0) {
        if (n->next != 0) {
            TransTex2VramSub(&n->next);
        }
        if (data_ov003_020b08ac < 0x8000) {
            GX_LoadTex((*pp)->w4, (*pp)->w8, (*pp)->wc);
            *(*pp)->p0 = 1;
            data_ov003_020b08ac += (*pp)->wc;
            if (*pp != 0) {
                OS_FreeToHeap(0, -1, *pp);
                *pp = 0;
            }
            *pp = 0;
        }
    }
}
