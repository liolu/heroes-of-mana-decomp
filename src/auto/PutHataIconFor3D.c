/* compiler: 2.0/sp1p5 -profile */
/* near start: 1 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
void deleteHataIcon(void);
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
void PutHataIconFor3D(s32 a, s32 b) {
    u8 *r;
    void *vp = (void *) 0x10;
    deleteHataIcon();
    r = SetStatusIcon(0xFFA2, 0x20, a, b, *(u16 *) (data_ov000_0205154c + 0x56C), 1, 0, data_ov000_02051548 + 0x78C,
                      *(s32 *) (data_ov000_02051548 + 0x12C), 0);
    *(u8 **) (data_ov000_02051548 + 0x260)                   = r;
    *(u8 **) (*(u8 **) (data_ov000_02051548 + 0x260) + 0x78) = data_ov000_02051548 + 0x260;
    r                                                        = *(u8 **) (data_ov000_02051548 + 0x260);
    r[8]                                                     = (s32) vp;
    r[9]                                                     = (s32) vp;
    r[0xB]                                                   = (s32) vp - 0x20;
    r[0xA]                                                   = 8;
}
