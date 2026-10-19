/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ana_ReadKey();                      /* extern */
M2C_UNK GetPanelTouch(s32);                   /* extern */
extern M2C_UNK data_ov000_02050764;

void GetKeyAndTouch(M2C_UNK arg0) {
    GetPanelTouch(arg0);
    ana_ReadKey();
}
