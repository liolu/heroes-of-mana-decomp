/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u64 a;
    u64 b;
    s32 c;
} Q;
void func_ov123_020a5a9c(Q *);
s32 func_ov123_020a609c(void) {
    Q q;
    func_ov123_020a5a9c(&q);
    if (q.b == 0 && q.a == 0) {
        return 1;
    }
    return 0;
}
