/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u16 data_ov123_020e4670;
extern u8 *data_ov123_020e4674;
void func_ov123_020c2384(void);
void func_ov123_020ae628(void);
s32 func_02008ff0(s32 a, s32 b);
void func_ov123_020bc1fc(void);
void func_ov123_020bb938(void);
void func_ov123_020c23b4(s32 a);
void func_ov123_020c239c(void);
void func_ov123_020bb264(void);
void func_ov123_020cb5f8(s32 a, void *b);

void func_ov123_020bb558(void *arg0) {
    s32 r5;
    s32 t;

    func_ov123_020c2384();
    func_ov123_020ae628();
    if (data_ov123_020e4670 > 6) {
        data_ov123_020e4670 -= 6;
    } else {
        data_ov123_020e4670 = 0;
    }
    r5 = func_02008ff0(data_ov123_020e4670, 0x1d);
    if (r5 == 0x17) {
        func_ov123_020bc1fc();
        return;
    }
    if (r5 > 0x17) {
        data_ov123_020e4670 = data_ov123_020e4670 + (0x1d - r5);
        r5                  = 0;
    }
    func_ov123_020bb938();
    if (r5 != 0) {
        return;
    }
    t = (s32) (data_ov123_020e4670 * 0x37);
    func_ov123_020c23b4(t / 145);
    func_ov123_020c239c();
    func_ov123_020bb264();
    *(s32 *) (data_ov123_020e4674 + 0x38) = 0;
    func_ov123_020cb5f8(0, arg0);
}
