/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 func_02008ff0(s32, s32);
void func_ov123_020c36bc(s32);
void func_ov123_020ae668(u16, u16, u16, u16);
extern u8 data_ov123_020e460c;
extern u16 data_ov123_020d7e98[];

void func_ov123_020b474c(s32 arg0) {
    s32 i;

    if (arg0 == 1) {
        data_ov123_020e460c = func_02008ff0(data_ov123_020e460c + 2, 3);
    } else {
        data_ov123_020e460c = func_02008ff0(data_ov123_020e460c + 1, 3);
    }
    func_ov123_020c36bc(8);
    i = data_ov123_020e460c;
    func_ov123_020ae668(data_ov123_020d7e98[i * 4], data_ov123_020d7e98[i * 4 + 2], data_ov123_020d7e98[i * 4 + 1],
                        data_ov123_020d7e98[i * 4 + 3]);
}
