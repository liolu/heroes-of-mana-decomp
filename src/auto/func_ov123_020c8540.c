/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, void *, M2C_UNK);          /* extern */
u16 WM_GetNextTgid();                               /* extern */
M2C_UNK func_ov123_020c6ddc(s32);                   /* extern */
extern void *data_ov123_020e470c;

void func_ov123_020c8540(void) {
    func_ov123_020c6ddc(M2C_FIELD(data_ov123_020e470c, s32 *, 0xAC8));
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA90)  = 1;
    M2C_FIELD(data_ov123_020e470c, u16 *, 0x648) = WM_GetNextTgid();
    MI_CpuCopy8(M2C_FIELD(data_ov123_020e470c, s32 *, 0xAA4), data_ov123_020e470c + 0xA50, 0x40);
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA93)  = 0;
    M2C_FIELD(data_ov123_020e470c, s32 *, 0x204) = 0;
    M2C_FIELD(data_ov123_020e470c, u16 *, 0x648) = (u16) (M2C_FIELD(data_ov123_020e470c, u16 *, 0x648) + 1);
}
