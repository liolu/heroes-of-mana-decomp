/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_020015cc(s32);                         /* extern */
M2C_UNK ClearDropItemExist();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac088;

void InitializeOtherKuniAndUnit(M2C_UNK arg0) {
    func_020015cc(arg0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1C0);
    ClearDropItemExist();
}
