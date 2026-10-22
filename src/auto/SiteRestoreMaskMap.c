/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void OS_FreeToHeap(u32, s32, void *);
void convertPlane1bitToVC(s32, void *);
void UncompressPlane(s32, void *, s32);
extern void *data_ov000_02051548;
void SiteRestoreMaskMap(void) {
    s32 temp_r0;
    void *p;
    p = M2C_FIELD(data_ov000_02051548, void **, 0x688);
    if (p != 0) {
        convertPlane1bitToVC(0x06208000, p);
    }
    M2C_FIELD(data_ov000_02051548, s8 *, 0x68C) = 0;
    temp_r0                                     = M2C_FIELD(data_ov000_02051548, s32 *, 0x684);
    if (temp_r0 != 0) {
        UncompressPlane(temp_r0, data_ov000_02051548 + 0x540, 0x140);
    }
    p = M2C_FIELD(data_ov000_02051548, void **, 0x680);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x680) = 0;
    }
    p = M2C_FIELD(data_ov000_02051548, void **, 0x684);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x684) = 0;
    }
    p = M2C_FIELD(data_ov000_02051548, void **, 0x688);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x688) = 0;
    }
}
