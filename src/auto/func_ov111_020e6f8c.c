#include "m2c.h"

typedef struct S0 {
    s32 pad[10];
    u8 *p28;
} S0;
typedef struct G {
    S0 *s;
    s32 pad[6];
    s32 a1c;
    s32 a20;
} G;
extern G data_ov111_020f1bd8;
extern u8 data_ov111_020f0298[];
extern u8 data_ov111_020f1298[];
extern u8 data_ov111_020f0358[];
extern u8 data_ov111_020f0b78[];
void func_ov111_020e9cb8(void *);

void func_ov111_020e6f8c(void) {
    u8 t = ((u8 *) data_ov111_020f1bd8.s->p28)[*(u16 *) ((u8 *) data_ov111_020f1bd8.s + 0x50C) + 1];
    switch (t) {
        case 0:
            data_ov111_020f1bd8.a1c                = 0;
            *(s32 *) (data_ov111_020f0298 + 0x8C4) = 0;
            *(s32 *) (data_ov111_020f0298 + 0x8C8) = 0;
            data_ov111_020f1bd8.a20                = 0;
            *(s32 *) (data_ov111_020f1298 + 0xE4)  = 0;
            *(s32 *) (data_ov111_020f1298 + 0xE8)  = 0;
            break;
        case 1:
            *(s32 *) (data_ov111_020f0298 + 0x8D0) = data_ov111_020f1bd8.a1c;
            func_ov111_020e9cb8(data_ov111_020f0358);
            *(s32 *) (data_ov111_020f0298 + 0x8D4) = 0;
            *(s32 *) (data_ov111_020f1298 + 0xF0)  = data_ov111_020f1bd8.a20;
            func_ov111_020e9cb8(data_ov111_020f0b78);
            *(s32 *) (data_ov111_020f1298 + 0xF4) = 0;
            break;
    }
    *(u16 *) ((u8 *) data_ov111_020f1bd8.s + 0x50C) += 2;
}
