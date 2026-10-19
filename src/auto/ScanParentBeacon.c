/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK ScanParentLifeDec();                      /* extern */
s32 WH_StartScan(M2C_UNK *, s32 *, M2C_UNK); /* extern */
s32 WH_GetSystemState();                          /* extern */
extern M2C_UNK data_ov003_020aaacc;
extern M2C_UNK ScanParentCallback;

void ScanParentBeacon(void) {
    s32 sp0;

    sp0 = 0xFFFFFF;
    if ((WH_GetSystemState() == 1) && (WH_StartScan(&ScanParentCallback, &sp0, 0) == 0)) {
        func_0200fddc();
    }
    ScanParentLifeDec();
}
