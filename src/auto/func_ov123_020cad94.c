/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_DisableIrqMask(M2C_UNK);                 /* extern */
M2C_UNK OS_EnableIrqMask(M2C_UNK);                         /* extern */

void func_ov123_020cad94(void **arg0, void *arg1) {
    s32 hunt_t;
    hunt_t                       = OS_DisableIrqMask(1);
    M2C_FIELD(*arg0, void **, 4) = arg1;
    M2C_FIELD(arg1, void **, 0)  = (void *) *arg0;
    M2C_FIELD(arg1, void ***, 4) = arg0;
    *arg0                        = arg1;
    OS_EnableIrqMask(hunt_t);
}
