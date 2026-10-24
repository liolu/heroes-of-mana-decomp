/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Icon {
    u8 pad0[0x3e];
    u8 b3e;
    u8 pad1[0x39];
    void *p78;
} Icon;
typedef struct {
    u8 pad[0x20];
    u32 atai : 3;
    u32 pad20 : 29;
    u8 pad2[0xec];
    Icon *icon;
    u8 pad3[0x18];
    s32 f12c;
} G;
extern G *data_ov000_02051548;
extern u8 *data_ov000_0205154c;
s32 GetCompasIconAtai(void);
Icon *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, u8 *, s32, s32);
void PutCompasIcon(s32 n) {
    if (data_ov000_02051548->icon == 0) {
        data_ov000_02051548->atai      = GetCompasIconAtai();
        data_ov000_02051548->icon      = SetStatusIcon(0xffb5, data_ov000_02051548->atai + 0xe, 0x10, 0x10,
                                                       *(u16 *) (data_ov000_0205154c + n * 0x4b0 + 0x56c), 0, 0,
                                                       (u8 *) data_ov000_02051548 + 0x78c, data_ov000_02051548->f12c, n);
        data_ov000_02051548->icon->p78 = &data_ov000_02051548->icon;
        data_ov000_02051548->icon->b3e |= 0x80;
    }
}
