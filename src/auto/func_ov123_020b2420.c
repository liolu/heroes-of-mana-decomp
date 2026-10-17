/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK GX_DispOff();                               /* extern */
M2C_UNK func_ov123_020c36e0();                      /* extern */
M2C_UNK func_ov123_020c8a44();                      /* extern */
M2C_UNK func_ov123_020c918c();                      /* extern */
M2C_UNK func_ov123_020c9844();                      /* extern */
M2C_UNK func_ov123_020c9f18();                      /* extern */
M2C_UNK func_ov123_020ca55c();                      /* extern */
M2C_UNK func_ov123_020cabcc();                      /* extern */
M2C_UNK func_ov123_020cacac();                      /* extern */
M2C_UNK func_ov123_020caeec();                      /* extern */
M2C_UNK func_ov123_020cb2b8();                      /* extern */
M2C_UNK func_ov123_020cb390();                      /* extern */
M2C_UNK func_ov123_020cb790();                      /* extern */

void func_ov123_020b2420(void) {
    GX_DispOff();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_ov123_020cb2b8();
    func_ov123_020cabcc();
    func_ov123_020cacac();
    func_ov123_020c36e0();
    func_ov123_020c918c();
    func_ov123_020caeec();
    func_ov123_020c9f18();
    func_ov123_020c9844();
    func_ov123_020c8a44();
    func_ov123_020cb790();
    func_ov123_020ca55c();
    func_ov123_020cb390();
}
