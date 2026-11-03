/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_02079f1c(void *, s32);
s32 func_ov123_0207a204(void *);
s32 *func_ov123_0207a194(void *, s32);
void func_ov123_020873f4(void *, s32, s32);

void func_ov123_02089b3c(u8 *arg0, s32 *arg1, s32 arg2) {
    s32 best;
    s32 lim;
    s32 sub;
    s32 cnt;
    s32 i;
    s32 *p;
    s32 v;

    lim  = arg1[0];
    sub  = arg1[1];
    best = 0;
    func_ov123_02079f1c(*(void **) (arg0 + 0x5C), arg2);
    cnt = func_ov123_0207a204(*(void **) (arg0 + 0x5C));
    i   = 0;
    if (cnt > 0) {
        do {
            p = func_ov123_0207a194(*(void **) (arg0 + 0x5C), i);
            v = p[0];
            if (v > lim) {
                p[0] = v - sub;
                v    = p[0] + p[1];
                if (best <= v) {
                    best = v;
                }
            }
            i++;
        } while (i < cnt);
    }
    func_ov123_020873f4(arg0 + 0x44, lim, sub);
}
