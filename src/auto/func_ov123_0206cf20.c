/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 p0[4];
    s32 f4;
    u8 p1[0x38];
    s32 f40;
    s32 f44;
} Q;
s32 func_0200fa98(void);
void func_0200faac(s32);
void OS_SleepThread(s32);

s32 func_ov123_0206cf20(s32 *out, Q *q) {
    s32 v;
    s32 e = func_0200fa98();
    v     = q->f44;
    if (v == 0) {
        do {
            q->f4 = 3;
            OS_SleepThread(0);
            v = q->f44;
        } while (v == 0);
    }
    func_0200faac(e);
    *out = v;
    return q->f40;
}
