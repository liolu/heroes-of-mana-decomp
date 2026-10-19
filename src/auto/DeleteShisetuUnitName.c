/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNameByNoAnimeObj(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK deleteComObjByComno(u32 *, s32);            /* extern */
extern M2C_UNK data_ov109_020e9f48;
extern u32 *data_ov109_020ea340;

s32 DeleteShisetuUnitName(void) {
    u32 var_r0;

    var_r0 = (u32) (*data_ov109_020ea340 << 0x19) >> 0x1F;
    if (var_r0 != 0) {
        DeleteNameByNoAnimeObj(0, 0);
        deleteComObjByComno(data_ov109_020ea340 + 15, 0xFF66);
        var_r0               = *data_ov109_020ea340 & ~0x40;
        *data_ov109_020ea340 = var_r0;
    }
    return var_r0;
}
