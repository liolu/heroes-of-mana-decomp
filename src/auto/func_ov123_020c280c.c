/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_End(M2C_UNK *);                              /* extern */
s32 WM_Reset(M2C_UNK *);                            /* extern */
M2C_UNK func_02018d24(void *);                      /* extern */
extern void *data_ov123_020e46cc;
extern M2C_UNK func_ov123_020c2728;

s32 func_ov123_020c280c(void) {
    M2C_FIELD(data_ov123_020e46cc, s8 *, 0x1E4C) = 1;
    func_02018d24(data_ov123_020e46cc + 0x168C);
    if (M2C_FIELD(data_ov123_020e46cc, u16 *, 0x168C) != 2) {
        if (WM_Reset(&func_ov123_020c2728) != 2) {
            return 0;
        }
        do {
            func_02018d24(data_ov123_020e46cc + 0x168C);
        } while (M2C_FIELD(data_ov123_020e46cc, u16 *, 0x168C) != 2);
        goto block_4;
    }
block_4:
    if (WM_End(&func_ov123_020c2728) != 2) {
        return 0;
    }
    return 1;
}
