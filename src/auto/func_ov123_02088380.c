/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02088c94(void *, s32, s32);
M2C_UNK func_ov123_0208aea0(s32 *, s32 *);

void func_ov123_02088380(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 4) {
        return;
    }
    func_ov123_0208aea0(&arg1, &arg2);
    func_ov123_02088c94(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0xC) = 6;
}
