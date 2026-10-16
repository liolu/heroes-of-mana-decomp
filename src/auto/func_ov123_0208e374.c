/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_0208e374(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 != NULL) {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(temp_r2, void **, 0x20);
        if (M2C_FIELD(arg0, void **, 0) == NULL) {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    }
    return temp_r2;
}
