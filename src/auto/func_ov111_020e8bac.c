#include "m2c.h"
typedef struct {
    u32 p0 : 19;
    u32 bit : 1;
    u32 p1 : 12;
    u8 pad[0x10];
    s16 v;
    s16 p;
} E;
typedef struct {
    u8 pad[0x28];
    u8 *code;
    u8 pad1[8];
    E e[8];
    u8 pad2[0x10];
    s32 idx;
    u8 pad3[0x404];
    u16 pc;
    u16 f0 : 1;
    u16 f1 : 15;
} G;
typedef struct {
    u32 b0 : 1;
    u32 b1 : 31;
} B;
typedef struct {
    u8 pad[8];
    B a;
    u8 pad2[0x3c];
    B b;
} D;
extern D data_ov111_020ec1bc;
extern G *data_ov111_020f1bd8;
s16 func_ov111_020e5d98(s32);
void func_ov111_020ea144(s32, s32, s32, s32, s32, s32);
void func_ov111_020e8bac(void) {
    G *g;
    if (data_ov111_020ec1bc.a.b0 != 0 || data_ov111_020ec1bc.b.b0 != 0) {
        data_ov111_020f1bd8->f0 = 1;
        return;
    }
    g                                                    = data_ov111_020f1bd8;
    g->e[g->idx].v                                       = func_ov111_020e5d98(1);
    data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].bit = data_ov111_020f1bd8->code[data_ov111_020f1bd8->pc + 3];
    g                                                    = data_ov111_020f1bd8;
    func_ov111_020ea144(1, 1, func_ov111_020e5d98(1), 0, g->code[g->pc + 3], 1);
    data_ov111_020f1bd8->pc += 4;
}
