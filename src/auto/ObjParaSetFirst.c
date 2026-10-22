/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void MIi_CpuCopy16(u8 *, s32, s32);
void OS_FreeToHeap(s32, s32, void *);
void ModelWorkInit(void);
extern void *data_0203673c;
extern void *data_ov000_02051548;

void ObjParaSetFirst(void *arg0) {
    u8 *temp_r4;

    temp_r4                                      = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x258) = (s16) M2C_FIELD(temp_r4, s32 *, 0);
    ModelWorkInit();
    MIi_CpuCopy16(temp_r4 + 4, M2C_FIELD(data_0203673c, s32 *, 0x24), 0x11E0);
    MIi_CpuCopy16(temp_r4 + 0x11E4, M2C_FIELD(data_0203673c, s32 *, 0x28), 0xB40);
    if (M2C_FIELD(arg0, u8 **, 4) != NULL) {
        OS_FreeToHeap(0, -1, M2C_FIELD(arg0, u8 **, 4));
        M2C_FIELD(arg0, u8 **, 4) = NULL;
    }
}
