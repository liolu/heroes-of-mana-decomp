/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a : 14;
    u32 b : 6;
    u32 c : 6;
    u32 d : 6;
    u32 e : 9;
    u32 f : 23;
} P;

extern void *data_0203673c;

void SetFlyArmAOM(void *arg0, P *arg1, s32 arg2) {
    s32 off;
    u32 temp_ip;
    s32 temp_r2;

    M2C_FIELD(arg0, u32 *, 0) = arg1->b;
    off                       = arg2 * 0x14;
    M2C_FIELD(arg0, u16 *, 4) = arg1->c;
    M2C_FIELD(arg0, u16 *, 6) = arg1->e;
    temp_ip                   = (M2C_FIELD(arg0, u32 *, 8) & ~0xFF) |
              (u8) ((u32) (M2C_FIELD(M2C_FIELD(data_0203673c, s32 *, 8) + off, u32 *, 0xC) << 9) >> 0x18);
    M2C_FIELD(arg0, u32 *, 8) = temp_ip;
    temp_r2 =
        (temp_ip & ~0x1F00) |
        ((u32) (((u32) (M2C_FIELD(M2C_FIELD(data_0203673c, s32 *, 8) + off, s32 *, 0x14) << 0x18) >> 0x18) << 0x1B) >> 0x13);
    M2C_FIELD(arg0, u32 *, 8) = temp_r2;
    M2C_FIELD(arg0, u32 *, 8) =
        (temp_r2 & ~0x3E000) |
        ((u32) (((u32) (M2C_FIELD(M2C_FIELD(data_0203673c, s32 *, 8) + off, u32 *, 0x14) << 0x10) >> 0x18) << 0x1B) >> 0xE);
}
