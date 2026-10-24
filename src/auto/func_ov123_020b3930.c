/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 b[22];
} B;
void func_ov123_020ae580(void *, void *);
s32 func_ov123_020ae5c8(void *);
s32 func_ov123_020c887c(s32, s32, s32);
extern void GX_LoadBGPltt(void);
extern void func_0200bb64(void);
extern void func_0200be04(void);
extern B data_ov123_020d7e20;
extern u8 data_ov123_020ddc70;
extern u8 data_ov123_020ddc88;
extern u8 data_ov123_020ddca0;
extern s32 data_ov123_020e4604;

void func_ov123_020b3930(void) {
    B sp0;
    sp0 = data_ov123_020d7e20;
    func_ov123_020ae580(&data_ov123_020ddc70, func_0200be04);
    func_ov123_020ae580(&data_ov123_020ddc88, GX_LoadBGPltt);
    func_ov123_020ae580(&data_ov123_020ddca0, func_0200bb64);
    data_ov123_020e4604 = func_ov123_020c887c(func_ov123_020ae5c8(&sp0), 0, 4);
    *(u16 *) 0x04001008 = (*(u16 *) 0x04001008 & ~3) | 3;
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & ~3) | 3;
    *(u16 *) 0x0400000A = (*(u16 *) 0x0400000A & ~3) | 3;
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | 3;
}
