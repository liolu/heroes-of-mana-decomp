/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct P {
    s32 pad0[3];
    s32 pad1;
    s32 pad2;
} P;
typedef struct Q {
    u8 pad[0xC];
    s32 c;
    s32 h10;
} Q;
typedef struct O {
    u8 pad[8];
    Q *q;
    s32 kind;
    u8 pad2[4];
    s32 f14;
    u8 pad3[0xC];
    s32 f24;
} O;
void func_ov123_02079f1c(s32, s32);
s32 **func_ov123_0207a194(s32, s32);
s32 func_ov123_0207a204(s32);
void func_ov123_0207a58c(s32, void *);

void func_ov123_0208a880(O *a, ...) {
    s32 n;
    s32 i;
    if (a->f14 != 0) {
        return;
    }
    if (a->f24 != 0) {
        return;
    }
    if (a->kind == 7) {
        n = func_ov123_0207a204(a->q->h10);
        i = 0;
        if (n <= 0) {
            return;
        }
        do {
            if ((O *) a == (O *) *func_ov123_0207a194(a->q->h10, i)) {
                func_ov123_02079f1c(a->q->h10, i);
                return;
            }
            i++;
        } while (i < n);
        return;
    }
    func_ov123_0207a58c(a->q->c, &a);
}
