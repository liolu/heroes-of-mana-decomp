/* compiler: 1.2/sp3 */
/* near start: 16 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 func_02024c28(s8 *);
u64 func_0202d478(u32, s32);
void func_ov123_0208da54(void *, void *, u32);

void func_ov123_02090540(s8 *arg0, s8 *arg1, s32 arg2) {
    s8 *b0;
    s8 *b1;
    s32 n;
    s32 i;
    s32 r5;
    s8 *tbl;
    s32 p;
    s32 idx1;
    s32 idx2;
    s8 t1;
    s8 a;
    s8 b;
    s8 c;

    b0  = arg0;
    b1  = arg1;
    n   = arg2;
    r5  = func_02024c28(b0 + 0x54);
    tbl = b0 + 0x54;
    i   = 0;
    if (n > 0) {
        do {
            t1              = tbl[(s32) (func_0202d478(i, r5) >> 32)];
            p               = i * t1;
            idx1            = i % 8;
            idx2            = p % 8;
            a               = b0[0x74 + idx1];
            b               = b1[i];
            c               = b0[0x74 + idx2];
            b0[0x74 + idx2] = c ^ (s8) (a ^ b);
            i += 1;
        } while (i < n);
    }
    func_ov123_0208da54(b0 + 0x4BC, b0 + 0x74, 8);
}
