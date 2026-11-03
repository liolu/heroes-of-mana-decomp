/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020ae668(u16, u16, u16, u16);
void func_ov123_020ae754(s32, u16, u16, u16);
extern u8 data_ov123_020e4690;
extern u16 data_ov123_020d8178[];

void func_ov123_020bf2cc(void) {
    u32 i;

    i = data_ov123_020e4690;
    if (i < 4U) {
        func_ov123_020ae668(data_ov123_020d8178[i * 4], data_ov123_020d8178[i * 4 + 2], data_ov123_020d8178[i * 4 + 1],
                            data_ov123_020d8178[i * 4 + 3]);
    } else {
        func_ov123_020ae754(0, data_ov123_020d8178[i * 4], data_ov123_020d8178[i * 4 + 2], data_ov123_020d8178[i * 4 + 1]);
    }
}
