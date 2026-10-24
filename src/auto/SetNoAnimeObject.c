/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Node {
    s16 w0;
    s16 w2;
    s16 w4;
    s16 w6;
    u8 b8;
    u8 b9;
    u8 ba;
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 2;
    u8 f4 : 1;
    u8 f5 : 2;
    u8 f7 : 1;
    s16 wc;
    s16 we;
    u32 g0 : 1;
    u32 g1 : 8;
    u32 g9 : 23;
    u8 pad[12];
    struct Node *next;
} Node;
typedef struct {
    u8 pad[0x20];
    u32 q : 12;
    u32 fl : 1;
    u32 r : 19;
} Hd;
typedef struct {
    u8 pad[0x79c];
    Node *head;
} G;

extern void MIi_CpuClear16(s32, void *, s32);
extern void *func_0200ed38(s32, s32, s32);
extern G *data_ov000_02051548;

Node *SetNoAnimeObject(s16 a, s16 b, s16 c, s16 d, s32 e, u16 f, u16 g, u32 h, u32 i, s32 j) {
    Node **pp;
    Node *p;

    p  = data_ov000_02051548->head;
    pp = &data_ov000_02051548->head;
    if (p != 0) {
        do {
            pp = &p->next;
            p  = p->next;
        } while (p != 0);
    }
    *pp = func_0200ed38(0, -1, 0x24);
    MIi_CpuClear16(0, *pp, 0x24);
    (*pp)->w4   = a;
    (*pp)->w6   = b;
    (*pp)->ba   = c;
    (*pp)->w0   = d;
    (*pp)->w2   = e;
    (*pp)->b8   = f;
    (*pp)->b9   = g;
    (*pp)->f5   = h;
    (*pp)->f0   = i;
    (*pp)->wc   = j;
    (*pp)->f1   = 0;
    (*pp)->g1   = 0;
    (*pp)->f2   = 0;
    (*pp)->next = 0;
    if (i == 0) {
        if (((Hd *) data_ov000_02051548)->fl != 0) {
            (*pp)->g0 = 0;
        } else {
            (*pp)->g0 = 1;
        }
    } else {
        (*pp)->g0 = 0;
    }
    return *pp;
}
