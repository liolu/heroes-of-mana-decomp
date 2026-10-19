/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WM_SetEntry(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK data_ov003_020aaaa8;
extern M2C_UNK getErrForSetEntry;

void SetEntryflagBeacon(M2C_UNK arg0) {
    if (arg0 != 0) {
        WM_SetEntry(&getErrForSetEntry, 1);
    } else {
        WM_SetEntry(&getErrForSetEntry, 0);
    }
}
