/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void MI_CpuCopy8(void *, void *, s32);
extern void OS_WakeupThread(void *);
extern s32 func_0200fa98();
extern void func_0200faac(s32);

typedef struct Al {
    u8 p0[0x18];
    void *(*f18)(s32);
} Al;
extern Al *data_ov123_020e0a00;

typedef struct Cnt {
    s32 a;
    s32 b;
} Cnt;
extern Cnt data_ov123_020e0a68;

typedef struct Node {
    struct Node *next;
    s16 len;
    u16 f6;
    s32 f8;
    u8 data[1];
} Node;

typedef struct Q {
    u8 p0[0x100];
    Node **volatile head;
    Node *tail;
    u16 used;
    u16 cap;
    u8 thread[1];
} Q;

typedef struct Src {
    u8 p0[0xa];
    u16 fa;
    u8 pc[0xc];
    u16 f18;
    u16 f1a;
    s32 f1c;
    s32 f20;
    u8 p24[0x74 - 0x24];
    u16 f74;
} Src;

s32 func_ov123_02071950(void *arg0, s16 arg1, Src *arg2) {
    Q *temp_r6;
    Node *temp_r0;
    s32 temp_r4;

    temp_r6 = *(Q **) ((u8 *) arg2 + 0x64);
    temp_r4 = func_0200fa98();
    if ((u32) temp_r6->cap >= (u32) (temp_r6->used + arg1)) {
        temp_r0 = data_ov123_020e0a00->f18(arg1 + 0xC);
        if (temp_r0 != NULL) {
            temp_r6->used = temp_r6->used + arg1;
            temp_r0->next = NULL;
            temp_r0->len  = arg1;
            temp_r0->f6   = arg2->f18;
            temp_r0->f8   = arg2->f1c;
            MI_CpuCopy8(arg0, temp_r0->data, arg1);
            if (temp_r6->head != NULL) {
                *temp_r6->head = temp_r0;
            }
            temp_r6->head = (Node **) temp_r0;
            if (temp_r6->tail == NULL) {
                temp_r6->tail = temp_r0;
            }
        } else {
            data_ov123_020e0a68.a = data_ov123_020e0a68.a + 1;
        }
    } else {
        data_ov123_020e0a68.b = data_ov123_020e0a68.b + 1;
    }
    if (arg2->f74 == 0) {
        arg2->f74 = arg2->fa;
    }
    arg2->f18 = arg2->f1a;
    arg2->f1c = arg2->f20;
    OS_WakeupThread(temp_r6->thread);
    func_0200faac(temp_r4);
    return 1;
}
