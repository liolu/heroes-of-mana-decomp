/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u32 id;
    s16 mask;
    u16 res;
} Ent;
extern u32 func_ov123_02073290(u32);
extern void func_0200e0a4(u32);

s32 func_ov123_020734ac(Ent *arr, u32 n, s64 timeout) {
    s32 flag;
    u32 one;
    s32 zero;
    Ent *p;
    u32 i;
    s32 cnt;
    u32 m;
    one  = 1;
    zero = 0;
    flag = (timeout != -1);
    while (1) {
        cnt = zero;
        p   = arr;
        i   = cnt;
        for (; i < n; i++, p++) {
            m      = p->mask | 0xe0;
            m      = m & func_ov123_02073290(p->id);
            p->res = m;
            if (m != 0) {
                cnt++;
            }
        }
        if (cnt > 0) {
            break;
        }
        if (flag && timeout <= 0) {
            break;
        }
        func_0200e0a4(one);
        timeout -= 0x20b;
    }
    return cnt;
}
