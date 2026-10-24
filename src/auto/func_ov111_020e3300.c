#include "m2c.h"

typedef struct {
    u8 pad[0x20];
    void *p20;
    s32 s24;
    void *p28;
    s32 s2c;
    void *p30;
    s32 s34;
    void *p38;
    s32 s3c;
} B;

typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
    u8 pad[0x14 - 4];
    void *p14;
    s32 s18;
    void *p1c;
    s32 s20;
    void *p24;
    s32 s28;
    s32 cnt;
    struct {
        void *p;
        s32 s;
    } *arr;
    void *p34;
    s32 s38;
    void *p3c;
    s32 s40;
    void *p44;
    s32 s48;
    B *b;
} A;

void OS_FreeToHeap(s32, s32, void *);

void func_ov111_020e3300(A *a) {
    s32 i;
    if (a->f1) {
        if (a->b->p38) {
            OS_FreeToHeap(0, -1, (void *) a->b->s3c);
        }
        if (a->b->p30) {
            OS_FreeToHeap(0, -1, (void *) a->b->s34);
        }
        if (a->b->p28) {
            OS_FreeToHeap(0, -1, (void *) a->b->s2c);
        }
        if (a->b->p20) {
            OS_FreeToHeap(0, -1, (void *) a->b->s24);
        }
        OS_FreeToHeap(0, -1, a->b);
    }
    if (a->p44) {
        OS_FreeToHeap(0, -1, (void *) a->s48);
    }
    if (a->p3c) {
        OS_FreeToHeap(0, -1, (void *) a->s40);
    }
    if (a->p34) {
        OS_FreeToHeap(0, -1, (void *) a->s38);
    }
    for (i = 0; i < a->cnt; i++) {
        OS_FreeToHeap(0, -1, a->arr[i].p);
    }
    if (a->cnt) {
        OS_FreeToHeap(0, -1, a->arr);
    }
    if (a->p24) {
        OS_FreeToHeap(0, -1, (void *) a->s28);
    }
    if (a->p1c) {
        OS_FreeToHeap(0, -1, (void *) a->s20);
    }
    if (a->p14) {
        OS_FreeToHeap(0, -1, (void *) a->s18);
    }
    a->f0 = 0;
    a->f1 = 0;
}
