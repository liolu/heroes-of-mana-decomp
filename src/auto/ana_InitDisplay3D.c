/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK AengineScreenSetUp(s32);                   /* extern */
M2C_UNK BengineScreenSetUp();                      /* extern */
M2C_UNK BengineAreaMapTrans();                      /* extern */
extern M2C_UNK data_ov003_020aa41c;

void ana_InitDisplay3D(M2C_UNK arg0) {
    AengineScreenSetUp(arg0);
    BengineScreenSetUp();
    BengineAreaMapTrans();
}
