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
    u8 pad1[0x6c - 0x18];
    s32 w6c;
    s32 w70;
    s32 w74;
    s32 w78;
    s32 w7c;
    s32 w80;
    s32 w84;
    s32 w88;
    s32 w8c;
    u8 pad2[0xa0 - 0x90];
    s32 wa0;
    s32 wa4;
} SW;
extern SW *data_ov000_02051548;
extern Glob *data_0203673c;

void SetDropItemBySetNo(s32);
void SG_setSisetuFree(void);
void AddCarisumaToParty(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void SetLogicParaNoForShipIn(s32, s32);
void ShipUnitSelCanOrNot(s32);
void UnitSelCanOrNot(s32, s32);

void func_ov073_020d0160(void) {
    data_0203673c->units[data_ov000_02051548->idx].a     = 2;
    data_0203673c->units[data_ov000_02051548->idx].b     = 3;
    data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 8;
    data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 2;
    SetDropItemBySetNo(0x48);
    SG_setSisetuFree();
    AddCarisumaToParty(3, 2);
    AddCarisumaToParty(0xa, 9);
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 0x11);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xb, 0);
    data_ov000_02051548->w7c = 5;
    data_ov000_02051548->w80 = 0x1d;
    data_ov000_02051548->w84 = 5;
    data_ov000_02051548->w88 = 0x1d;
    data_ov000_02051548->w6c = 3;
    data_ov000_02051548->w70 = 0x19;
    data_ov000_02051548->w74 = 5;
    data_ov000_02051548->w78 = 0xe;
    data_ov000_02051548->w8c = data_ov000_02051548->w8c & 0xfff0f3;
}
