/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct G {
    u8 pad[0x38];
    s32 f38;
    u8 pad3c[5];
    u8 f41;
    u8 pad42[3];
    u8 f45;
    u8 f46;
} G;

extern G *data_ov123_020e4674;
extern u16 data_ov123_020e4670;
extern u8 func_ov123_020bb558[];
extern u8 func_ov123_020bb4ac[];
s32 func_ov123_020c23c0(void);
void func_ov123_020ae628(void);
s32 func_ov123_020c23d4(void);
void func_ov123_020bc1fc(void);
void func_ov123_020c36bc(s32);
s32 func_02008ff0(s32, s32);
void func_ov123_020bb264(void);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);

void func_ov123_020bc654(void) {
    s32 r;
    if (data_ov123_020e4674->f38 != 0) {
        return;
    }
    if (data_ov123_020e4674->f41 != 0) {
        data_ov123_020e4674->f41--;
    }
    switch (func_ov123_020c23c0()) {
        case 1:
            data_ov123_020e4674->f45 = 1;
            return;
        case 2:
            if (data_ov123_020e4674->f41 != 0) {
                return;
            }
            func_ov123_020ae628();
            data_ov123_020e4670 = (func_ov123_020c23d4() * 0x91) / 55;
            func_ov123_020bc1fc();
            data_ov123_020e4674->f41 = 4;
            return;
        case 3:
            data_ov123_020e4674->f45 = 0;
            data_ov123_020e4670      = (func_ov123_020c23d4() * 0x91) / 55;
            func_ov123_020c36bc(0x13);
            func_ov123_020bc1fc();
            r = func_02008ff0(data_ov123_020e4670, 0x1d);
            if (r == 0) {
                func_ov123_020bb264();
                return;
            }
            if (r < 0x10) {
                data_ov123_020e4674->f38 = func_ov123_020cb6ac(0, func_ov123_020bb558, 0, 0x78);
            } else {
                data_ov123_020e4674->f38 = func_ov123_020cb6ac(0, func_ov123_020bb4ac, 0, 0x78);
            }
            return;
        case 4:
            if (data_ov123_020e4670 == 0) {
                if (data_ov123_020e4674->f46 != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                data_ov123_020e4674->f46 = 1;
                return;
            }
            func_ov123_020c36bc(0x13);
            data_ov123_020e4674->f38 = func_ov123_020cb6ac(0, func_ov123_020bb558, 0, 0x78);
            return;
        case 6:
            if (data_ov123_020e4670 == 0x91) {
                if (data_ov123_020e4674->f46 != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                data_ov123_020e4674->f46 = 1;
                return;
            }
            func_ov123_020c36bc(0x13);
            data_ov123_020e4674->f38 = func_ov123_020cb6ac(0, func_ov123_020bb4ac, 0, 0x78);
            return;
        case 5:
        case 7:
            data_ov123_020e4674->f46 = 0;
            break;
    }
}
