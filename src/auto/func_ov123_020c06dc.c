#include "m2c.h"

typedef struct O {
    u8 pad[0xF4];
    u8 f4;
} O;
typedef struct Bf {
    u8 b[10];
    u8 x;
    u8 y;
} Bf;
extern u8 data_ov123_020d8274[];
O *func_ov123_020c35d4(void);
void MIi_CpuCopy32(void *, void *, s32);
void func_ov123_020b2398(s32, s32 *);
s32 func_ov123_02091824(Bf *);
void func_0200fddc(void);
void func_ov123_020915e4(s32, O *);
void func_ov123_020cb6ac(s32, void (*)(void), s32, s32);
void func_ov123_020c0488(void);

void func_ov123_020c06dc(void) {
    s32 mode;
    Bf bf;
    O *o = func_ov123_020c35d4();
    MIi_CpuCopy32(data_ov123_020d8274, &bf, 12);
    func_ov123_020b2398(0, &mode);
    if (mode == 2) {
        bf.x = 4;
    } else {
        bf.x = o->f4 + 1;
    }
    if (func_ov123_02091824(&bf) == 0) {
        func_0200fddc();
    }
    if (mode == 0) {
        func_ov123_020915e4(o->f4, o);
    }
    func_ov123_020cb6ac(0, func_ov123_020c0488, 0, 0x78);
}
