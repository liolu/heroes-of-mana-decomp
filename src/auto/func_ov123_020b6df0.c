/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020b6da8(void);
void func_ov123_020b6da4(void);
void func_ov123_020b6d48(void);
s32 func_ov123_020b2118(void);
void func_ov123_020cb5ec(s32, s32);
void func_ov123_020b2410(void *);
void func_ov123_020c3658(void);
void func_ov123_020c536c(s32, s32, s32, s32, s32);
void func_ov123_020c36bc(s32);
void func_ov123_020ae090(void);
extern s32 data_ov123_020e4644;
extern u8 data_ov123_020e463c;
extern u8 func_ov123_020b6ac0;
extern u8 func_ov123_020b6b44;

void func_ov123_020b6df0(void) {
    s32 r;
    func_ov123_020b6da8();
    func_ov123_020b6da4();
    func_ov123_020b6d48();
    r = func_ov123_020b2118();
    switch (r) {
        case 0:
            return;
        case 1: {
            s32 v = data_ov123_020e4644;
            if (v == 0) {
                return;
            }
            data_ov123_020e463c = 1;
            func_ov123_020cb5ec(1, v);
            data_ov123_020e4644 = 0;
            func_ov123_020b2410(&func_ov123_020b6ac0);
            break;
        }
        case 2:
            if (data_ov123_020e4644 == 0) {
                return;
            }
            func_ov123_020c3658();
            func_ov123_020c536c(0xC, 1, 1, -1, 0);
            func_ov123_020c36bc(9);
            func_ov123_020ae090();
            func_ov123_020cb5ec(1, data_ov123_020e4644);
            data_ov123_020e4644 = 0;
            func_ov123_020b2410(&func_ov123_020b6b44);
            break;
    }
}
