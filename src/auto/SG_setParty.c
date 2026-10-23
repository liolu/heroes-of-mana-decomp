/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 pad[0x90];
    s32 lv;
} G;

void AddCarisumaToParty(s32, s32);
void SetUpCarisumaSally(void);
extern G *data_ov000_02051548;

void SG_setParty(void) {
    if (data_ov000_02051548->lv >= 0x19) {
        AddCarisumaToParty(0x3C, 0);
    } else {
        AddCarisumaToParty(1, 0);
    }
    AddCarisumaToParty(2, 1);
    if (data_ov000_02051548->lv >= 2) {
        AddCarisumaToParty(3, 2);
        AddCarisumaToParty(4, 3);
        AddCarisumaToParty(5, 4);
    }
    if (data_ov000_02051548->lv >= 4) {
        AddCarisumaToParty(7, 6);
    }
    if (data_ov000_02051548->lv >= 5) {
        AddCarisumaToParty(0xA, 9);
        AddCarisumaToParty(9, 8);
    }
    if (data_ov000_02051548->lv >= 6) {
        AddCarisumaToParty(0xB, 0xA);
    }
    if (data_ov000_02051548->lv >= 9) {
        AddCarisumaToParty(6, 5);
    }
    if (data_ov000_02051548->lv >= 0xB) {
        AddCarisumaToParty(8, 7);
    }
    SetUpCarisumaSally();
}
