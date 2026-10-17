/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae2a4(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ae530(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ae8d8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020bf2cc();                      /* extern */
M2C_UNK func_ov123_020bf950();                      /* extern */
M2C_UNK func_ov123_020bfa6c();                      /* extern */
void *func_ov123_020ca4ec(M2C_UNK, M2C_UNK);        /* extern */
extern void *data_ov123_020e4694;
extern M2C_UNK func_ov123_020bf8f4;

void func_ov123_020bfb84(void) {
    void *temp_r0;

    temp_r0                        = func_ov123_020ca4ec(0x20, 4);
    data_ov123_020e4694            = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 0x1D) = 0;
    func_ov123_020bfa6c();
    func_ov123_020ae8d8(1);
    func_ov123_020ae2a4(0x2F, -1, 0);
    func_ov123_020ae530(0);
    func_ov123_020bf950();
    func_ov123_020bf2cc();
    func_ov123_020b2410(&func_ov123_020bf8f4);
}
