#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
M2C_UNK func_ov121_020ec504();                      /* extern */
M2C_UNK func_ov121_020ec598();                      /* extern */
M2C_UNK func_ov121_020ec734();                      /* extern */
M2C_UNK func_ov121_020f130c();                      /* extern */
M2C_UNK func_ov121_020f1490();                      /* extern */
typedef struct {
    u32 a : 24;
    u32 b : 1;
    u32 r : 7;
} B_data_ov121_020f6d60;
typedef struct {
    u8 pad[2632];
    B_data_ov121_020f6d60 f;
} D_data_ov121_020f6d60;
extern D_data_ov121_020f6d60 data_ov121_020f6d60;

void func_ov121_020ec77c(void) {
    func_ov000_020464a8();
    func_ov121_020ec734();
    *(u16 *) 0x04000304           = (u16) ((data_ov121_020f6d60.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov121_020f6d60.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov121_020f6d60.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov121_020f6d60.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov121_020f6d60.f.b << 24);
    func_ov121_020ec598();
    func_ov121_020ec504();
    func_ov121_020f130c();
    func_ov121_020f1490();
}
