#include "m2c.h"

extern M2C_UNK data_0203a630;

void TP_WaitBusy(s32 arg0) {
    do {

    } while (M2C_FIELD(&data_0203a630, volatile u16 *, 0x3A) & arg0);
}
