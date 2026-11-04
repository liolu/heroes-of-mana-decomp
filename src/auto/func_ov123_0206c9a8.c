/* compiler: 1.2/sp2p3 */
/* near start: 1 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

u64 func_0200f510(void);
s32 func_ov123_0206cbc4(s32, u32, s32, s32, u8 *, s32);
void func_ov123_02070830(void);
extern s32 (*data_ov123_020df218)(void);

s32 func_ov123_0206c9a8(s32 a, u32 b, s32 c, s32 d, u8 *o) {
    s32 total = 0;
    s32 prev;
    u32 ts;
    u32 t5;
    s32 n;
    s32 flag = 0;

    M2C_FIELD(o, s32 *, 0x34) = 0;
    ts                        = (u32) (func_0200f510() >> 16);
    while (data_ov123_020df218() != 0 && b != 0 && M2C_FIELD(o, u8 *, 8) == 4 &&
           (s32) ((u32) (func_0200f510() >> 16) - ts) < 0x9F) {
        prev = M2C_FIELD(o, s32 *, 0x28);
        func_ov123_0206cbc4(a, b, c, d, o, flag);
        t5 = (u32) (func_0200f510() >> 16);
        do {
            func_ov123_02070830();
            if (data_ov123_020df218() == 0) {
                break;
            }
            if (M2C_FIELD(o, u8 *, 8) != 4) {
                break;
            }
            if (M2C_FIELD(o, s32 *, 0x28) == M2C_FIELD(o, s32 *, 0x30)) {
                break;
            }
            if ((s32) ((u32) (func_0200f510() >> 16) - t5) >= 15) {
                break;
            }
        } while (flag == 0 || M2C_FIELD(o, u16 *, 0x2C) == 0);
        n = M2C_FIELD(o, s32 *, 0x30) - prev;
        total += n;
        if (n != 0) {
            ts = (u32) (func_0200f510() >> 16);
        }
        M2C_FIELD(o, s32 *, 0x28) = M2C_FIELD(o, s32 *, 0x30);
        if (M2C_FIELD(o, u8 *, 8) == 4 && M2C_FIELD(o, u16 *, 0x2C) == 0 && n == 0) {
            if (flag == 0) {
                t5 = (u32) (func_0200f510() >> 16);
                while (data_ov123_020df218() != 0 && (s32) ((u32) (func_0200f510() >> 16) - t5) < 15) {
                    func_ov123_02070830();
                    if (M2C_FIELD(o, u16 *, 0x2C) != 0) {
                        break;
                    }
                }
                if (M2C_FIELD(o, u16 *, 0x2C) == 0) {
                    flag = 1;
                }
            }
        } else {
            flag = 0;
        }
        if ((u32) n < b) {
            a += n;
            b -= n;
        } else {
            n -= b;
            a = c + n;
            b = d - n;
            c = 0;
            d = c;
        }
    }
    return total;
}
