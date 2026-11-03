/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020c36bc(s32);
void func_ov123_020ae668(u16, u16, u16, u16);
extern u8 data_ov123_020e4600;
extern u16 data_ov123_020d7e10[];

void func_ov123_020b34bc(s32 arg0) {
    s32 i;

    if (arg0 == 1) {
        goto done;
    }
    if (arg0 == 3) {
        goto done;
    }
    data_ov123_020e4600 ^= 1;
    func_ov123_020c36bc(8);
    i = data_ov123_020e4600;
    func_ov123_020ae668(data_ov123_020d7e10[i * 4], data_ov123_020d7e10[i * 4 + 2], data_ov123_020d7e10[i * 4 + 1],
                        data_ov123_020d7e10[i * 4 + 3]);
done:
    return;
}
