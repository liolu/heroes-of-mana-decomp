#include "m2c.h"
extern void func_ov121_020eeff0(void);
extern void func_ov121_020f07dc(void);
extern u8 data_ov121_020f6d60[];

void func_ov121_020f1490(void) {
    switch (*(u32 *) (data_ov121_020f6d60 + 0xa40)) {
        case 1:
        case 2:
        case 4:
        case 8:
        case 0x10:
        case 0x4000:
        case 0x8000:
        case 0x10000:
        case 0x20000:
        case 0x40000:
        case 0x80000:
        case 0x100000:
        case 0x200000:
            func_ov121_020eeff0();
            break;
        case 0x20:
        case 0x40:
        case 0x80:
        case 0x100:
        case 0x200:
        case 0x400:
        case 0x800:
        case 0x1000:
        case 0x2000:
            func_ov121_020f07dc();
            break;
    }
}
