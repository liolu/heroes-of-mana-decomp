/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02091320();                          /* extern */
s32 func_ov123_020913d8(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_02092780(s32);                   /* extern */
M2C_UNK func_ov123_020928b0(s32);                   /* extern */
M2C_UNK func_ov123_020928cc();                      /* extern */
M2C_UNK func_ov123_020928d4();                      /* extern */

void func_ov123_02092918(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_ov123_020913d8(1);
    temp_r0 = func_ov123_02091320();
    if (temp_r0 < 4) {
        func_ov123_020928d4();
        return;
    }
    if (temp_r0 < 5) {
        func_ov123_020928cc();
        return;
    }
    if (temp_r0 == 5) {
        func_ov123_020928b0(temp_r4);
        return;
    }
    func_ov123_02092780(temp_r4);
}
