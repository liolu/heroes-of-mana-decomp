#include "m2c.h"
typedef struct G1 {
    u8 pad[8];
    u32 f8 : 1;
    u32 p8 : 31;
    u8 pad2[0x3c];
    u32 f48 : 1;
    u32 p48 : 31;
} G1;
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
    u8 p0[0x34];
    E e[1];
    u8 pp[0x104 - 0x4c];
    s32 idx;
} S;
extern G1 data_ov111_020ec1bc;
extern S *data_ov111_020f1bd8;
void func_ov111_020ea144(s32, s32, s32, s32, s32, s32);
void func_ov111_020e8cbc(void) {
    if (data_ov111_020ec1bc.f8 || data_ov111_020ec1bc.f48) {
        ((Flag *) ((u8 *) data_ov111_020f1bd8 + 0x500 + 0xe))->on = 1;
        return;
    }
    data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].v++;
    func_ov111_020ea144(1, 1, data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].v, 0,
                        data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].b.bit, 1);
    (*(u16 *) ((u8 *) data_ov111_020f1bd8 + 0x500 + 0xc))++;
}
