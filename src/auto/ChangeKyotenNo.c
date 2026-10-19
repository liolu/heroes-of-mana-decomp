/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK InitMessageScreenForDS(M2C_UNK);               /* extern */
M2C_UNK EndMessageScreenForDS(M2C_UNK);               /* extern */
M2C_UNK ChangeCamera2MyKuniLeader();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa18c;
extern s32 data_ov003_020ad4a8;

void ChangeKyotenNo(M2C_UNK arg0) {
    M2C_FIELD(data_ov000_02051548, u16 *, 0x258) = arg0;
    if ((s32) M2C_FIELD(data_ov000_02051548, u16 *, 0x258) >= (s32) data_ov003_020ad4a8) {
        M2C_FIELD(data_ov000_02051548, u16 *, 0x258) = 0U;
    }
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) << 0x17) >> 0x1F) != 0) {
        EndMessageScreenForDS(0);
        EndMessageScreenForDS(1);
        InitMessageScreenForDS(0);
        InitMessageScreenForDS(1);
    } else {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x14) =
            (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF8000) | 0x10000);
        ChangeCamera2MyKuniLeader();
    }
}
