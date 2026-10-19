/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

M2C_UNK ReleaseUnitListGraDataOne(s32);                   /* extern */
extern M2C_UNK data_ov109_020ea000;

void ReleaseUnitListGraData(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        ReleaseUnitListGraDataOne(var_r4);
        var_r4 += 1;
    } while (var_r4 < 8);
}
