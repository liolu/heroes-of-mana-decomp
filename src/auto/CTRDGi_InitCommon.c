#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_0200cc18();                                /* extern */
extern M2C_UNK CTRDGi_EnableFlag;
extern M2C_UNK CTRDGi_Work;

void CTRDGi_InitCommon(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &CTRDGi_Work, 0x05000001);
    M2C_FIELD(&CTRDGi_EnableFlag, s16 *, 6) = func_0200cc18();
}
