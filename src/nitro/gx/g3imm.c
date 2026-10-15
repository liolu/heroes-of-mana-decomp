#include "m2c.h"

M2C_UNK GX_SendFifo48B();
M2C_UNK MI_Copy36B();
M2C_UNK GX_SendFifo128B();

void G3_LoadMtx43(s32 arg0) {
    *(s32 *) 0x04000400 = 0x17;
    GX_SendFifo48B(arg0);
}

void G3_MultMtx33(s32 arg0) {
    *(s32 *) 0x04000400 = 0x1A;
    MI_Copy36B(arg0);
}

void G3_Shininess(s32 arg0) {
    *(s32 *) 0x04000400 = 0x34;
    GX_SendFifo128B(arg0);
}
