#include "m2c.h"
extern s32 data_ov121_020f77e4[];
extern u8 data_ov121_020f6d60[];

s32 func_ov121_020eccec(s32 a) {
    if (data_ov121_020f77e4[1] == 0) {
        return 0;
    }
    if (a == 0) {
        switch (*(u32 *) (data_ov121_020f6d60 + 0xa40)) {
            case 0x1:
            case 0x20:
            case 0x40:
            case 0x80:
            case 0x100:
            case 0x200:
            case 0x400:
            case 0x800:
            case 0x1000:
            case 0x2000:
            case 0x4000:
            case 0x8000:
            case 0x20000:
            case 0x40000:
            case 0x100000:
            case 0x200000:
                data_ov121_020f77e4[1] = 0;
                return 0xe;
        }
    } else {
        switch (*(u32 *) (data_ov121_020f6d60 + 0xa44)) {
            case 0:
            case 1:
            case 2:
            case 3:
                data_ov121_020f77e4[1] = 0;
                return 0xe;
        }
    }
    return 0;
}
