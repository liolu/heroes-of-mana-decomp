/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK NNS_FndAppendListObject(M2C_UNK *, M2C_UNK); /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern M2C_UNK data_02037710;

void FreeCommandBuffer(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    NNS_FndAppendListObject(&data_02037710, arg0);
    func_0200faac(temp_r4);
}
