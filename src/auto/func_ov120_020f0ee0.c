#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
typedef struct {
    u32 a : 16;
    u32 b : 1;
    u32 r : 15;
} B_data_ov120_020f46dc;
typedef struct {
    u8 pad[2580];
    B_data_ov120_020f46dc f;
} D_data_ov120_020f46dc;
extern D_data_ov120_020f46dc data_ov120_020f46dc;

void func_ov120_020f0ee0(void) {
    func_ov000_020464a8();
    *(u16 *) 0x04000304           = (u16) ((data_ov120_020f46dc.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov120_020f46dc.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov120_020f46dc.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov120_020f46dc.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov120_020f46dc.f.b << 24);
}
