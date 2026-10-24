/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Ob {
    u8 pad[0x68];
    u8 *base;
} Ob;
s32 func_0200fa98(void);
void func_0200faac(s32);
s32 func_ov123_020726a0(Ob *);
void OS_SleepThread(void *);

s32 func_ov123_020726c4(Ob *obj, s32 a, s32 b, u32 *out, u32 flags) {
    u8 *base = obj->base;
    s32 n;
    s32 st;
    s32 wait;
    if (b > a) {
        b = a;
    }
    st   = func_0200fa98();
    wait = flags & 1;
    while (1) {
        n = func_ov123_020726a0(obj);
        if (n >= b) {
            u32 v = *(u16 *) (base + 0x100);
            if (n >= a) {
                n = a;
            }
            *out = v;
            break;
        }
        if (wait == 0) {
            n = 0;
            break;
        }
        OS_SleepThread(base + 0x104);
    }
    func_0200faac(st);
    return n;
}
