/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void AddCarisumaToParty(s32, s32);
void Routine_SetEvPosMode(s32);
void SetUpCarisumaSally(void);

void TG_setPartyBeforeWorldmap(s32 lv) {
    if (lv >= 0x19) {
        AddCarisumaToParty(0x3C, 0);
    } else {
        AddCarisumaToParty(1, 0);
    }
    AddCarisumaToParty(2, 1);
    if (lv >= 2) {
        AddCarisumaToParty(3, 2);
        AddCarisumaToParty(4, 3);
        AddCarisumaToParty(5, 4);
    }
    if (lv >= 9) {
        AddCarisumaToParty(6, 5);
    }
    if (lv >= 4) {
        AddCarisumaToParty(7, 6);
    }
    if (lv >= 0xB) {
        AddCarisumaToParty(8, 7);
    }
    if (lv >= 5) {
        AddCarisumaToParty(9, 8);
        AddCarisumaToParty(0xA, 9);
    }
    if (lv >= 6) {
        AddCarisumaToParty(0xB, 0xA);
    }
    SetUpCarisumaSally();
    Routine_SetEvPosMode(0);
}
