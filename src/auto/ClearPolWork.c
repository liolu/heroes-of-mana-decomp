/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

M2C_UNK ClearPolWorkOnMDA(void *);                /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9c78;

void ClearPolWork(void) {
    void *var_r4;

    var_r4 = M2C_FIELD(data_ov000_02051548, void **, 0x2CC);
loop_1:
    if (var_r4 != NULL) {
        ClearPolWorkOnMDA(var_r4);
        var_r4 = M2C_FIELD(var_r4, void **, 0xC);
        goto loop_1;
    }
}
