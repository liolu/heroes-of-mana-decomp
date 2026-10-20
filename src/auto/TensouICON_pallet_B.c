/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(void *, void *, M2C_UNK);     /* extern */
extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020a997c;

typedef struct {
    u8 pad0[0x368];
    u8 pal[0x4B0];
} S;

void TensouICON_pallet_B(void *arg0, void *arg1, s32 arg5) {
    s32 temp_r5;
    s32 temp_r6;
    u16 temp_r4;
    S *s;

    temp_r6 = arg0;
    temp_r5 = arg1;
    s = (S *)data_ov000_0205154c;
    temp_r4 = M2C_FIELD(data_ov000_0205154c, u16 *, 0xA1E);
    if (((u32) (M2C_FIELD(data_ov000_0205154c, s32 *, 0x608) << 0x1F) >> 0x1F) == 1) {
        MIi_CpuCopy16((u8 *)s->pal + 0x4B0 + ((temp_r6 + M2C_FIELD(data_ov000_0205154c, u16 *, 0xA1C)) << 5), M2C_FIELD(data_ov000_0205154c, s32 *, 0x610) + ((temp_r4 + temp_r5) << 5), 0x20);
    }
    s = (S *)data_ov000_0205154c;
    MIi_CpuCopy16((u8 *)s->pal + 0x4B0 + ((temp_r6 + M2C_FIELD(data_ov000_0205154c, u16 *, 0xA1C)) << 5), (u8 *)s->pal + 0x4B0 + ((temp_r4 + temp_r5) << 5), 0x20);
}
