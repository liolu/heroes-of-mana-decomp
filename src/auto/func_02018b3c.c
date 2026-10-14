#include "m2c.h"

s32 func_0201867c();                                /* extern */
extern M2C_UNK data_0203b000;

s32 func_02018b3c(void) {
    if (func_0201867c() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&data_0203b000, void **, 4), s32 *, 4);
}
