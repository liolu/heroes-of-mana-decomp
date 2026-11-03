/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020bb640(s32);
void func_ov123_020c9324(s32, u8, u32 *);
extern u16 data_ov123_020d7ffc;
extern u16 data_ov123_020d8004;
extern u16 data_ov123_020d800c;
extern u8 data_ov123_020d8048[];
extern u8 *data_ov123_020e4674;

typedef struct {
    u32 attr01;
    u16 attr2;
    u16 attr3;
} Oam;

static inline void G2_SetOBJPosition(Oam *oam, s32 x, s32 y) {
    oam->attr01 = (oam->attr01 & ~(0x01FF0000 | 0xFF)) | ((u32) y & 0xFF) | (((u32) x & 0x1FF) << 16);
}

static inline void G2_SetOBJPriority(Oam *oam, s32 prio) {
    oam->attr2 = (u16) ((oam->attr2 & ~0xC00) | (prio << 10));
}

void func_ov123_020bbd54(s32 arg0, s32 arg1, s32 arg2) {
    u16 sp[8];
    u8 t;
    Oam **p;

    sp[0] = data_ov123_020d7ffc;
    sp[1] = data_ov123_020d800c;
    sp[2] = data_ov123_020d800c;
    sp[3] = data_ov123_020d8004;
    sp[4] = data_ov123_020d8004;
    p     = (Oam **) (data_ov123_020e4674 + 0x18) + arg2;
    if ((u32) (arg0 - 1) <= 1U) {
        p = func_ov123_020bb640(arg2) == 2 ? (Oam **) (data_ov123_020e4674 + 0x2c) : (Oam **) (data_ov123_020e4674 + 0x30);
    }
    t = *(u8 *) (arg1 + (arg0 * 3 + (s32) data_ov123_020d8048));
    if (t != 0) {
        func_ov123_020c9324(0, t, (u32 *) *p);
        G2_SetOBJPosition(*p, sp[arg0], 0);
        G2_SetOBJPriority(*p, 3);
        return;
    }
    G2_SetOBJPosition(*p, 0x100, 0);
}
