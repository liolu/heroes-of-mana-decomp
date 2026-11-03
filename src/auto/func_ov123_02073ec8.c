/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    s32 v;
} R;
R *func_ov123_02070e98(void *, s32, s32);
s32 func_ov123_02070d58(s32, R *);
extern u8 func_ov123_02073e58[];
s32 func_ov123_02073ec8(s32 arg0, s32 arg1) {
    R *r = func_ov123_02070e98(func_ov123_02073e58, arg0, 1);
    if (r == NULL) {
        return -0x21;
    }
    r->v = arg1;
    return func_ov123_02070d58(arg0, r);
}
