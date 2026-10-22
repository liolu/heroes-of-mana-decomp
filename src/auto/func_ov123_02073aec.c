/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void MI_CpuFill8(void *, s32, s32);
void func_02020a50(void *, void *, s32);
u32 func_ov123_02073188(void);

extern u8 data_ov123_020e0ae4[0x101];
extern u8 data_ov123_020e0a78[];
extern u8 data_ov123_020e0a84[];
extern u8 data_ov123_020e0a8c[];

void *func_ov123_02073aec(void *arg0) {
    u32 t;
    u32 sw;

    t = func_ov123_02073188();
    if (t == 0) {
        return NULL;
    }
    MI_CpuFill8(data_ov123_020e0ae4, 0, 0x101);
    func_02020a50(data_ov123_020e0ae4, arg0, 0x101);
    sw = ((t << 0x18) & 0xFF000000) | (((t << 8) & 0xFF0000) | ((u8) (t >> 0x18) | ((t >> 8) & 0xFF00)));
    M2C_FIELD(data_ov123_020e0a8c, void **, 0)   = data_ov123_020e0ae4;
    M2C_FIELD(data_ov123_020e0a8c, s32 *, 4)     = 0;
    M2C_FIELD(data_ov123_020e0a8c, s16 *, 8)     = 2;
    M2C_FIELD(data_ov123_020e0a8c, s16 *, 0xA)   = 4;
    M2C_FIELD(data_ov123_020e0a8c, void **, 0xC) = data_ov123_020e0a84;
    M2C_FIELD(data_ov123_020e0a84, void **, 0)   = data_ov123_020e0a78;
    M2C_FIELD(data_ov123_020e0a84, s32 *, 4)     = 0;
    M2C_FIELD(data_ov123_020e0a78, u32 *, 0)     = sw;
    return data_ov123_020e0a8c;
}
