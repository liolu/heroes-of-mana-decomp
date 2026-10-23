/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 a;
    u16 b;
} K;
s32 func_ov123_0208ae48(K **x, K **y) {
    K *p = *x;
    K *q = *y;
    if (p->a != q->a) {
        return p->a - q->a;
    }
    return (s16) (p->b - q->b);
}
