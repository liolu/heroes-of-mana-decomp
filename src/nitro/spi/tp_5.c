#include "m2c.h"

M2C_UNK TP_GetCalibratedResult(M2C_UNK);

M2C_UNK TP_WaitBusy(M2C_UNK);

void TP_WaitCalibratedResult(M2C_UNK arg0) {
    TP_WaitBusy(1);
    TP_GetCalibratedResult(arg0);
}
