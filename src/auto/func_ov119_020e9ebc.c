#include "m2c.h"
void OS_FreeToHeap(u32, s32, void *);
typedef struct {
    void *p[4];
    u8 pad[0x40];
    u32 f0 : 1;
    u32 f1 : 3;
    u32 f4 : 1;
    u8 pad2[0x16];
    s16 h;
} S;
void func_ov119_020e9ebc(S *s) {
    if (s->f0) {
        OS_FreeToHeap(0, -1, s->p[0]);
        OS_FreeToHeap(0, -1, s->p[1]);
        OS_FreeToHeap(0, -1, s->p[2]);
        OS_FreeToHeap(0, -1, s->p[3]);
    }
    s->f0 = 0;
    s->f4 = 0;
    s->h  = -1;
}
