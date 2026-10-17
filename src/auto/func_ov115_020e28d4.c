#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
M2C_UNK func_ov115_020e26e4();                      /* extern */
M2C_UNK func_ov115_020e2744();                      /* extern */
M2C_UNK func_ov115_020e28d0();                      /* extern */
M2C_UNK func_ov115_020e57e4();                      /* extern */
M2C_UNK func_ov115_020e5870();                      /* extern */
typedef struct {
    u32 a : 16;
    u32 b : 1;
    u32 r : 15;
} B_data_ov115_020e9160;
typedef struct {
    u8 pad[2140];
    B_data_ov115_020e9160 f;
} D_data_ov115_020e9160;
extern D_data_ov115_020e9160 data_ov115_020e9160;

void func_ov115_020e28d4(void) {
    func_ov000_020464a8();
    func_ov115_020e28d0();
    *(u16 *) 0x04000304           = (u16) ((data_ov115_020e9160.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov115_020e9160.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov115_020e9160.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov115_020e9160.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov115_020e9160.f.b << 24);
    func_ov115_020e2744();
    func_ov115_020e26e4();
    func_ov115_020e5870();
    func_ov115_020e57e4();
}
