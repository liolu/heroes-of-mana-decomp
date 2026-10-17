/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207c048(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207c0b0(void *);                /* extern */
M2C_UNK func_ov123_0207c0fc(void *);                /* extern */
M2C_UNK func_ov123_02087008();                      /* extern */
M2C_UNK func_ov123_020888c8();                      /* extern */
M2C_UNK func_ov123_0208bf30();                      /* extern */
M2C_UNK func_ov123_0208d444();                      /* extern */
M2C_UNK func_ov123_0208ee68();                      /* extern */
M2C_UNK func_ov123_0209bc7c();                      /* extern */
M2C_UNK func_ov123_0209cc28();                      /* extern */
M2C_UNK func_ov123_020a2780();                      /* extern */
M2C_UNK func_ov123_020a497c();                      /* extern */
extern void *data_ov123_020e1748;

void func_ov123_0209b034(void) {
    if (data_ov123_020e1748 == NULL) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e1748, s32 *, 0x364) != 0) {
        func_ov123_0208d444();
        M2C_FIELD(data_ov123_020e1748, s32 *, 0x364) = 0;
    }
    M2C_FIELD(data_ov123_020e1748, s8 *, 0x36C) = 0;
    if (M2C_FIELD(data_ov123_020e1748, s32 *, 0x438) != 0) {
        func_ov123_0208ee68();
        M2C_FIELD(data_ov123_020e1748, s32 *, 0x438) = 0;
    }
    func_ov123_0208bf30();
    func_ov123_02087008();
    if (M2C_FIELD(data_ov123_020e1748, s32 *, 0x1C) != 0) {
        func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 0, 0, 0);
        func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 3, 0, 0);
        func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 1, 0, 0);
        func_ov123_0207c048(data_ov123_020e1748 + 0x1C, 2, 0, 0);
        func_ov123_0207c0b0(data_ov123_020e1748 + 0x1C);
        func_ov123_0207c0fc(data_ov123_020e1748 + 0x1C);
        M2C_FIELD(data_ov123_020e1748, s32 *, 0x1C) = 0;
    }
    func_ov123_0209bc7c();
    func_ov123_0209cc28();
    func_ov123_020a2780();
    func_ov123_020a497c();
    if (M2C_FIELD(data_ov123_020e1748, s32 *, 0) != 0) {
        func_ov123_020888c8();
        M2C_FIELD(data_ov123_020e1748, s32 *, 0) = 0;
    }
    data_ov123_020e1748 = NULL;
}
