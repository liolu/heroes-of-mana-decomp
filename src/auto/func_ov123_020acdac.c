/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"
void OS_CreateAlarm(void *);
void OS_SetAlarm(void *, s32, s32, void *, s32);
void func_0200e0a4(s32);
void func_0200f8b4(void *);
s32 func_ov123_020736c0(void *);
u32 func_ov123_020a9e9c(void);
s32 func_ov123_020ad070(void);
s32 func_ov123_020ad250(s32, s32, s32);
extern u32 data_ov123_020dd57c;
extern u8 data_ov123_020dd5e0[];
extern s32 data_ov123_020e3040;
extern s32 data_ov123_020e3048;
extern s32 data_ov123_020e3050;
extern s32 data_ov123_020e3054;
extern s32 data_ov123_020e308c;
extern void func_ov123_020ad028(void);
s32 func_ov123_020acdac(void) {
    u8 alarm[0x2C];
    s32 cont;
    s32 res;
    s32 r;
    s32 obj;
    s32 zero;
    cont = 1;
    res  = -2;
    obj  = data_ov123_020e308c + data_ov123_020e3048 * 0xC0;
    if (obj == 0) {
        return 0;
    }
    if (func_ov123_020ad250(obj, 0, 0x30000) == 0) {
        return -2;
    }
    OS_CreateAlarm(alarm);
    OS_SetAlarm(alarm, 0x3FEC42, 0, func_ov123_020ad028, 0x12);
    zero = 0;
    do {
        if (func_ov123_020a9e9c() >= data_ov123_020dd57c) {
            res = -3;
            break;
        }
        if (data_ov123_020e3040 != 0) {
            res = -8;
            break;
        }
        func_0200e0a4(10);
        r = func_ov123_020ad070();
        while (r != 0) {
            switch (r) {
                case 12:
                    cont = zero;
                    res  = 1;
                    break;
                case 13:
                    if (data_ov123_020e3040 != 0) {
                        cont = zero;
                        res  = -8;
                    } else if (func_ov123_020ad250(obj, zero, 0x30000) == 0) {
                        return res;
                    }
                    break;
                case 4:
                case 5:
                case 18:
                case 19:
                    break;
                default:
                    cont = zero;
                    break;
            }
            r = func_ov123_020ad070();
        }
    } while (cont != 0);
    func_0200f8b4(alarm);
    while (func_ov123_020ad070() != 0) {
    }
    if (res > 0) {
        data_ov123_020e3050 = 1;
        if (func_ov123_020736c0(data_ov123_020dd5e0) < 0) {
            res = -2;
        } else {
            data_ov123_020e3054 = 1;
        }
    }
    return res;
}
