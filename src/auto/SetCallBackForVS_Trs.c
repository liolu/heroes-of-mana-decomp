/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aab44;
extern M2C_UNK data_ov003_020b6380;

void SetCallBackForVS_Trs(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b6380, s32 *, 0xAC) = arg0;
}
