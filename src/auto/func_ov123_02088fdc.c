/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct O {
    u8 pad[0x50];
    u8 sub[0x14];
    u16 h64;
    u16 h66;
} O;
void func_ov123_02087490(void *, void *, s32);
void func_ov123_0208751c(void *, u16);
void func_ov123_02087590(void *, u8);
s32 func_ov123_020875e8(void *);
s32 func_ov123_020890b0(void *, u16, s32);
s32 func_ov123_0208a49c(void *);
extern u8 data_ov123_020db544[];

s32 func_ov123_02088fdc(O *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 r;
    u16 t;
    if (func_ov123_020875e8(arg0->sub) < arg2) {
        if (func_ov123_0208a49c(arg0) == 0) {
            r = 0;
        } else {
            r     = 1;
            *arg3 = 1;
        }
        return r;
    }
    if (func_ov123_020890b0(arg0, arg0->h64, arg2) == 0) {
        if (func_ov123_0208a49c(arg0) == 0) {
            r = 0;
        } else {
            r     = 1;
            *arg3 = 1;
        }
        return r;
    }
    func_ov123_02087490(arg0->sub, data_ov123_020db544, 2);
    func_ov123_02087590(arg0->sub, arg1);
    t         = arg0->h64;
    arg0->h64 = t + 1;
    func_ov123_0208751c(arg0->sub, t);
    func_ov123_0208751c(arg0->sub, arg0->h66);
    *arg3 = 0;
    return 1;
}
