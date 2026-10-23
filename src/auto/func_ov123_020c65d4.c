/* compiler: 1.2/sp3 */
#include "m2c.h"
u32 WM_StepDataSharing(void *, u16 *, void *);
void func_ov123_020c7718(s32);
extern u8 *data_ov123_020e4708;
extern void (*data_ov123_020e4704)(s32, char *);
extern char data_ov123_020de538[];
extern char data_ov123_020de568[];
s32 func_ov123_020c65d4(u16 *a) {
    u32 r;
    r = WM_StepDataSharing(data_ov123_020e4708 + 0x13e0, a, data_ov123_020e4708 + 0x1c00);
    if (r == 7) {
        if (data_ov123_020e4704 != 0) {
            data_ov123_020e4704(0x8000000, data_ov123_020de538);
        }
        return 0;
    }
    if (r == 5) {
        if (data_ov123_020e4704 != 0) {
            data_ov123_020e4704(0x8000000, data_ov123_020de568);
        }
        func_ov123_020c7718(r);
        return 0;
    }
    if (r == 0) {
        return 1;
    }
    func_ov123_020c7718(r);
    return 0;
}
