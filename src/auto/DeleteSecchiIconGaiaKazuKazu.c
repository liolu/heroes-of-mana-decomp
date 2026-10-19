/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNoAnimeObjOnlyOne();                      /* extern */
M2C_UNK deleteComObjByComno(void *, s32);           /* extern */
extern M2C_UNK data_ov109_020e9f90;
extern void *data_ov109_020ea340;

s32 DeleteSecchiIconGaiaKazuKazu(void) {
    u32 var_r0;

    var_r0 = (u32) (M2C_FIELD(data_ov109_020ea340, u32 *, 0) << 0x18) >> 0x1F;
    if (var_r0 != 0) {
        if (M2C_FIELD(data_ov109_020ea340, s32 *, 0x38) != 0) {
            DeleteNoAnimeObjOnlyOne();
            M2C_FIELD(data_ov109_020ea340, s32 *, 0x38) = 0;
        }
        deleteComObjByComno(data_ov109_020ea340 + 0x3C, 0xFF65);
        deleteComObjByComno(data_ov109_020ea340 + 0x3C, 0xFF67);
        var_r0                                   = M2C_FIELD(data_ov109_020ea340, u32 *, 0) & ~0x80;
        M2C_FIELD(data_ov109_020ea340, u32 *, 0) = var_r0;
    }
    return var_r0;
}
