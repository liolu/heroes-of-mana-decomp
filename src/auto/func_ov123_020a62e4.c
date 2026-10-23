#include "m2c.h"
typedef struct {
    s32 a, b;
} P;
typedef struct {
    P a;
    P b;
    s32 pad;
} R;
extern void func_ov123_020a5a9c(R *q);
extern s32 func_ov123_020a59b4(R *q, s32 b);
s32 func_ov123_020a62e4(R *q, s32 b) {
    R t;
    func_ov123_020a5a9c(&t);
    *(long long *) &q->a = *(long long *) &q->b;
    *(long long *) &q->b = *(long long *) &t.b;
    return func_ov123_020a59b4(q, b) != 0;
}
