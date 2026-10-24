/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void *func_0200ed38(u32, s32, s32);
void MIi_CpuCopy16(void *, void *, s32);
extern u8 *data_ov000_02051548;
void SetTrsFlyArm(void *arg0) {
    u8 *p = func_0200ed38(0, -1, 0x18);
    MIi_CpuCopy16(arg0, p, 0x14);
    *(u32 *) (p + 0x14)                              = *(u32 *) (*(u8 **) &data_ov000_02051548 + 0x4c8);
    *(u8 **) (*(u8 **) &data_ov000_02051548 + 0x4c8) = p;
}
