/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 *func_ov123_020913d8(s32);
long long func_0200f510(void);
void func_ov123_02092ec0(void *, void *, s32, s32);
extern u8 data_ov123_020d4e88;
extern u8 data_ov123_020d4e90;

void func_ov123_02093498(s32 a0) {
    u8 *p = func_ov123_020913d8(0x10);
    switch (a0) {
        case 3:
            *(long long *) (p + 0xCB0) = func_0200f510();
            func_ov123_02092ec0(&data_ov123_020d4e88, &data_ov123_020d4e90, *(s8 *) (p + 0xD11), 0x200000);
            break;
        case 4:
            *(long long *) (p + 0xCB0) = func_0200f510();
            func_ov123_02092ec0(p + 0x474 + p[0xD0F] * 0xC0, p + 0x47C + p[0xD0F] * 0xC0,
                                *(u16 *) (p + 0x4A6 + p[0xD0F] * 0xC0) - 1, 0x300000);
            break;
        case 5:
            *(long long *) (p + 0xCB0) = func_0200f510();
            func_ov123_02092ec0(&data_ov123_020d4e88, p + 0x304 + p[0xD0F] * 0x24, *(s8 *) (p + 0xD11), 0x300000);
            break;
    }
}
