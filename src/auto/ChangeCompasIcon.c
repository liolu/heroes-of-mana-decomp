/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK PutCompasIcon(M2C_UNK);               /* extern */
M2C_UNK deleteCompasIcon(s32);                   /* extern */
extern M2C_UNK data_ov003_020aaf54;

void ChangeCompasIcon(M2C_UNK arg0) {
    deleteCompasIcon(arg0);
    PutCompasIcon(0);
}
