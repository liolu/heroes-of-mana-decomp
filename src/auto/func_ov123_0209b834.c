/* compiler: 1.2/sp3 */
/* near start: 3 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern u8 *data_ov123_020e18d4;
extern s32 data_ov123_020e18d8;
extern s32 data_ov123_020e18d0;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Tri;

typedef struct {
    u8 pad[0x34];
    char name[12];
    void *cb1;
    void *cb2;
    u8 pad2[4];
} Loc;

void MI_CpuFill8(void *, s32, s32);
s32 func_ov123_02094630(u8 *);
void func_ov123_0209481c(u8 *, s32, u8 *);
s32 func_ov123_02094640(u8 *);
s32 func_ov123_02094660(u8 *);
void func_ov123_020946d0(u8 *);
u64 func_0200f510(void);
void func_ov123_02094ac8(u8 *, s32);
s32 func_ov123_02099d64(s32);
void MI_CpuCopy8(void *, void *, s32);
void func_02024c44(char *, u8 *);
s32 func_ov123_020997a4(s32, s32, s32);
void func_ov123_020997c4(void);
void func_ov123_02099778(void);
void func_ov123_02095928(void *, s32);

void func_ov123_0209b834(s32 a, s32 b) {
    Loc loc;
    s32 h;
    u64 t;

    MI_CpuFill8(&loc, 0, 0x48);
    data_ov123_020e18d8 = a;
    data_ov123_020e18d0 = b;
    if (func_ov123_02094630(*(u8 **) (data_ov123_020e18d4 + 0x1C)) != 0) {
        u8 *p = *(u8 **) (data_ov123_020e18d4 + 0x1C);
        func_ov123_0209481c(p + 0x10, *(s32 *) (p + 0x24), data_ov123_020e18d4 + 0x248);
    } else {
        if (func_ov123_02094640(data_ov123_020e18d4 + 0x3C) == 0) {
            if (func_ov123_02094660(*(u8 **) (data_ov123_020e18d4 + 0x1C) + 4) != 0) {
                *(Tri *) (data_ov123_020e18d4 + 0x3C) = *(Tri *) (*(u8 **) (data_ov123_020e18d4 + 0x1C) + 4);
            } else {
                func_ov123_020946d0(data_ov123_020e18d4 + 0x3C);
            }
        } else {
            func_ov123_02094ac8(data_ov123_020e18d4 + 0x3C,
                                (s32) ((func_0200f510() * 0x5D588B656C078965ULL + 0x269EC3) >> 32));
        }
        func_ov123_0209481c(data_ov123_020e18d4 + 0x3C, *(s32 *) (data_ov123_020e18d4 + 0xC), data_ov123_020e18d4 + 0x248);
    }
    h = func_ov123_02099d64(*(s32 *) (data_ov123_020e18d4 + 0x10));
    MI_CpuCopy8(*(void **) (data_ov123_020e18d4 + 0x10), &loc, h * 2 + 2);
    func_02024c44(loc.name, &data_ov123_020e18d4[0x251]);
    loc.cb1                               = func_ov123_020997c4;
    loc.cb2                               = func_ov123_02099778;
    h                                     = func_ov123_020997a4(0, 0x1C14, 4);
    *(s32 *) (data_ov123_020e18d4 + 0x24) = h;
    t                                     = func_0200f510();
    *(u64 *) (data_ov123_020e18d4 + 0x28) = t;
    func_ov123_02095928(&loc, h);
}
