/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Buf {
    s64 t;
    s32 c[3];
} Buf;
extern u8 data_ov123_020e460c;
extern u8 data_ov123_020e4610;
s8 func_ov123_020ae120(void);
void func_ov123_020c36bc(s32);
void func_ov123_020a5a9c(Buf *);
void func_ov123_020ae0ec(s8);
void func_ov123_020b4718(void);
void func_ov123_020b2410(void (*)());
void func_ov123_020b499c();
void func_ov123_020b49c4(void) {
    Buf buf;
    s8 r = func_ov123_020ae120();
    switch (r) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020a5a9c(&buf);
            if (data_ov123_020e460c != 0 && buf.t == 0) {
                func_ov123_020c36bc(9);
                func_ov123_020ae0ec(-1);
                return;
            }
            func_ov123_020c36bc(6);
            func_ov123_020b4718();
            data_ov123_020e4610 = 1;
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020b499c);
}
