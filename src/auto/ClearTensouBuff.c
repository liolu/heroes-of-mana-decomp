/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a639c;
extern M2C_UNK data_ov003_020aea88;

void ClearTensouBuff(void) {
    s32 var_r2;

    var_r2 = 0;
    do {
        ((s32 *) &data_ov003_020aea88)[var_r2] = 0;
        var_r2 += 1;
    } while (var_r2 < 5);
}
