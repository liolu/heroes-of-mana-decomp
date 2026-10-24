#include "m2c.h"

typedef struct {
    u8 pad[0xDD4];
    u32 v;
    u8 pad2[0xDE0 - 0xDD8];
    u32 x : 11;
    u32 f11 : 1;
    u32 y : 20;
} G;

extern void func_ov122_0205982c(void);
extern void func_ov122_02059678(void);
extern void func_ov122_02059450(void);
extern void func_ov122_0205929c(void);
extern void func_ov122_0205a9a0(void);
extern G data_ov122_02065604;

void func_ov122_0205b190(void) {
    switch (data_ov122_02065604.v) {
        case 1:
        case 2:
        case 4:
        case 0x20:
        case 0x40:
        case 0x80:
        case 0x100:
        case 0x200:
        case 0x8000:
        case 0x10000:
        case 0x40000:
        case 0x100000:
        case 0x200000:
        case 0x400000:
        case 0x800000:
        case 0x1000000:
        case 0x10000000:
        case 0x40000000:
            func_ov122_0205982c();
            break;
        case 8:
        case 0x10:
            func_ov122_02059678();
            break;
        case 0x400:
        case 0x800:
        case 0x1000:
        case 0x4000:
        case 0x20000000:
            func_ov122_02059450();
            break;
        case 0x2000000:
        case 0x4000000:
        case 0x8000000:
            if (data_ov122_02065604.f11 != 0) {
                func_ov122_0205982c();
            } else {
                func_ov122_02059450();
            }
            break;
        case 0x2000:
            func_ov122_0205929c();
            break;
        case 0x20000:
        case 0x80000:
            func_ov122_0205a9a0();
            break;
    }
}
