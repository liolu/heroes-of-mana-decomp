/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u16 data_ov123_020e4670;
extern u8 *data_ov123_020e4674;
extern void func_ov123_020c2384(void);
extern void func_ov123_020ae628(void);
extern s32 func_02008ff0(s32, s32);
extern void func_ov123_020bb938(void);
extern void func_ov123_020bc1fc(void);
extern void func_ov123_020c23b4(s32);
extern void func_ov123_020c239c(void);
extern void func_ov123_020bb264(void);
extern void func_ov123_020cb5f8(s32, void *);

void func_ov123_020bb4ac(void *arg) {
    s32 r;

    func_ov123_020c2384();
    func_ov123_020ae628();
    data_ov123_020e4670 += 6;
    r = func_02008ff0(data_ov123_020e4670, 0x1d);
    if (r >= 6) {
        func_ov123_020bb938();
        return;
    }
    data_ov123_020e4670 -= r;
    func_ov123_020bc1fc();
    func_ov123_020c23b4((s32) data_ov123_020e4670 * 55 / 145);
    func_ov123_020c239c();
    func_ov123_020bb264();
    *(s32 *) (data_ov123_020e4674 + 0x38) = 0;
    func_ov123_020cb5f8(0, arg);
}
