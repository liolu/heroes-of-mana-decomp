/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x1d];
    u8 f1d;
} G;
extern G *data_ov123_020e4694;
extern u8 data_ov123_020e4690;
extern s8 data_ov123_020d8108[];
extern void func_ov123_020b316c(void);
extern void func_ov123_020bee9c(void);
extern void func_ov123_020bf5ac(void);
s8 func_ov123_020ae120(void);
u32 func_ov123_020b2370(void);
void func_ov123_020c36bc(s32);
void func_ov123_020ae090(void);
void func_ov123_020b2410(void (*)(void));
u8 func_ov123_020c317c(s32);
void func_ov123_020ae0ec(s8);
u8 func_ov123_020b2388(void);
void func_ov123_020c536c(s32, s32, s32, s32, s32);
void func_ov123_020bf014(void);
void func_ov123_020c3094(s32);
void func_ov123_020bed88(void);
void func_ov123_020bf5f0(void) {
    u32 v;
    s32 r4;
    switch (func_ov123_020ae120()) {
        case 0:
            switch (func_ov123_020b2370()) {
                case 0:
                    func_ov123_020c36bc(7);
                    data_ov123_020e4694->f1d = 2;
                    break;
                case 1:
                    func_ov123_020ae090();
                    func_ov123_020b2410(func_ov123_020b316c);
                    return;
            }
            break;
        case 1:
            data_ov123_020e4694->f1d = 1;
            v                        = data_ov123_020e4690;
            if (v >= 4) {
                r4 = v - 4;
                if (func_ov123_020c317c(r4) == 0xff) {
                    func_ov123_020c36bc(9);
                    func_ov123_020ae0ec(-1);
                    return;
                }
                func_ov123_020c36bc(6);
                func_ov123_020c536c(0x46, 0, 1, data_ov123_020d8108[func_ov123_020b2388()], r4 + 1);
                func_ov123_020bf014();
                func_ov123_020ae090();
                func_ov123_020b2410(func_ov123_020bee9c);
                return;
            }
            if (v <= 2) {
                func_ov123_020c3094(v);
            }
            func_ov123_020c36bc(6);
            func_ov123_020bed88();
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020bf5ac);
}
