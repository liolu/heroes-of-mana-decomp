/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x48];
    s32 f48;
    u32 f4c;
    u32 f50;
    u32 m : 2;
    u32 rest : 30;
    u8 pad2[0x64];
    void *fbc;
    u8 pad3[0x10];
} Ent;
extern u8 *data_ov000_02051550;
void MesFrameChrLoad(s32);
void putOneSomeFrame(void *, void *, s32, s32, s32);
void MessageFramePutWriteSub(void *self, s32 idx) {
    s32 z;
    MesFrameChrLoad(idx);
    z = 0;
    putOneSomeFrame(self, ((Ent *) (data_ov000_02051550 + idx * 0xD0))->fbc, z, idx, z);
    ((Ent *) (data_ov000_02051550 + idx * 0xD0))->m   = 1;
    ((Ent *) (data_ov000_02051550 + idx * 0xD0))->f48 = 1;
    ((Ent *) (data_ov000_02051550 + idx * 0xD0))->f4c |= 0x1000;
    *(s8 *) (data_ov000_02051550 + 0x456) = -0x40;
    if (idx == 0) {
        *(volatile u32 *) 0x4000014 = *(s8 *) (data_ov000_02051550 + 0x456) & 0x1FF;
    } else {
        *(volatile u32 *) 0x4001014 = *(s8 *) (data_ov000_02051550 + 0x456) & 0x1FF;
    }
    *(s8 *) (data_ov000_02051550 + 0x454) = -*(s8 *) (data_ov000_02051550 + 0x456);
    *(s8 *) (data_ov000_02051550 + 0x455) = 0;
    *(u16 *) (data_ov000_02051550 + 0x338) &= ~0x40;
}
