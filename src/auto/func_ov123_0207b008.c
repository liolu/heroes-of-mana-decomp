/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020d9c18[];
extern u8 data_ov123_020e0e50[];
extern u8 data_ov123_020e0e58[];
extern u8 data_ov123_020e0e68[];
extern u8 data_ov123_020e0e7c[];
s32 func_ov123_02073078(void);
void func_ov123_02073574(s32, void *);

s32 func_ov123_0207b008(void) {
    *(u8 **) (data_ov123_020e0e58 + 0x0) = data_ov123_020d9c18;
    *(u8 **) (data_ov123_020e0e58 + 0x4) = data_ov123_020e0e50;
    *(u16 *) (data_ov123_020e0e58 + 0x8) = 2;
    *(u16 *) (data_ov123_020e0e58 + 0xa) = 0;
    *(u8 **) (data_ov123_020e0e58 + 0xc) = data_ov123_020e0e7c;
    *(s32 *) (data_ov123_020e0e68 + 0x0) = 0;
    func_ov123_02073574(func_ov123_02073078(), data_ov123_020e0e68);
    if (*(s32 *) data_ov123_020e0e68 == 0) {
        return 0;
    }
    *(u8 **) (data_ov123_020e0e7c + 0x0) = data_ov123_020e0e68;
    *(u16 *) (data_ov123_020e0e58 + 0xa) = 4;
    *(s32 *) (data_ov123_020e0e7c + 0x4) = 0;
    return (s32) data_ov123_020e0e58;
}
