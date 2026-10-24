#include "m2c.h"

void BGM_Fade(s32);
void GX_SetBankForBG(s32);
void func_02003734(s32, s32);
void func_0200378c(s32, s32);
void func_020038ac(s32);
void func_02003948(s32, s32);
void func_ov114_020e1500(s32);
void func_ov114_020e1768(void);
void func_ov114_020e1c50(void);
void func_ov114_020e1d1c(void);
void func_ov114_020e251c(void);
void func_ov114_020e2578(s32, s32);
void func_ov114_020e261c(s32, s32);
s32 func_ov114_020e282c(void);
void func_ov114_020e2f58(void);
s32 func_ov114_020e2fe0(void);
void func_ov114_020e3098(void);
void func_ov114_020e4aa8(void);
void func_ov114_020e4af4(void);
void func_ov114_020e4b40(void);
s32 func_ov114_020e51a8(void);

typedef struct {
    u8 pad[0xA0];
    s32 bgm;
} G;
typedef struct {
    u8 pad[0x14];
    u32 f14;
    u8 pad2[0x188];
    s32 v1a0;
} H;
typedef struct {
    u8 pad[0x514];
    u32 flags;
} D;

extern G *data_0203678c;
extern H *data_ov000_02051548;
extern D data_ov114_020e6148;

s32 func_ov114_020e15e4(s32 arg0) {
    s32 r4;
    s32 r5;
    s32 r6;

    data_ov114_020e6148.flags = (data_ov114_020e6148.flags & ~0x200000) | ((u32) (arg0 << 0x1F) >> 0xA);
    r6                        = data_0203678c->bgm;
    if ((r6 == 3) && (r6 != 0x26)) {
        BGM_Fade(1);
        func_02003948(0x26, 0);
        func_020038ac(0x26);
    }
    func_02003734(0x7F, 0xA);
    func_0200378c(0x7F, 0xA);
    func_ov114_020e1c50();
    func_ov114_020e1d1c();
    if (func_ov114_020e2fe0() != 1) {
        return 3;
    }
    if (data_ov000_02051548 != NULL) {
        data_ov000_02051548->f14 = data_ov000_02051548->f14 & ~0x100000;
    }
    func_ov114_020e251c();
    func_ov114_020e1768();
    if (func_ov114_020e51a8() == 0) {
        func_ov114_020e3098();
        func_ov114_020e1500(0);
        return 3;
    }
    func_ov114_020e2f58();
    func_ov114_020e4b40();
    func_ov114_020e4aa8();
    func_ov114_020e4af4();
    func_ov114_020e2578(-0x10, 3);
    r4 = func_ov114_020e282c();
    if (data_ov000_02051548 != NULL) {
        r5 = data_ov000_02051548->v1a0;
    }
    func_ov114_020e261c(-0x10, 3);
    func_ov114_020e3098();
    func_ov114_020e1c50();
    GX_SetBankForBG(1);
    if ((data_0203678c->bgm != r6) && (((u32) (data_ov114_020e6148.flags << 9) >> 0x1F) == 0)) {
        BGM_Fade(1);
        func_02003948(r6, 0);
        func_020038ac(r6);
        BGM_Fade(0);
    }
    if (data_ov000_02051548 != NULL) {
        data_ov000_02051548->v1a0 = r5;
    }
    return r4;
}
