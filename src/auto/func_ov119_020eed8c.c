#include "m2c.h"
typedef struct G {
    u8 pad[8];
    u32 f8 : 1;
    u32 p8 : 31;
    u8 pad2[0x114];
    u32 f120 : 1;
    u32 p120 : 31;
} G;
typedef struct Flag {
    u16 on : 1;
    u16 rest : 15;
} Flag;
typedef struct Bits {
    u32 pad : 19;
    u32 bit : 1;
    u32 rest : 12;
} Bits;
typedef struct E {
    Bits b;
    u8 q[0x10];
    u16 v;
    u16 r;
} E;
typedef struct S {
    u8 p0[0x20];
    E e[1];
    u8 pp[0xf0 - 0x38];
    s32 idx;
} S;
extern G data_ov119_020f2028;
extern S *data_ov119_020f2f68;
void func_ov119_020ec238(s32, s32, s32, s32, s32);
void func_ov119_020eed8c(void) {
    if (data_ov119_020f2028.f8 || data_ov119_020f2028.f120) {
        ((Flag *) ((u8 *) data_ov119_020f2f68 + 0x400 + 0xfa))->on = 1;
        return;
    }
    data_ov119_020f2f68->e[data_ov119_020f2f68->idx].v++;
    func_ov119_020ec238(1, 1, data_ov119_020f2f68->e[data_ov119_020f2f68->idx].v, 0,
                        data_ov119_020f2f68->e[data_ov119_020f2f68->idx].b.bit);
    (*(u16 *) ((u8 *) data_ov119_020f2f68 + 0x400 + 0xf8))++;
}
