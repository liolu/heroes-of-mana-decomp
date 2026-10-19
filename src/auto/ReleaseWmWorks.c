/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Clear_wmwork();                      /* extern */
M2C_UNK ReleaseWmWorksTrnsWork(s32);                   /* extern */
extern M2C_UNK data_ov003_020aa978;

void ReleaseWmWorks(M2C_UNK arg0) {
    ReleaseWmWorksTrnsWork(arg0);
    Clear_wmwork();
}
