/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200e0a4(s32);
u64 func_0200f510(void);
void func_ov123_0206fb0c(s32);
void func_ov123_0207086c(s32);
extern u8 data_ov123_020df1c8;
extern void (*data_ov123_020df1e8)(void);
extern s32 (*data_ov123_020df218)(void);
extern s32 data_ov123_020df220;

void func_ov123_0206c64c(void) {
    s32 t0;
    data_ov123_020df1e8();
    if (data_ov123_020df220 == 0) {
        return;
    }
    func_ov123_0206fb0c(data_ov123_020df220);
    func_0200e0a4(0x64);
    func_ov123_0206fb0c(data_ov123_020df220);
    t0 = (s32) (func_0200f510() >> 16);
    while (data_ov123_020df218() != 0 && (s32) (func_0200f510() >> 16) - t0 < 0x17) {
        if (data_ov123_020df1c8 != 0) {
            func_ov123_0207086c(4);
            return;
        }
        func_0200e0a4(0x64);
    }
}
