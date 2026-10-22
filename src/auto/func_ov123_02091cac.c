/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024ea0(void *, void *, u16);
s32 func_ov123_02091dd4(void *);

s32 func_ov123_02091cac(void *arg0, void *arg1) {
    s32 i;
    u8 *p;
    u8 *q;
    u16 id;
    s32 n;
    s32 r;
    if (*(u16 *) ((u8 *) arg0 + 0xA) == 0x20) {
        r = func_ov123_02091dd4(arg0);
        if (r > 0) {
            return r;
        }
    }
    n = *((u8 *) arg1 + 0xD12);
    i = 0;
    if (n > 0) {
        id = *(u16 *) ((u8 *) arg0 + 0xA);
        p  = (u8 *) arg1;
        q  = (u8 *) arg1 + 0x47C;
        do {
            if (id == *(u16 *) (p + 0x47A) && func_02024ea0((u8 *) arg0 + 0xC, q, id) == 0) {
                return *((u8 *) arg1 + i * 4 + 0x445);
            }
            i++;
            p += 0xC0;
            q += 0xC0;
        } while (i < n);
    }
    return -1;
}
