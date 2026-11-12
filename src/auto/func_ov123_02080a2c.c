/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020da7d8[];
extern u8 data_ov123_020da7dc[];
extern u8 data_ov123_020da858[];
extern u8 data_ov123_020da88c[];
extern u8 data_ov123_020da890[];
extern u8 data_ov123_020da894[];
extern u8 data_ov123_020da898[];
extern u8 data_ov123_020da8a0[];
extern u8 data_ov123_020da8e8[];
extern u8 data_ov123_020da8f0[];
extern u8 data_ov123_020da8f8[];
extern u8 data_ov123_020da900[];
extern u8 data_ov123_020da908[];
extern u8 data_ov123_020da910[];
extern u8 data_ov123_020da918[];
extern u8 data_ov123_020da920[];
extern u8 data_ov123_020da934[];
extern u8 data_ov123_020da944[];
extern u8 data_ov123_020da954[];
extern u8 data_ov123_020da960[];
extern u8 data_ov123_020da96c[];
extern u8 data_ov123_020da97c[];
extern u8 data_ov123_020da98c[];
extern u8 data_ov123_020da99c[];
extern u8 data_ov123_020da9b0[];

void func_0202373c(u8 *, u8 *, s32);
s32 func_ov123_02080f44(void *, u8 *, u8 *);
s32 func_ov123_02080f04(void *, u8 *, u8 *);
void func_ov123_02086078(void *, u8 *);

s32 func_ov123_02080a2c(void *o, s32 id, s32 val) {
    u8 buf[16];
    s32 r;
    switch (id) {
        case 1800:
            if (val < 0) {
                func_ov123_02086078(o, data_ov123_020da920);
                return 2;
            }
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da858, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1803:
            switch (val) {
                case 0x500:
                    r = func_ov123_02080f44(o, data_ov123_020da898, data_ov123_020da88c);
                    if (r != 0) {
                        return r;
                    }
                    break;
                case 0x501:
                    r = func_ov123_02080f44(o, data_ov123_020da898, data_ov123_020da890);
                    if (r != 0) {
                        return r;
                    }
                    break;
                case 0x502:
                    r = func_ov123_02080f44(o, data_ov123_020da898, data_ov123_020da894);
                    if (r != 0) {
                        return r;
                    }
                    break;
                default:
                    func_ov123_02086078(o, data_ov123_020da934);
                    return 2;
            }
            break;
        case 1798:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da8a0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1804:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f04(o, data_ov123_020da944, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1805:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f04(o, data_ov123_020da954, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1806:
            func_0202373c(buf, data_ov123_020da7d8, val / 16);
            r = func_ov123_02080f04(o, data_ov123_020da960, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1808:
            func_0202373c(buf, data_ov123_020da7d8, val / 4);
            r = func_ov123_02080f04(o, data_ov123_020da96c, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1810:
            func_0202373c(buf, data_ov123_020da7d8, val / 4);
            r = func_ov123_02080f04(o, data_ov123_020da97c, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1811:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f04(o, data_ov123_020da98c, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1812:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f04(o, data_ov123_020da99c, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1813:
            if (val != 0) {
                val = 1;
            }
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f04(o, data_ov123_020da9b0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1816:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da8e8, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1817:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da8f0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1818:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da8f8, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1819:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da900, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1820:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da908, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1821:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da910, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1822:
            func_0202373c(buf, data_ov123_020da7d8, val);
            r = func_ov123_02080f44(o, data_ov123_020da918, buf);
            if (r != 0) {
                return r;
            }
            break;
        default:
            func_ov123_02086078(o, data_ov123_020da7dc);
            return 2;
    }
    return 0;
}
