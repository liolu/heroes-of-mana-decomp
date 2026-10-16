/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK SND_ResetMasterPan();                       /* extern */
M2C_UNK SND_SetMasterPan(M2C_UNK);                  /* extern */

void func_02003bc0(s32 arg0) {
    if (arg0 != 0) {
        SND_SetMasterPan(0x40);
        return;
    }
    SND_ResetMasterPan();
}
