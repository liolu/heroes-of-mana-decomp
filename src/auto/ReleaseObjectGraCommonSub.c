/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Gra {
    void *f0;
    void *f4;
    u8 pal[2];
    u8 fa;
    u8 pad[1];
    struct Gra *fc;
} Gra;

extern void ResetObjPalMapX(s32, s32, s32);
extern void OS_FreeToHeap(s32, s32, void *);

void ReleaseObjectGraCommonSub(Gra *arg0) {
    s32 i;
    if (arg0 == 0) {
        return;
    }
    if (arg0->fc != 0) {
        ReleaseObjectGraCommonSub(arg0->fc);
    }
    for (i = 0; i < 2; i++) {
        if (arg0->pal[i] != 0x1f) {
            ResetObjPalMapX(arg0->pal[i], arg0->fa, i);
        }
    }
    if (arg0->f0 != 0) {
        OS_FreeToHeap(0, -1, arg0->f0);
        arg0->f0 = 0;
    }
    if (arg0->f4 != 0) {
        OS_FreeToHeap(0, -1, arg0->f4);
        arg0->f4 = 0;
    }
    if (arg0 != 0) {
        OS_FreeToHeap(0, -1, arg0);
    }
}
