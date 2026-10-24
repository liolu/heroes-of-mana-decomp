/* compiler: 1.2/sp3 */
#include "m2c.h"
extern void func_ov123_0208db1c(u8 *);
extern s32 func_ov123_0208db64(u8 *, s32, u8 *, u32, u8 *, s32 *);

void func_ov123_0208da54(u8 *s, u8 *key, u32 len) {
    u8 a;
    s32 b;
    s32 i;
    s32 j;
    u8 t;
    if (len < 1) {
        func_ov123_0208db1c(s);
        return;
    }
    for (i = 0; i < 0x100; i++) {
        s[i] = i;
    }
    b = 0;
    a = 0;
    for (i = 0xff; i >= 0; i--) {
        j    = func_ov123_0208db64(s, i, key, len, &a, &b);
        t    = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    s[0x100] = s[1];
    s[0x101] = s[3];
    s[0x102] = s[5];
    s[0x103] = s[7];
    s[0x104] = s[a];
    a        = 0;
    b        = 0;
}
