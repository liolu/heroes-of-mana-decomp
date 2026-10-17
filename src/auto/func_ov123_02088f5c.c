/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
void *func_ov123_0207a194(s32, s32);                /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
s32 func_ov123_02088338(void *, s32, s32);          /* extern */
extern M2C_UNK data_ov123_020db550;
extern M2C_UNK data_ov123_020db558;

s32 func_ov123_02088f5c(void *arg0) {
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0 = func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r0 <= 0) {
        func_02020d04(&data_ov123_020db550, &data_ov123_020db558, 0, 0x475);
    }
    temp_r0_2 = func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 0x60), temp_r0 - 1);
    if (func_ov123_02088338(arg0, M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(temp_r0_2, s32 *, 0),
                            M2C_FIELD(temp_r0_2, s32 *, 4)) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return 1;
}
