/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void MIi_CpuClear16(s32, s32, s32);
extern s32 func_0200aa50(void);
extern void func_ov123_020ca49c(void *);
extern void func_ov123_020cb5ec(s32, s32);
extern u16 data_ov123_020d8454[];
extern u8 *data_ov123_020e4724;

void func_ov123_020c9b20(u8 *arg0) {
    func_ov123_020cb5ec(1, *(s32 *) (arg0 + 0x34));
    if (arg0 == data_ov123_020e4724 + 0x718) {
        MIi_CpuClear16(0, func_0200aa50(), (data_ov123_020d8454[0] * data_ov123_020d8454[1]) << 5);
    } else {
        MIi_CpuClear16(0, func_0200aa50(), (data_ov123_020d8454[2] * data_ov123_020d8454[3]) << 5);
    }
    func_ov123_020ca49c(arg0 + 0x30);
}
