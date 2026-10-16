#include "m2c.h"

M2C_UNK func_ov123_0207fe48(void *);                /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

void func_ov123_02083a58(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        func_ov123_020996a0(M2C_FIELD(temp_r0, void **, 8));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8) = NULL;
        func_ov123_020996a0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC) = NULL;
        func_ov123_020996a0(M2C_FIELD(arg0, void **, 8));
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    func_ov123_0207fe48(arg0);
    func_ov123_020996a0(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    func_ov123_020996a0(M2C_FIELD(arg0, void **, 0x18));
    M2C_FIELD(arg0, void **, 0x18) = NULL;
}
