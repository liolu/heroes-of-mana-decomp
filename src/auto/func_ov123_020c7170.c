/* compiler: 1.2/sp3 */
/* near start: 5 diffs with profile "1.2/sp3" */
#include "m2c.h"
s32 WM_StartDataSharing(void *, s32, s32, s32, s32);
s32 func_ov123_020c7128(void);
void func_ov123_020c7718();
void func_ov123_020c7738(s32);
extern u8 data_ov123_020de618;
extern u8 data_ov123_020de660;
extern void (*data_ov123_020e4704)();
extern u8 *data_ov123_020e4708;

void func_ov123_020c7170(u16 *arg0) {
    s32 st;
    s32 sub;
    u16 t;
    u16 v;

    t = arg0[1];
    if (t != 0) {
        func_ov123_020c7718(t);
        func_ov123_020c7738(9);
        return;
    }
    v = arg0[2];
    switch (v - 0xA) {
        case 0:
            st = *(s32 *) (data_ov123_020e4708 + 0x44);
            if (st == 2) {
                sub = *(s32 *) (data_ov123_020e4708 + 0x40);
                if (sub == 4) {
                    if (func_ov123_020c7128() != 0) {
                        return;
                    }
                    if (data_ov123_020e4704 != NULL) {
                        data_ov123_020e4704(0x08000000, &data_ov123_020de660);
                    }
                    func_ov123_020c7738(9);
                    return;
                }
                if (sub == 6) {
                    return;
                }
            } else if (st == 4) {
                if (WM_StartDataSharing(data_ov123_020e4708 + 0x13E0, 0xD, 7, 0x44, 1) != 0) {
                    func_ov123_020c7718();
                    func_ov123_020c7738(9);
                    return;
                }
                func_ov123_020c7738(5);
                return;
            }
            func_ov123_020c7738(4);
            return;
        default:
        case 2:
        case 3:
            if (data_ov123_020e4704 == NULL) {
                return;
            }
            data_ov123_020e4704(0x08000000, &data_ov123_020de618, v);
        case 1:
            return;
    }
}
