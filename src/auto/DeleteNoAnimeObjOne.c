/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void ResetVramMapX(s32, s32, s32);
void OS_FreeToHeap(u32, s32, void *);
typedef struct O {
    u8 pad0[4];
    s16 x;
    s16 y;
    u8 pad1[3];
    u8 f : 1;
    u8 pad2[0x14];
    struct O *next;
} O;
void DeleteNoAnimeObjOne(O *o) {
    if (o != NULL) {
        if (o->next != NULL) {
            DeleteNoAnimeObjOne(o->next);
        }
        ResetVramMapX(o->x, o->y, o->f);
        if (o != NULL) {
            OS_FreeToHeap(0, -1, o);
        }
    }
}
