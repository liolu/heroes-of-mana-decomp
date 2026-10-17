#include "m2c.h"

M2C_UNK func_ov123_020cf040(void *);                /* extern */
M2C_UNK func_ov123_020cf460(void *);                /* extern */
M2C_UNK func_ov123_020cff84(void *);                /* extern */
M2C_UNK func_ov123_020d0584(void *);                /* extern */
M2C_UNK func_ov123_020d10a8(void *);                /* extern */
M2C_UNK func_ov123_020d18a8(void *);                /* extern */
M2C_UNK func_ov123_020d1984(void *);                /* extern */
M2C_UNK func_ov123_020d1ac4(void *);                /* extern */
extern M2C_UNK data_ov123_020df160;

void *func_ov123_020d2cfc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020df160;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x7AC4);
    if (temp_r0 != NULL) {
        (*(void (**)(void *))(*(u8 **) temp_r0 + 4))(temp_r0);
    }
    func_ov123_020d10a8((u8 *) arg0 + 0x7530);
    func_ov123_020d0584((u8 *) arg0 + 0x7514);
    func_ov123_020cff84((u8 *) arg0 + 0x27BC);
    func_ov123_020cf460((u8 *) arg0 + 0xF98);
    func_ov123_020cf040((u8 *) arg0 + 0xEFC);
    func_ov123_020d1ac4((u8 *) arg0 + 0xED4);
    func_ov123_020d1984((u8 *) arg0 + 0x18);
    func_ov123_020d18a8((u8 *) arg0 + 4);
    return arg0;
}
