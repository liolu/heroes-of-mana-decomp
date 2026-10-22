/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fa98();                            /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern void *data_ov123_020df180;

s32 func_ov123_02067c6c(void) {
    s32 state;
    s32 var;

    state = func_0200fa98();
    var   = 0;
    if (data_ov123_020df180 != NULL) {
        var = M2C_FIELD(data_ov123_020df180, s32 *, 0x2260);
    }
    func_0200faac(state);
    return var;
}
