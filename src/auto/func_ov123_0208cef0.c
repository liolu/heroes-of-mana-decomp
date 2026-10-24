#include "m2c.h"

char *func_02024c44(char *, const char *);
s32 func_02024c28(s8 *);
void func_ov123_0208cfd0(u8 *, s32, char *, s32);
void func_ov123_0208d114(char *, s32, u8 *);

void func_ov123_0208cef0(u8 *a, u8 *b, s8 *c, s32 n) {
    char buf[0x48];
    s32 len;
    s32 k;
    if (n < 1) {
        return;
    }
    if (n > 0x41) {
        return;
    }
    k = n - 1;
    if (c[(u32) (n - 1)] != 0) {
        return;
    }
    func_02024c44(buf, (char *) c);
    len = func_02024c28((s8 *) (a + 0x44));
    func_ov123_0208cfd0(a + 0x44, len, buf, n - 1);
    func_ov123_0208d114(buf, n - 1, b + *(s32 *) (b + 0x800));
    *(s32 *) (b + 0x800) = *(s32 *) (b + 0x800) + (func_02024c28((s8 *) (b + *(s32 *) (b + 0x800))) + 1);
}
