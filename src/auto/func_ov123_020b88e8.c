/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 b[25];
} T25;
typedef struct {
    u8 b[22];
} T22;
typedef struct {
    u8 pad[4];
    s32 f4;
    s32 f8;
} G;
void func_ov123_020ae580(void *, void *);
s32 func_ov123_020ae5c8(u8 *);
void func_ov123_020c1d40(void);
void func_ov123_020c1d88(s32);
s32 func_ov123_020c887c(s32, s32, s32);
extern T22 data_ov123_020d7ec4;
extern T25 data_ov123_020d7edc;
extern u8 data_ov123_020dde7c;
extern G *data_ov123_020e4654;
extern u8 func_0200bbc4;

void func_ov123_020b88e8(void) {
    T25 a;
    T22 b;

    a = data_ov123_020d7edc;
    b = data_ov123_020d7ec4;
    func_ov123_020ae580(&data_ov123_020dde7c, &func_0200bbc4);
    data_ov123_020e4654->f4 = func_ov123_020c887c(func_ov123_020ae5c8(a.b), 0, 4);
    func_ov123_020c1d88(data_ov123_020e4654->f4);
    func_ov123_020c1d40();
    data_ov123_020e4654->f8 = func_ov123_020c887c(func_ov123_020ae5c8(b.b), 0, 4);
    *(u16 *) 0x04001008     = (*(u16 *) 0x04001008 & ~3) | 3;
    *(u16 *) 0x0400100A     = (*(u16 *) 0x0400100A & ~3) | 3;
    *(u16 *) 0x04000008     = (*(u16 *) 0x04000008 & ~3) | 3;
    *(u16 *) 0x0400000A     = (*(u16 *) 0x0400000A & ~3) | 2;
    *(u16 *) 0x0400000C     = (*(u16 *) 0x0400000C & ~3) | 3;
    *(u16 *) 0x0400000E     = (*(u16 *) 0x0400000E & ~3) | 2;
}
