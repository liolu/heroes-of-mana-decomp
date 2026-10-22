/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_ov123_0208aea0(s32 *, s32 *);
extern s32 func_ov123_020996d4(void);
extern void func_02021318(s32, s32, s32);
extern void func_ov123_02087208(void *);
extern void func_ov123_020870d0(void *, void *);
extern void func_ov123_02088e78(void *, void *);
typedef struct {
    s32 a, b, c, d;
} Q;
s32 func_ov123_02088444(u8 *arg0, s32 a1, s32 a2, Q *arg3) {
    u8 sp0[36];
    s32 t;
    func_ov123_0208aea0(&a1, &a2);
    if (a2 > 0) {
        t                      = func_ov123_020996d4();
        *(s32 *) (arg0 + 0x38) = t;
        if (*(s32 *) (arg0 + 0x38) == 0) {
            return 1;
        }
        func_02021318(*(s32 *) (arg0 + 0x38), a1, a2);
        *(s32 *) (arg0 + 0x3C) = a2;
    }
    if (arg3 != 0) {
        *(Q *) (arg0 + 0x28) = *arg3;
    }
    func_ov123_02087208(sp0);
    func_ov123_020870d0(arg0 + 0x68, sp0);
    func_ov123_02088e78(arg0, sp0);
    *(s32 *) (arg0 + 0xC) = 0;
    return 0;
}
