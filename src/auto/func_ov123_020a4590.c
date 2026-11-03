/* compiler: 1.2/sp3 */
/* near start: 5 diffs with profile "1.2/sp3" */
/* near start: 6 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct G {
    u8 pad[0x604];
    void (*cb)(s32, s32, s32);
    s32 f608;
} G;
void MI_CpuCopy8(void *, s32, s32);
u64 func_0200f510(void);
void func_ov123_02099524(s32, s32);
s32 func_ov123_020a492c(s32);
extern G *data_ov123_020e2048;

void func_ov123_020a4590(s32 arg0, void *arg1, s32 arg2) {
    u8 *e;
    s32 lim;
    s32 off;
    s32 sum;
    s32 len;
    void (*cb)(s32, s32, s32);

    e = (u8 *) data_ov123_020e2048 + arg0 * 0x30;
    if (func_ov123_020a492c(arg0) == 2) {
        off = *(s32 *) (e + 0x10);
        sum = off + arg2;
        if (sum > *(s32 *) (e + 8)) {
            func_ov123_02099524(6, -97620);
            return;
        }
        MI_CpuCopy8(arg1, *(s32 *) (e + 4) + off, arg2);
    }
    *(s32 *) (e + 0x10) += arg2;
    len = *(s32 *) (e + 0x18);
    if (*(s32 *) (e + 0x10) == len) {
        e[0x1D]             = 1;
        *(s32 *) (e + 0x10) = 0;
        *(s32 *) (e + 0x18) = 0;
        cb                  = data_ov123_020e2048->cb;
        if (cb != NULL) {
            cb(arg0, *(s32 *) (e + 4), len);
        }
    }
    if (data_ov123_020e2048->f608 == 0) {
        return;
    }
    if (*(s32 *) (e + 0x2C) == 0) {
        return;
    }
    *(u64 *) (e + 0x24) = func_0200f510();
}
