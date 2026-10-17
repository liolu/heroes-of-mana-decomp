#include "m2c.h"

M2C_UNK VBlankIntrWaitInGame();                      /* extern */
M2C_UNK func_ov114_020e24e8();                      /* extern */
M2C_UNK func_ov114_020e2548();                      /* extern */
M2C_UNK func_ov114_020e2684();                      /* extern */
M2C_UNK func_ov114_020e4aa8();                      /* extern */
M2C_UNK func_ov114_020e4af4();                      /* extern */
typedef struct {
    u32 a : 8;
    u32 b : 1;
    u32 r : 23;
} B_data_ov114_020e6148;
typedef struct {
    u8 pad[1300];
    B_data_ov114_020e6148 f;
} D_data_ov114_020e6148;
extern D_data_ov114_020e6148 data_ov114_020e6148;

void func_ov114_020e2688(void) {
    VBlankIntrWaitInGame();
    func_ov114_020e2684();
    *(u16 *) 0x04000304           = (u16) ((data_ov114_020e6148.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov114_020e6148.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov114_020e6148.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov114_020e6148.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov114_020e6148.f.b << 24);
    func_ov114_020e2548();
    func_ov114_020e24e8();
    func_ov114_020e4aa8();
    func_ov114_020e4af4();
}
