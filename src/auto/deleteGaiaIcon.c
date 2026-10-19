/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNoAnimeObjOnlyOne();                      /* extern */
M2C_UNK deleteComObjByComno(void *, s32);           /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab100;

void deleteGaiaIcon(void) {
    deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFBA);
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x1F8) != 0) {
        DeleteNoAnimeObjOnlyOne();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1F8) = 0;
    }
}
