#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
M2C_UNK func_ov113_020e2188();                      /* extern */
M2C_UNK func_ov113_020e21e8();                      /* extern */
M2C_UNK func_ov113_020e2334();                      /* extern */
M2C_UNK func_ov113_020e2e68();                      /* extern */
M2C_UNK func_ov113_020e2ea0();                      /* extern */
typedef struct {
    u32 a : 9;
    u32 b : 1;
    u32 r : 22;
} B_data_ov113_020e4944;
typedef struct {
    u8 pad[1040];
    B_data_ov113_020e4944 f;
} D_data_ov113_020e4944;
extern D_data_ov113_020e4944 data_ov113_020e4944;

void func_ov113_020e2338(void) {
    func_ov000_020464a8();
    func_ov113_020e2334();
    *(u16 *) 0x04000304           = (u16) ((data_ov113_020e4944.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov113_020e4944.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov113_020e4944.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov113_020e4944.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov113_020e4944.f.b << 24);
    func_ov113_020e21e8();
    func_ov113_020e2188();
    func_ov113_020e2e68();
    func_ov113_020e2ea0();
}
