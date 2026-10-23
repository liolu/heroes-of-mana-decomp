#include "m2c.h"
extern void func_ov123_020b23d4(s32 *o, s32 k);
extern void func_ov123_020c4230(void *o);
extern void func_ov123_020c3c90(void *o);
void func_ov123_020ae530(void *o) {
    s32 v[2];
    func_ov123_020b23d4(v, 0);
    if (v[0] == 1) {
        func_ov123_020c4230(o);
    } else if (v[0] == 2) {
        func_ov123_020c3c90(o);
    }
}
