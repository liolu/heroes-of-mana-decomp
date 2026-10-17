#include "m2c.h"

M2C_UNK func_ov000_020464a8();                      /* extern */
M2C_UNK func_ov122_02055590();                      /* extern */
M2C_UNK func_ov122_0205561c();                      /* extern */
M2C_UNK func_ov122_0205af2c();                      /* extern */
M2C_UNK func_ov122_0205b190();                      /* extern */
typedef struct {
    u32 a : 24;
    u32 b : 1;
    u32 r : 7;
} B_data_ov122_02065604;
typedef struct {
    u8 pad[3548];
    B_data_ov122_02065604 f;
} D_data_ov122_02065604;
extern D_data_ov122_02065604 data_ov122_02065604;

void func_ov122_02055808(void) {
    func_ov000_020464a8();
    *(u16 *) 0x04000304           = (u16) ((data_ov122_02065604.f.b << 15) | (*(u16 *) 0x04000304 & ~0x8000));
    *(u32 *) (0x04000304 - 0x2EC) = 0x01FF0000 & (data_ov122_02065604.f.b << 24);
    *(u32 *) (0x04000304 - 0x2E8) = 0x01FF0000 & (data_ov122_02065604.f.b << 24);
    *(u32 *) 0x04001018           = 0x01FF0000 & (data_ov122_02065604.f.b << 24);
    *(u32 *) 0x0400101C           = 0x01FF0000 & (data_ov122_02065604.f.b << 24);
    func_ov122_0205561c();
    func_ov122_02055590();
    func_ov122_0205af2c();
    func_ov122_0205b190();
}
