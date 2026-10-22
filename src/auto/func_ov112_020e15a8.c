#include "m2c.h"

M2C_UNK func_020038ac(s32);                         /* extern */
M2C_UNK func_02003948(s32, M2C_UNK);                /* extern */
M2C_UNK BGM_Fade(M2C_UNK);               /* extern */
M2C_UNK func_ov112_020e1708(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_0203678c;

typedef struct {
    u8 pad[0x48C];
    u32 f0 : 17;
    u32 f17 : 1;
    u32 f18 : 1;
    u32 f19 : 13;
} Flags112;

extern Flags112 data_ov112_020ec588;

void func_ov112_020e15a8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4                 = M2C_FIELD(data_0203678c, s32 *, 0xA0);
    data_ov112_020ec588.f17 = 0;
    data_ov112_020ec588.f18 = 0;
    if (M2C_FIELD(data_0203678c, s32 *, 0xA0) != 0x28) {
        BGM_Fade(1);
        func_02003948(0x28, 0);
        func_020038ac(0x28);
        BGM_Fade(0);
    }
    func_ov112_020e1708(arg0, 0);
    if (M2C_FIELD(data_0203678c, s32 *, 0xA0) == temp_r4) {
        return;
    }
    BGM_Fade(1);
    func_02003948(temp_r4, 0);
    func_020038ac(temp_r4);
    BGM_Fade(0);
}