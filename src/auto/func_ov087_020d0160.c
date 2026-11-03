#include "m2c.h"

void SetDropItemBySetNo(s32);
void SG_setSisetuFree(void);
void AddCarisumaToParty(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void ShipUnitSelCanOrNot(s32);
void UnitSelCanOrNot(s32, s32);
extern u8 *data_ov000_02051548;
extern u8 *data_0203673c;

void func_ov087_020d0160(void) {
    if (((*(u32 *) (data_ov000_02051548 + 0xD0) << 26) >> 31) != 0) {
        *(s32 *) (data_ov000_02051548 + 0x90) = 0x1A;
    }
    *(u32 *) (*(s32 *) (data_0203673c + 0x28) + ((*(u32 *) (data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0 + 0x210) =
        (*(u32 *) (*(s32 *) (data_0203673c + 0x28) + ((*(u32 *) (data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0 + 0x210) &
         ~0x3FFF) |
        1;
    *(u32 *) (*(s32 *) (data_0203673c + 0x28) + ((*(u32 *) (data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0 + 0x210) =
        (*(u32 *) (*(s32 *) (data_0203673c + 0x28) + ((*(u32 *) (data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0 + 0x210) &
         0xF0003FFF) |
        0x2C000;
    SetDropItemBySetNo(0x56);
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
    SetLogicNoForShipIn(1, 0);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(11, 0);
    *(s32 *) (data_ov000_02051548 + 0x7C) = 0;
    *(s32 *) (data_ov000_02051548 + 0x80) = 0x27;
    *(s32 *) (data_ov000_02051548 + 0x84) = 5;
    *(s32 *) (data_ov000_02051548 + 0x88) = 0x1D;
}
