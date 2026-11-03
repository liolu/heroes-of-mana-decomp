/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 *data_ov123_020db5f4;
extern u8 data_ov123_020db5f8[];
s32 func_ov123_0208c100(u8 *, s32);                 /* extern */
s32 func_ov123_0207af34(s32, s32);                  /* extern */
s32 func_ov123_0207b3e0(s32);                       /* extern */
s32 func_ov123_020996a0(u8 *);                      /* extern */

void func_ov123_0208d444(u8 *arg0) {
    u8 *r4;

    r4 = arg0;
    if (arg0 == NULL) {
        r4 = data_ov123_020db5f4;
    }
    if (*(s32 *) (r4 + 0xBC) != 0) {
        func_ov123_0208c100(r4, 2);
    }
    if (*(s32 *) r4 != -1) {
        if (*(s32 *) (r4 + 0xC4) != 0) {
            func_ov123_0207af34(*(s32 *) r4, *(s32 *) (r4 + 0xC4));
        }
    }
    *(s32 *) r4          = -1;
    *(s32 *) (r4 + 0xAC) = 0;
    if (*(s32 *) (r4 + 0xC4) != 0) {
        func_ov123_0207b3e0(*(s32 *) (r4 + 0xC4));
    }
    if ((u8 *) r4 == data_ov123_020db5f8) {
        return;
    }
    func_ov123_020996a0(r4);
}
