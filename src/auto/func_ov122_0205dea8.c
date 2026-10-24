#include "m2c.h"

typedef struct {
    u8 p0[8];
    s32 f8;
    s32 fc;
} A;
typedef struct {
    u8 p0[0xde0];
    u32 flags;
    u8 p1[0x50];
    s32 e34;
} B;
typedef struct {
    u8 p0[0x1a0];
    s32 f1a0;
} C;
typedef struct {
    u8 p0[0x2c];
    u8 *f2c;
} D;

extern void func_ov122_02055abc(void);
extern void func_ov122_02055af0(void);
extern void func_ov122_0205ce60(u32, u32);
extern void func_ov122_0205dafc(s32, s32);
extern s32 func_ov123_020d3080(void);
extern s32 func_ov123_020d332c(void);
extern D *data_0203673c;
extern C *data_ov000_02051548;
extern B data_ov122_02065604;
extern A data_ov122_020664b0;

s32 func_ov122_0205dea8(void) {
    u8 *temp_r0;

    if (data_ov122_020664b0.fc != 0) {
        data_ov122_02065604.flags |= 0x80;
        if (func_ov123_020d3080() == 0) {
            data_ov122_02065604.flags &= ~0x80;
            data_ov122_02065604.e34 = 0x3D;
            func_ov122_0205ce60(0x100000, 0x80000000);
            while (1) {
                func_ov122_02055af0();
            }
        }
        func_ov122_0205ce60(0x200, 0x80000000);
        if (func_ov123_020d332c() == 0) {
            temp_r0                     = data_0203673c->f2c;
            *(u32 *) (temp_r0 + 0x108c) = (*(u32 *) (temp_r0 + 0x108c) & ~0x80000000) | 0x80000000;
        }
        if (data_ov000_02051548 != NULL) {
            data_ov000_02051548->f1a0 = data_ov122_020664b0.f8;
        }
        func_ov122_02055abc();
        func_ov122_0205dafc(3, 3);
        data_ov122_02065604.flags &= ~0x80;
    }
    data_ov122_020664b0.fc = 0;
    return 1;
}
