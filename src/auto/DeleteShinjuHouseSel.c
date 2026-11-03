/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 lo : 9;
    u32 sel : 1;
    u32 rest : 22;
} Flags;

void deleteComObjByComno(void *, s32);
void DeleteHelpInShip(void);
void DeleteDeleteWinInShip(void);
void DeleteShisetuUnitName(void);
extern Flags *data_ov109_020ea340;

void DeleteShinjuHouseSel(void) {
    if (data_ov109_020ea340->sel) {
        data_ov109_020ea340->sel = 0;
        deleteComObjByComno((u8 *) data_ov109_020ea340 + 0x3C, 0xFF68);
        DeleteShisetuUnitName();
        DeleteDeleteWinInShip();
        DeleteHelpInShip();
    }
}
