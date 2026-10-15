#include "m2c.h"

M2C_UNK func_0200fddc();

M2C_UNK CTRDGi_SendtoPxi(M2C_UNK);
extern M2C_UNK data_02041640;

void CTRDG_TerminateForPulledOut(void) {
    CTRDGi_SendtoPxi(2);
    func_0200fddc();
}

void CTRDGi_CallbackForSetPhi(void) {
    M2C_FIELD(&data_02041640, s32 *, 4) = 0;
}
