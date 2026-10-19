/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ace70;

void SetRoutineByCallGodBeast(M2C_UNK arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xFC) = arg0;
}
