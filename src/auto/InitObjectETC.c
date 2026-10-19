/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteObjCharDataInVBlank();                      /* extern */
M2C_UNK ObjWorkInitialize();                      /* extern */
M2C_UNK KihonPalTrans();                      /* extern */
M2C_UNK IconPalTrans();                      /* extern */
M2C_UNK MesPalTransToObjPal();                      /* extern */
M2C_UNK DeleteNoAnimeObj(s32);                   /* extern */
extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020a9938;

void InitObjectETC(M2C_UNK arg0) {
    DeleteNoAnimeObj(arg0);
    deleteObjCharDataInVBlank();
    ObjWorkInitialize();
    M2C_FIELD(data_ov000_0205154c, s32 *, 0x158) = (s32) ((M2C_FIELD(data_ov000_0205154c, s32 *, 0x158) & ~1) | 1);
    M2C_FIELD(data_ov000_0205154c, s32 *, 0x608) = (s32) ((M2C_FIELD(data_ov000_0205154c, s32 *, 0x608) & ~1) | 1);
    KihonPalTrans();
    IconPalTrans();
    MesPalTransToObjPal();
}
