/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Wk {
    u32 p0 : 11;
    u32 f11 : 2;
    u32 q0 : 19;
    u32 f0 : 5;
    u32 q4 : 27;
    u8 pad8[0xC - 8];
    u16 hc;
    u8 pad[0x18 - 0xE];
    void *w18;
    void *w1c[3];
    void *w28;
    void *w2c;
    u8 pad30[0x44 - 0x30];
    void *w44;
    u8 pad48[0x350 - 0x48];
    void *w350[2][2];
} Wk;
typedef struct G1t {
    u8 pad[0x4];
    u32 f4r : 27;
    u32 f4 : 4;
    u32 f4top : 1;
    u8 pad2[0x20 - 8];
    u32 w20;
    u8 pad3[0x1EC - 0x24];
    u32 w1ec;
    u32 w1f0;
} G1t;
typedef struct Ht {
    u8 pad[0x158];
    u32 b0 : 1;
    u32 r : 31;
    u8 pad2[0x608 - 0x15C];
    u32 c0 : 1;
    u32 rc : 31;
} Ht;
extern G1t *data_ov000_02051548;
extern u8 *data_ov000_02051550;
extern Ht *data_ov000_0205154c;
extern Wk *data_ov109_020ea340;
extern s32 data_02036724;
void *func_0200ed38(u32, s32, s32);
void MIi_CpuClear16(s16, void *, s32);
void EndMessageScreenForDS(s32);
void ReleaseTexPaletteTrans(void);
void *ReadShipsFile(s32, s32, s32 *);
s32 func_0200f018(s32, s32);
void func_0200fddc(void);
void ObjWorkInitialize(void);
void DeleteNoAnimeObj(void);
void deleteObjCharDataInVBlank(void);

void SetUpDataInShip(void) {
    s32 i;
    s32 sz;
    s32 r;
    data_ov000_02051548->w20 |= 0x1000;
    data_ov000_02051550[0x455] = 0;
    *(u32 *) 0x4000000 &= ~0x1F00;
    *(u32 *) 0x4001000 &= ~0x1F00;
    *(u16 *) ((u8 *) data_ov000_0205154c + 0x154) = 0;
    data_ov109_020ea340                           = func_0200ed38(0, -1, 0x3E8);
    MIi_CpuClear16(0, data_ov109_020ea340, 0x3E8);
    for (i = 0; i < 2; i++) {
        data_ov109_020ea340->w350[i][0] = func_0200ed38(0, -1, 0x800);
        MIi_CpuClear16(0, data_ov109_020ea340->w350[i][0], 0x800);
    }
    EndMessageScreenForDS(0);
    ReleaseTexPaletteTrans();
    data_ov109_020ea340->w18 = ReadShipsFile(3, 0, &sz);
    for (i = 0; i < 3; i++) {
        data_ov109_020ea340->w1c[i] = ReadShipsFile(3, i + 4, &sz);
    }
    data_ov109_020ea340->w28 = ReadShipsFile(3, 1, &sz);
    data_ov109_020ea340->w2c = ReadShipsFile(3, 2, &sz);
    data_ov109_020ea340->w44 = ReadShipsFile(3, 3, &sz);
    data_ov109_020ea340->hc  = 0xFFFF;
    data_ov109_020ea340->f0  = 0;
    if (data_ov000_02051548->f4 != 0) {
        data_ov109_020ea340->f0 = 0xF;
    }
    r = func_0200f018(0, data_02036724);
    if (r == -1) {
        func_0200fddc();
    }
    ObjWorkInitialize();
    DeleteNoAnimeObj();
    data_ov000_0205154c->b0   = 1;
    data_ov000_0205154c->c0   = 1;
    data_ov000_02051548->w1ec = 0;
    data_ov000_02051548->w1f0 = 0;
    deleteObjCharDataInVBlank();
    data_ov109_020ea340->f11 = 0;
}
