/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Node {
    struct Node *next;
} Node;

typedef struct {
    u8 pad[0x100];
    s32 w100;
    Node *head;
    s16 w108;
    u8 pad2[0x10c - 0x10a];
    u8 thr[4];
} Sub;

typedef struct {
    u8 pad[0x64];
    Sub *a;
    Sub *b;
    u8 pad2[0x70 - 0x6c];
    s16 flags;
    s8 f72;
    s8 f73;
} Obj;

typedef struct {
    u8 pad[0x1c];
    void (*fn)(void *);
} Alloc;

void OS_WakeupThread(void *);
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_02072b08(Sub *);
void func_ov123_020733f0(Obj *);
void func_ov123_02073454(Obj *);
extern Alloc *data_ov123_020e0a00;

void func_ov123_02072bb8(Obj *o) {
    s32 irq;
    s32 ok;
    s8 t;
    Node *n;
    Node *next;
    if (o == NULL) {
        return;
    }
    o->flags = 0;
    t        = o->f73;
    ok       = 1;
    if (t != 0 && t != 4) {
        ok = 0;
    }
    if (ok != 0) {
        func_ov123_02072b08(o->b);
        func_ov123_02072b08(o->a);
    } else if (t == 1) {
        n = o->a->head;
        if (n != NULL) {
            do {
                next = n->next;
                data_ov123_020e0a00->fn(n);
                n = next;
            } while (next != NULL);
        }
        o->a->w108 = 0;
        o->a->w100 = 0;
        o->a->head = NULL;
        OS_WakeupThread(o->a->thr);
        func_ov123_02072b08(o->a);
    } else if (t == 2) {
        func_ov123_02072b08(o->b);
    }
    irq = func_0200fa98();
    func_ov123_02073454(o);
    func_ov123_020733f0(o);
    data_ov123_020e0a00->fn(o);
    func_0200faac(irq);
}
