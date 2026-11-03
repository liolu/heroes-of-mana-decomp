/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 *data_ov123_020e46cc;
void func_ov123_020c2508(void *obj);
s32 func_ov123_020c28bc(void);
void func_0200fddc(void);

void func_ov123_020c2728(u8 *obj) {
    u8 *q;
    s32 t;
    if (*(u16 *) (obj + 2) != 0) {
        return;
    }
    q = data_ov123_020e46cc + 0x1000;
    if (q[0xE4C] != 0) {
        return;
    }
    if (*(u16 *) obj != 0x26) {
        return;
    }
    t = *(u16 *) (obj + 8);
    if (t == 4) {
        goto L4;
    }
    if (t != 5) {
        goto Ld;
    }
    func_ov123_020c2508(obj);
    func_ov123_020c28bc();
    return;
L4:
    func_ov123_020c28bc();
    return;
Ld:
    func_0200fddc();
}
