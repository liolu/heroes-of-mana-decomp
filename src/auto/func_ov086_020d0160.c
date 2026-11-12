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

void func_ov086_020d0160(void) {
    data_0203673c->units[data_ov000_02051548->idx].a     = 5;
    data_0203673c->units[data_ov000_02051548->idx].b     = 1;
    data_0203673c->units[data_ov000_02051548->idx ^ 1].a = 10;
    data_0203673c->units[data_ov000_02051548->idx ^ 1].b = 2;
    SetDropItemBySetNo(0x55);
    SG_setSisetuFree();
    AddCarisumaToParty(6, 5);
    AddCarisumaToParty(8, 7);
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 0x3b);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xb, 0);
    data_ov000_02051548->w6c = 3;
    data_ov000_02051548->w70 = 0x19;
    data_ov000_02051548->w74 = 5;
    data_ov000_02051548->w78 = 7;
}
