#include "m2c.h"

typedef struct {
    u8 pad0[0x444];
    void *f444;
    u8 pad1[0x40];
    s32 f488;
} Dat112;

extern Dat112 data_ov112_020ec588;
extern u8 data_ov112_020eca1c[];

void *func_0200a80c(void);
void MIi_CpuCopy16(void *src, void *dst, s32 size);
s32 func_ov112_020e72cc(s32);

void func_ov112_020e6ebc(void) {
    void *dst;
    s32 i;
    u8 *p;

    dst = func_0200a80c();
    MIi_CpuCopy16(data_ov112_020ec588.f444, dst, 0x800);
    i = 0;
    p = data_ov112_020eca1c;
    do {
        i += 1;
        p[0xD38] = 0;
        p += 1;
    } while (i < 6);
    data_ov112_020ec588.f488 = data_ov112_020ec588.f488 & ~0x780000;
    func_ov112_020e72cc(3);
}
