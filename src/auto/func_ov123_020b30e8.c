/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae810();                      /* extern */
M2C_UNK func_ov123_020ae934();                      /* extern */
M2C_UNK func_ov123_020b233c();                      /* extern */
M2C_UNK func_ov123_020b29fc(s32);                   /* extern */
M2C_UNK func_ov123_020b2a8c();                      /* extern */
M2C_UNK func_ov123_020c35e8();                      /* extern */
M2C_UNK func_ov123_020c93b8(M2C_UNK);               /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020cb588(M2C_UNK, M2C_UNK);      /* extern */
extern s32 data_ov123_020e45fc;

void func_ov123_020b30e8(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020cb588(0, 0);
    func_ov123_020cb588(1, 0);
    func_ov123_020c93b8(1);
    func_ov123_020c93b8(0);
    func_ov123_020ae934();
    func_ov123_020ae810();
    func_ov123_020b29fc(data_ov123_020e45fc);
    func_ov123_020b2a8c();
    func_ov123_020c35e8();
    func_ov123_020b233c();
}
