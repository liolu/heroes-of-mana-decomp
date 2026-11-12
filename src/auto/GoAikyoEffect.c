/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Node {
    u32 id : 10;
    u32 sub : 7;
    u32 cnt : 7;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 rest : 5;
    s16 s4;
    s16 s6;
    s16 s8;
    s16 sA;
    u16 uC;
    u16 padE;
    s32 f10;
    u8 *p14;
    s32 f18;
    struct Node *next;
} Node;

typedef struct {
    u32 pad0;
    u32 pad4;
    u32 pad8 : 23;
    u32 b23 : 1;
    u32 rest : 8;
} Obj;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 rest : 29;
    u32 pad4;
    u32 pad8 : 29;
    u32 b29 : 1;
    u32 rest8 : 2;
    u8 padC[0xE8 - 0xC];
    Obj *p;
    u8 padEC[0x110 - 0xEC];
} Ent;

typedef struct {
    u32 w0;
    u32 pa : 15;
    u32 b15 : 1;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 pb : 8;
    u32 f27 : 4;
    u32 pc : 1;
    u32 p8 : 7;
    u32 b7 : 1;
    u32 r8 : 24;
    u32 wC;
    u32 p10 : 6;
    u32 f6 : 4;
    u32 r10 : 22;
    u32 p14 : 15;
    u32 f15 : 5;
    u32 r14 : 12;
    u32 p18 : 9;
    u32 f9 : 8;
    u32 r18 : 15;
    u32 w1C;
    u32 p20 : 12;
    u32 b13 : 1;
    u32 r20 : 19;
    u32 lo : 8;
    u32 r24 : 24;
    u8 pad28[0x1CC - 0x28];
    s32 w1CC;
    s32 w1D0;
    u8 pad1D4[0x778 - 0x1D4];
    Node *head;
    u8 pad77C[0x7AC - 0x77C];
    u16 h7AC;
} G;

typedef struct {
    u32 w0;
    u32 st : 5;
    u32 rest : 27;
} Sh;

extern G *data_ov000_02051548;
extern Sh *data_ov109_020ea340;
extern Ent data_ov003_020b0cf0[];

s32 func_ov004_020cad5c(u32);
void *func_0200ed38(u32, s32, s32);
void deleteHataIcon(void);
s32 func_ov004_020cadd0(u32, u32, u32, void *, s32, s32, s32);
s32 func_ov004_020cadac(u32, u32, u32, void *);
void func_ov004_020cb1dc(s32, u32, s32);
void OS_FreeToHeap(u32, s32, void *);
void BGM_Change(s32);
void ResetUnitSelect(void);
void FadeInScreen(s32);
void PutIconInit(s32, s32);
void SetDamageAfterEffectWithAttackID(s32, u32, u32, void *, s32, s32);
void SetDamageAfterEffect(s32, u32, u32, void *, s32);

void GoAikyoEffect(void) {
    Node *n;
    Node **pp;
    s32 r6;
    s32 save;
    s32 *buf;
    s32 k;
    Ent *e;

    if (data_ov000_02051548->b7 == 0) {
        save                     = data_ov000_02051548->b18;
        data_ov000_02051548->b18 = 1;
        data_ov000_02051548->b7  = 1;
        n                        = data_ov000_02051548->head;
        pp                       = &data_ov000_02051548->head;
        for (; n != 0; n = *pp) {
            r6 = 0;
            if (data_ov000_02051548->b17 != 0 && (n->s4 < 0xBC || n->s4 > 0xC2)) {
                pp = &n->next;
                continue;
            }
            if (func_ov004_020cad5c(n->id) == 1) {
                if (data_ov000_02051548->b13 != 0) {
                    data_ov109_020ea340->st = 0xF;
                    break;
                }
                if (data_ov000_02051548->b15 != 0) {
                    break;
                }
                r6 = 1;
                if (data_ov000_02051548->w1D0 != 0) {
                    data_ov000_02051548->w1D0 = 0;
                    data_ov000_02051548->w1CC = 0;
                    if (data_ov000_02051548->f9 == 2 || data_ov000_02051548->f15 == 3) {
                        data_ov000_02051548->f15 = 2;
                    }
                }
            }
            if (n->f18 == 0) {
                if (n->cnt != 0) {
                    buf = func_0200ed38(0, -1, n->cnt * 4);
                    for (k = 0; k < n->cnt; k++) {
                        buf[k] = n->p14[k];
                    }
                } else {
                    buf = 0;
                }
                if (n->sub < 0x42) {
                    e = &data_ov003_020b0cf0[n->sub];
                    if (e->b0 != 0 && e->p != 0 && e->p->b23 == 0 && e->b29 == 0) {
                        e->b2 = 1;
                    }
                }
                if (r6 == 1 && n->s4 >= 0xBC && n->s4 <= 0xC2) {
                    deleteHataIcon();
                }
                if (n->b24 != 0) {
                    n->f18 = func_ov004_020cadd0(n->id, n->sub, n->cnt, buf, n->s6, n->s8, n->sA);
                } else {
                    n->f18 = func_ov004_020cadac(n->id, n->sub, n->cnt, buf);
                }
                if (r6 == 0) {
                    if (n->f18 == -1) {
                        r6 = 1;
                    } else if (n->b25 != 0) {
                        func_ov004_020cb1dc(n->f18, n->b25, n->f10);
                    }
                }
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
                if (r6 == 1) {
                    if (data_ov000_02051548->lo != 0) {
                        BGM_Change(data_ov000_02051548->lo);
                        data_ov000_02051548->lo = 0;
                    }
                    if (n->s4 >= 0xBC && n->s4 <= 0xC2) {
                        data_ov000_02051548->b17 = 0;
                        ResetUnitSelect();
                        FadeInScreen(2);
                        data_ov000_02051548->f6 = 0;
                        PutIconInit(data_ov000_02051548->h7AC != 0 ? 1 : 0, 0);
                        data_ov000_02051548->f15 = 2;
                        data_ov000_02051548->f27 = 0;
                    }
                    if (n->s4 != 0) {
                        if (n->b26 != 0) {
                            SetDamageAfterEffectWithAttackID(n->s4, n->sub, n->cnt, n->p14, 1, n->uC);
                        } else {
                            SetDamageAfterEffect(n->s4, n->sub, n->cnt, n->p14, 1);
                        }
                    }
                    if (n->p14 != 0) {
                        OS_FreeToHeap(0, -1, n->p14);
                        n->p14 = 0;
                    }
                    *pp = n->next;
                    if (n != 0) {
                        OS_FreeToHeap(0, -1, n);
                    }
                    break;
                }
            }
            pp = &(*pp)->next;
        }
        data_ov000_02051548->b18 = save;
        data_ov000_02051548->b7  = 0;
    }
}
