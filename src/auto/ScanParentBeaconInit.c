/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aab1c;
extern M2C_UNK data_ov003_020b552c;

void ScanParentBeaconInit(void) {
    u8 *var_r2;
    s32 var_r1;

    var_r2 = (u8 *) (&data_ov003_020b552c);
    var_r1 = 0;
    do {
        var_r1 += 1;
        M2C_FIELD(var_r2, s32 *, 0x50) = (s32) (M2C_FIELD(var_r2, s32 *, 0x50) & ~1);
        var_r2 += 0xC0;
    } while (var_r1 < 0x14);
}
