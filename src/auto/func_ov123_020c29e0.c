/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 WM_GetAllowedChannel();                         /* extern */
M2C_UNK func_ov123_020ca49c(s32 *);                 /* extern */
extern s32 data_ov123_020e46cc;

void func_ov123_020c29e0(void) {
    if (data_ov123_020e46cc == 0) {
        return;
    }
    do {

    } while (WM_GetAllowedChannel() != 0x8000);
    func_ov123_020ca49c(&data_ov123_020e46cc);
}
