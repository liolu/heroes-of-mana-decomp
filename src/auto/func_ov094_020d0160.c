#include "m2c.h"

typedef struct {
    u8 pad[0x210];
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
    u8 pad2[0x2D0 - 0x214];
} Ent;

typedef struct {
    u8 pad[0x28];
    Ent *ents;
} W;

typedef struct {
    u8 pad0[0x14];
    u32 p0 : 8;
    u32 sel : 4;
    u32 p1 : 20;
    u8 pad1[0x6C - 0x18];
    s32 f6c;
    s32 f70;
    s32 f74;
    s32 f78;
    u8 pad2[0x90 - 0x7C];
    s32 f90;
    u8 pad3[0xD0 - 0x94];
    u32 q0 : 5;
    u32 b5 : 1;
    u32 q1 : 26;
} G;

extern G *data_ov000_02051548;
extern W *data_0203673c;

void SetDropItemBySetNo(s32);
void SG_setSisetuFree(void);
void AddCarisumaToParty(s32, s32);
void SetLogicNoForShipIn(s32, s32);
s32 CalRnd(void);
void SetLogicParaNoForShipIn(s32, s32);
void ShipUnitSelCanOrNot(s32);
void UnitSelCanOrNot(s32, s32);

void func_ov094_020d0160(void) {
    if (data_ov000_02051548->b5 != 0) {
        data_ov000_02051548->f90 = 0x1A;
    }
    data_0203673c->ents[data_ov000_02051548->sel].lo  = 1;
    data_0203673c->ents[data_ov000_02051548->sel].mid = 0xB;
    SetDropItemBySetNo(0x5D);
    SG_setSisetuFree();
    AddCarisumaToParty(3, 2);
    AddCarisumaToParty(4, 3);
    AddCarisumaToParty(5, 4);
    AddCarisumaToParty(6, 5);
    AddCarisumaToParty(7, 6);
    AddCarisumaToParty(8, 7);
    AddCarisumaToParty(9, 8);
    AddCarisumaToParty(10, 9);
    AddCarisumaToParty(11, 10);
    SetLogicNoForShipIn(1, 1);
    switch (CalRnd() % 4) {
        case 0:
            SetLogicParaNoForShipIn(1, 0x2B);
            break;
        case 1:
            SetLogicParaNoForShipIn(1, 0x2E);
            break;
        case 2:
            SetLogicParaNoForShipIn(1, 0x31);
            break;
        case 3:
            SetLogicParaNoForShipIn(1, 0x34);
            break;
        default:
            SetLogicParaNoForShipIn(1, 0x2B);
            break;
    }
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xB, 0);
    data_ov000_02051548->f6c = 3;
    data_ov000_02051548->f70 = 0x19;
    data_ov000_02051548->f74 = 5;
    data_ov000_02051548->f78 = 0xE;
}
