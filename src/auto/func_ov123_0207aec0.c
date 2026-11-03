/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 b[8];
} S8;
s32 func_ov123_02073dec(s32, S8 *);
s32 func_ov123_0207af6c(s32, s32);

s32 func_ov123_0207aec0(s32 arg0, u8 *arg1, u8 arg2) {
    S8 buf;

    if (*(u16 *) (arg1 + 2) == 0) {
        return 0;
    }
    buf      = *(S8 *) arg1;
    buf.b[0] = arg2;
    return func_ov123_0207af6c(func_ov123_02073dec(arg0, &buf), -1);
}
