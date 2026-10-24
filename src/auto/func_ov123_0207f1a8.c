/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_ov123_020da528[], data_ov123_020da534[], data_ov123_020da53c[], data_ov123_020da544[];
extern u8 data_ov123_020da554[], data_ov123_020da560[], data_ov123_020e0db8[], data_ov123_020da56c[];
extern u8 data_ov123_020da48c[], data_ov123_020da57c[], data_ov123_020da588[], data_ov123_020da378[];
s32 func_02024c28(s8 *);
void func_ov123_0207abc4(s32);
s32 func_ov123_0207ab94(s32, s32);
void func_ov123_0207a9b8(s8 *, s8 *, s32, s32);
void func_ov123_0207e128(void *, u8 *, void *);
void func_ov123_0207e0f0(void *, u8 *, s32);

s32 func_ov123_0207f1a8(u8 **a, u8 *b) {
    u8 *base;
    u32 i;
    u32 n;
    s8 in1[0x1F];
    s8 out1[0x2D];
    s8 in2[0x41];
    s8 out2[0x5F];
    s8 *q;
    u32 n2;
    s8 *q2;
    u32 i2;
    base = *a;
    n    = func_02024c28((s8 *) (base + 0x177));
    func_ov123_0207abc4(0x79707367);
    i = 0;
    if (i < n) {
        q = in1;
        do {
            *q++ = *(s8 *) (base + i + 0x177) ^ (s8) func_ov123_0207ab94(0, 0xFF);
            i++;
        } while (i < n);
    }
    in1[i] = 0;
    func_ov123_0207a9b8(in1, out1, n, 1);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da528);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da534);
    func_ov123_0207e128(a, base + 0x1F4, base + 0x144);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da53c);
    func_ov123_0207e128(a, base + 0x1F4, base + 0x110);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da544);
    func_ov123_0207e128(a, base + 0x1F4, out1);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da554);
    func_ov123_0207e0f0(a, base + 0x1F4, *(s32 *) (base + 0x46C));
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da560);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020e0db8);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da56c);
    func_ov123_0207e0f0(a, base + 0x1F4, *(s32 *) (base + 0x470));
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da48c);
    func_ov123_0207e128(a, base + 0x1F4, base + 0x12F);
    if (*(s8 *) (b + 0x2C2) != 0) {
        n2 = func_02024c28((s8 *) (b + 0x2C2));
        func_ov123_0207abc4(0x79707367);
        i2 = 0;
        if (i2 < n2) {
            q2 = in2;
            do {
                *q2++ = *(s8 *) (b + i2 + 0x2C2) ^ (s8) func_ov123_0207ab94(0, 0xFF);
                i2++;
            } while (i2 < n2);
        }
        in2[i2] = 0;
        func_ov123_0207a9b8(in2, out2, n2, 1);
        func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da57c);
        func_ov123_0207e128(a, base + 0x1F4, out2);
    }
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da588);
    func_ov123_0207e128(a, base + 0x1F4, data_ov123_020da378);
    return 0;
}
