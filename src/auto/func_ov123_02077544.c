/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 RTC_ConvertDateTimeToSecond(M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK RTC_GetTime(M2C_UNK *);                     /* extern */
M2C_UNK func_02016554(M2C_UNK *);                   /* extern */

s32 func_ov123_02077544(void) {
    u8 sp0[16];
    u8 sp10[12];

    func_02016554((void *) sp0);
    RTC_GetTime((void *) sp10);
    return RTC_ConvertDateTimeToSecond((void *) sp0, (void *) sp10) + 0x386D4380;
}
