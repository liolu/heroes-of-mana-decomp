#include "m2c.h"

typedef struct {
    u8 pad0[0x210];
    u32 a : 14;
    u32 b : 14;
    u32 c : 4;
    u8 pad1[0x2d0 - 0x214];
} Unit;
typedef struct {
    u8 pad0[0x28];
    Unit *units;
} Glob;
typedef struct {
    u8 pad0[0x14];
    u32 lo : 8;
    u32 idx : 4;
    u32 hi : 20;
    u8 pad1[0x90 - 0x18];
    s32 w90;
    u8 pad2[0xd0 - 0x94];
    u32 f0 : 5;
    u32 f5 : 1;
    u32 f6 : 26;
} SW;
extern SW *data_ov000_02051548;
extern Glob *data_0203673c;

s32 GetGameLevelMode(void);
void SetDropItemBySetNo(s32);
void SetShisetuLevel(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void SetLogicParaNoForShipIn(s32, s32);
void SetLogicNoForCreateUnit(s32, s32, s32, s32);

void func_ov021_020d01b4(void) {
    switch (GetGameLevelMode()) {
        case 0:
            data_0203673c->units[data_ov000_02051548->idx].a     = 1;
            data_0203673c->units[data_ov000_02051548->idx].b     = 8;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 8;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 60;
            SetDropItemBySetNo(0x10);
            break;
        case 1:
            data_0203673c->units[data_ov000_02051548->idx].a     = 1;
            data_0203673c->units[data_ov000_02051548->idx].b     = 4;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 10;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 120;
            SetDropItemBySetNo(0x2a);
            break;
        case 2:
            data_0203673c->units[data_ov000_02051548->idx].a     = 1;
            data_0203673c->units[data_ov000_02051548->idx].b     = 2;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 16;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 240;
            break;
        case 3:
            data_0203673c->units[data_ov000_02051548->idx].a     = 1;
            data_0203673c->units[data_ov000_02051548->idx].b     = 0;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 16;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 480;
            break;
        default:
            data_0203673c->units[data_ov000_02051548->idx].a     = 1;
            data_0203673c->units[data_ov000_02051548->idx].b     = 8;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 8;
            data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 60;
            break;
    }
    SetShisetuLevel(0, 4);
    SetShisetuLevel(1, 4);
    SetShisetuLevel(2, 3);
    SetShisetuLevel(3, 3);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 1);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 3);
    SetShisetuLevel(12, 1);
    SetShisetuLevel(10, 1);
    SetShisetuLevel(15, 1);
    SetShisetuLevel(8, 1);
    SetShisetuLevel(11, 1);
    SetShisetuLevel(13, 0);
    SetShisetuLevel(14, 0);
    SetShisetuLevel(9, 0);
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 5);
    SetLogicNoForCreateUnit(1, 1, 1, 0x31);
    SetLogicNoForCreateUnit(1, 3, 1, 0x31);
    SetLogicNoForCreateUnit(1, 6, 1, 0x31);
    if (data_ov000_02051548->f5 != 0) {
        data_ov000_02051548->w90 = 0xF;
    }
}
