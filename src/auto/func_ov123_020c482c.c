/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_End(void (*)(void *));                              /* extern */
s32 WM_Reset(void (*)(void *));                            /* extern */
M2C_UNK func_02018d24(void *);                      /* extern */
M2C_UNK func_ov123_020ca49c(void **, s32);               /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);               /* extern */
extern void *data_ov123_020e46e0;
void func_ov123_020c4768(void *);

s32 func_ov123_020c482c(void) {
    u8 v;
    M2C_FIELD(data_ov123_020e46e0, u8 *, 0x1B84) = 1U;
    func_02018d24(data_ov123_020e46e0 + 0x13B8);
    if (M2C_FIELD(data_ov123_020e46e0, u16 *, 0x13B8) != 2) {
        if (WM_Reset(func_ov123_020c4768) != 2) {
            return 0;
        }
        do {
            func_02018d24(data_ov123_020e46e0 + 0x13B8);
        } while (M2C_FIELD(data_ov123_020e46e0, u16 *, 0x13B8) != 2);
        goto block_4;
    }
block_4:
    if (WM_End(func_ov123_020c4768) != 2) {
        return 0;
    }
    if (M2C_FIELD(data_ov123_020e46e0, s32 *, 0x1B80) != 0) {
        func_ov123_020cb5ec(0, M2C_FIELD(data_ov123_020e46e0, s32 *, 0x1B80));
    }
    {
        u8 *p = (u8 *) data_ov123_020e46e0 + 0x1000;
        do {
            v = *(volatile u8 *) (p + 0xB84);
        } while (v != 2);
    }
    func_ov123_020ca49c(&data_ov123_020e46e0, v);
    return 1;
}
