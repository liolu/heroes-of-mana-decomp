/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 b[20];
} T20;
typedef struct {
    u8 b[21];
} T21;
void func_ov123_0208b298(s32, void *, s32);
void func_ov123_0208b3a8(s32, void *, s32);
void func_ov123_0208b490(s32, void *, s32);
s32 func_ov123_0208bf04(void);
s32 func_ov123_0208c098(u32);

void func_ov123_0208b13c(u8 *p, s32 len, s32 arg2) {
    T20 a;
    T21 b;
    u32 w;
    s32 r;
    u8 t;

    if (func_ov123_0208bf04() == 0) {
        return;
    }
    t = p[7];
    if (t == 5 || t == 7) {
        if (len < 0x14) {
            return;
        }
        a = *(T20 *) p;
        w = *(u32 *) (a.b + 8);
        r = func_ov123_0208c098(((w << 0x18) & 0xFF000000) |
                                (((w << 8) & 0xFF0000) | ((u8) (w >> 0x18) | ((w >> 8) & 0xFF00))));
        if (r == 0) {
            return;
        }
        if (t == 5) {
            func_ov123_0208b490(r, &a, arg2);
            return;
        }
        func_ov123_0208b3a8(r, &a, arg2);
        return;
    }
    if (len < 0x15) {
        return;
    }
    b = *(T21 *) p;
    w = *(u32 *) (b.b + 8);
    r = func_ov123_0208c098(((w << 0x18) & 0xFF000000) | (((w << 8) & 0xFF0000) | ((u8) (w >> 0x18) | ((w >> 8) & 0xFF00))));
    if (r == 0) {
        return;
    }
    func_ov123_0208b298(r, &b, arg2);
}
