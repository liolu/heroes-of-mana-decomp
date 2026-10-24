/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct W10 {
    u32 a : 6;
    u32 mode : 4;
    u32 b : 22;
} W10;
typedef struct W24 {
    u32 a : 8;
    u32 flag : 1;
    u32 b : 23;
} W24;
typedef struct Gm {
    u32 pad0;
    u32 f4;
    u32 pad8;
    u32 padc;
    u32 f10;
    u8 pad14[0x10];
    W24 f24;
    u8 pad28[0x10];
    s16 f38;
    u8 pad3a[0xB6];
    u8 fF0[0xC];
} Gm;
s32 InShipRoutine();
void MIi_CpuClear16(s32, void *, s32);
void ReflectSystemConfig(void);
void func_02000f44(s32);
void func_02000f78(s32);
extern Gm *data_ov000_02051548;

void CallMenuRoutine(void) {
    s32 r;
    u32 t;
    func_02000f44(0xA);
    if (data_ov000_02051548->f38 == -1 || data_ov000_02051548->f24.flag != 0) {
        MIi_CpuClear16(0, data_ov000_02051548->fF0, 0xC);
    }
    t = data_ov000_02051548->f10;
    if (((t << 0x16) >> 0x1C) - 3 <= 1U) {
        data_ov000_02051548->f10 = t & ~0x3C0;
    }
    data_ov000_02051548->f4 |= 0x40000;
    r = InShipRoutine(0, data_ov000_02051548->fF0);
    data_ov000_02051548->f4 &= ~0x40000;
    func_02000f78(0xA);
    if (r == 1) {
        func_02000f44(9);
        InShipRoutine(0);
        func_02000f78(9);
    }
    ReflectSystemConfig();
}
