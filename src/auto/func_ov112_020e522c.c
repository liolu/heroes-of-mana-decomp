#include "m2c.h"

M2C_UNK VBlankIntrWaitInGame();                      /* extern */
typedef struct {
    u32 b : 1;
    u32 r : 31;
} B_data_ov112_020ec588;
typedef struct {
    u8 pad[1160];
    B_data_ov112_020ec588 f;
} D_data_ov112_020ec588;
extern D_data_ov112_020ec588 data_ov112_020ec588;

void func_ov112_020e522c(void) {
    VBlankIntrWaitInGame();
    *(u16 *) 0x04000304           = (u16) ((data_ov112_020ec588.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov112_020ec588.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov112_020ec588.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov112_020ec588.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov112_020ec588.f.b << 24);
}
