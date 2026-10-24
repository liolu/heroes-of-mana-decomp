/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void OS_LockMutex(void *);
void func_0200e644(void *);
int func_ov123_0206d108(void);
void func_ov123_0206d34c(u16, u16, int);
typedef struct {
    u8 p[0x64];
    u8 *q;
} B;
typedef struct {
    u8 p[0x70];
    s16 f;
} C;
typedef struct {
    u8 p0[4];
    C *c;
    u8 p1[4];
    s8 k;
    u8 p2[3];
    u16 a;
    u16 b;
    int d;
} A;

int func_ov123_020716c4(A *x) {
    C *c;
    u8 *m;
    int r;
    c = x->c;
    m = *(u8 **) ((u8 *) c + 0x64);
    r = 0;
    r = 0;
    OS_LockMutex(m + 0xe0);
    func_ov123_0206d34c(x->a, x->b, x->d);
    *(int *) (m + 0xf8) = 0;
    if (x->k == 0 || x->k == 4) {
        r = func_ov123_0206d108();
    }
    func_0200e644(m + 0xe0);
    if (r != 0) {
        c->f |= 0x40;
        return -0x4c;
    }
    c->f |= 4;
    return 0;
}
