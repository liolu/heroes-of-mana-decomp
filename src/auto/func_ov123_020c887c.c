#include "m2c.h"
typedef struct {
    u8 pad[0x24];
    u32 start;
    u32 end;
    u8 pad2[0x1C];
} F;
s32 FS_OpenFile(F *, s32);
void MI_UncompressLZ8(u32 *, u32 *);
void func_0200fddc(void);
void func_02013190(F *);
s32 func_020134b8(F *);
void func_0201360c(F *, u32 *, u32);
s32 func_ov123_020c87d4(s32, void *, s32);
void func_ov123_020c9410(s32);
void func_ov123_020ca49c(u32 **);
u32 *func_ov123_020ca510(u32, s32);
extern u8 data_ov123_020de6f4;
extern u8 *data_ov123_020e4710;

u32 *func_ov123_020c887c(s32 arg0, u32 *arg1, s32 arg2) {
    F sp4;
    u32 *sp0;
    s32 r6;
    u32 *r0;
    u32 r7;
    u32 r0b;

    func_ov123_020c9410(*(s32 *) (data_ov123_020e4710 + 0x84));
    func_02013190(&sp4);
    if (FS_OpenFile(&sp4, arg0) == 0) {
        func_0200fddc();
    }
    r7 = sp4.end - sp4.start;
    if (arg1 != NULL) {
        *arg1 = r7;
    }
    if (func_ov123_020c87d4(arg0, &data_ov123_020de6f4, 2) != 0) {
        r6 = -4;
    } else {
        r6 = arg2;
    }
    sp0 = func_ov123_020ca510(r7, r6);
    func_0201360c(&sp4, sp0, r7);
    func_020134b8(&sp4);
    if (r6 > 0) {
        return sp0;
    }
    r0b = *sp0 >> 8;
    if (arg1 != NULL) {
        *arg1 = r0b;
    }
    r0 = func_ov123_020ca510(r0b, arg2);
    MI_UncompressLZ8(sp0, r0);
    func_ov123_020ca49c(&sp0);
    return r0;
}
