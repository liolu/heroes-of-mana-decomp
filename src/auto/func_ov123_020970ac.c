/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    s8 *str;
    s32 end;
} S;
typedef struct T {
    u8 pad0[0x1A08];
    S s;
    u8 pad1[0x8];
    u8 mtx[0x18];
    s32 v30;
    s32 v34;
} T;
void OS_LockMutex(void *);
void func_0200e644(void *);
s32 func_02024c28(void *);
s8 *func_02024f10(s8 *, void *);
s32 func_02026c4c(s8 *);
extern u8 data_ov123_020dc1a0[];
extern u8 data_ov123_020dc1bc[];
extern u8 data_ov123_020dc358[];

s32 func_ov123_020970ac(T *arg0) {
    s8 *str;
    S *s;
    s32 off;
    s8 *p;
    s8 *q;
    s8 saved;

    str = arg0->s.str;
    s   = &arg0->s;
    if (func_02024f10(str, data_ov123_020dc1a0) == NULL) {
        return 0;
    }
    off = (s32) func_02024f10(str, data_ov123_020dc1a0) + 4;
    OS_LockMutex(arg0->mtx);
    arg0->v34 = s->end - off;
    func_0200e644(arg0->mtx);
    p = func_02024f10(s->str, data_ov123_020dc358);
    if (p == NULL) {
        return 1;
    }
    p     = p + func_02024c28(data_ov123_020dc358);
    q     = func_02024f10(p, data_ov123_020dc1bc);
    saved = *q;
    *q    = 0;
    OS_LockMutex(arg0->mtx);
    arg0->v30 = func_02026c4c(p);
    func_0200e644(arg0->mtx);
    *q = saved;
    return 1;
}
