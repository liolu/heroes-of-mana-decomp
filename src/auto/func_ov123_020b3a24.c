/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020b3930(void);
void func_ov123_020ae8d8(s32);
void func_ov123_020ae2a4(s32, s32, s32);
void func_ov123_020c37f4(s32);
void func_ov123_020ae668(u16, u16, u16, u16);
void func_ov123_020b2410(void *);
void func_ov123_020b38d4(void);
extern u8 data_ov123_020e4600;
extern u16 data_ov123_020d7e10[];

void func_ov123_020b3a24(void) {
    s32 i;

    func_ov123_020b3930();
    func_ov123_020ae8d8(0);
    func_ov123_020ae2a4(0x2E, -1, 0);
    func_ov123_020c37f4(4);
    i = data_ov123_020e4600;
    func_ov123_020ae668(data_ov123_020d7e10[i * 4], data_ov123_020d7e10[i * 4 + 2], data_ov123_020d7e10[i * 4 + 1],
                        data_ov123_020d7e10[i * 4 + 3]);
    func_ov123_020b2410(func_ov123_020b38d4);
}
