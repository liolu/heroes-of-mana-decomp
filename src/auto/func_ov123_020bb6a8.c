/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct R {
    u16 a, b, c, d;
} R;
s32 func_ov123_020ca7c0(void *);
s32 func_02008fb4(s32, s32);
s32 func_ov123_020ca6a0(R *);
extern u8 data_ov123_020d845c;
extern u16 data_ov123_020e4670;
extern R data_ov123_020d7ffc;
extern u8 data_ov123_020d8014[];
extern R data_ov123_020d800c;
extern R data_ov123_020d8004;
extern u8 data_ov123_020d80b4[];

s32 func_ov123_020bb6a8(void) {
    R r;
    u8 *p;
    s32 v;
    s32 i;
    s32 k;
    s32 off;
    if (func_ov123_020ca7c0(&data_ov123_020d845c) == 0) {
        return 14;
    }
    v = func_02008fb4(data_ov123_020e4670, 29);
    r = data_ov123_020d7ffc;
    for (i = 0; i < 4; i++) {
        if (v != 2 && v != 6) {
            if (func_ov123_020ca6a0(&r) != 0) {
                return data_ov123_020d8014[v];
            }
        }
        r.b += 29;
        v++;
    }
    v = func_02008fb4(data_ov123_020e4670, 29);
    for (i = 0; i < 4; i++, v++) {
        if (v == 2) {
            off = i * 29;
            r   = data_ov123_020d800c;
            r.b += off;
            if (func_ov123_020ca6a0(&r) != 0) {
                return 2;
            }
            r = data_ov123_020d8004;
            r.b += off;
            if (func_ov123_020ca6a0(&r) != 0) {
                return 3;
            }
            break;
        }
    }
    v = func_02008fb4(data_ov123_020e4670, 29);
    for (i = 0; i < 4; i++, v++) {
        if (v == 6) {
            off = i * 29;
            r   = data_ov123_020d800c;
            r.b += off;
            if (func_ov123_020ca6a0(&r) != 0) {
                return 7;
            }
            r = data_ov123_020d8004;
            r.b += off;
            if (func_ov123_020ca6a0(&r) != 0) {
                return 8;
            }
            break;
        }
    }
    p = data_ov123_020d80b4;
    for (k = 0; k < 3; k++, p += 8) {
        if (func_ov123_020ca7c0(p) != 0) {
            return k + 11;
        }
    }
    return 14;
}
