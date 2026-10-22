/* compiler: 1.2/sp3 */
#include "m2c.h"
extern void func_0200fddc(void);
extern void func_ov123_020c65ac(void);
extern s16 func_ov123_020c6aac(void);
extern void func_ov123_020c6cdc(void);
extern u32 func_ov123_020c6db4(void);
extern u8 *data_ov123_020e470c;
void func_ov123_020c7f6c(void) {
    switch (func_ov123_020c6db4()) {
        case 1:
            func_ov123_020c6cdc();
            break;
        case 7:
            *(s16 *) (data_ov123_020e470c + 0x64A) = func_ov123_020c6aac();
            *(s32 *) (data_ov123_020e470c + 0xA98) = 0;
            *(s8 *) (data_ov123_020e470c + 0xA90)  = 3;
            break;
        case 0:
            *(s32 *) (data_ov123_020e470c + 0xA98) = 0;
            *(s8 *) (data_ov123_020e470c + 0xA90)  = 3;
            break;
        case 9:
            func_ov123_020c65ac();
            break;
        case 3:
            break;
        default:
            func_0200fddc();
            break;
    }
}
