/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c6c38(u16);                       /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK data_ov123_020de600;
extern M2C_UNK (*data_ov123_020e4704)(M2C_UNK, M2C_UNK *, u16, u16);
extern void *data_ov123_020e4708;

void func_ov123_020c6b5c(void *arg0) {
    s32 temp_r0;
    u16 temp_ip;
    u16 temp_r1;
    u16 temp_r2;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        func_ov123_020c7738(9);
        return;
    }
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de600, M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, u16 *, 0xA));
    }
    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_ip = M2C_FIELD(arg0, u16 *, 8);
    temp_r1 = M2C_FIELD(data_ov123_020e4708, u16 *, 0x5E);
    if ((u32) temp_r1 > (u32) temp_r2) {
        M2C_FIELD(data_ov123_020e4708, u16 *, 0x5E) = temp_r2;
        M2C_FIELD(data_ov123_020e4708, u16 *, 0x60) = (u16) (1 << (temp_ip - 1));
    } else if (temp_r1 == temp_r2) {
        M2C_FIELD(data_ov123_020e4708, u16 *, 0x60) =
            (u16) (M2C_FIELD(data_ov123_020e4708, u16 *, 0x60) | (1 << (temp_ip - 1)));
    }
    temp_r0 = func_ov123_020c6c38((u16) (temp_ip + 1));
    if (temp_r0 == 0x18) {
        func_ov123_020c7738(7);
        return;
    }
    if (temp_r0 == 2) {
        return;
    }
    func_ov123_020c7738(9);
}
