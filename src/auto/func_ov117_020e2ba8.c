#include "m2c.h"
typedef struct {
    u16 a : 1;
    u16 b : 1;
    u16 c : 3;
    u16 id : 8;
    u16 d : 3;
} H;
typedef struct {
    u32 act : 1;
    u32 flag : 1;
    u32 r0 : 30;
    u32 pad[3];
    u32 x0 : 22;
    u32 key : 8;
    u32 hi : 1;
    u32 top : 1;
} E;
typedef struct {
    u8 pad[0x2c];
    E *e;
} G;
extern H data_ov117_020f0fc4[];
extern G *data_0203673c;
void func_ov117_020e2ba8(s32 idx) {
    s32 j;
    if (data_ov117_020f0fc4[idx].b) {
        data_ov117_020f0fc4[idx].a = 0;
    }
    for (j = 0; j < 0x80; j++) {
        E *e = &data_0203673c->e[j];
        if (e->act && !e->hi && e->key == data_ov117_020f0fc4[idx].id) {
            e->flag = 0;
        }
    }
}
