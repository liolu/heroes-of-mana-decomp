/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02000f78(M2C_UNK);                     /* extern */
M2C_UNK release_AnaGlobalWork();                      /* extern */
extern M2C_UNK data_ov000_02050620;
extern void *data_ov000_02051548;

void AnaGameUnLoad(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 4) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) & ~2);
    release_AnaGlobalWork();
    func_02000f78(0x12);
    func_02000f78(3);
}
