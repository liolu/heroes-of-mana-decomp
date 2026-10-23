/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct E {
    u32 w0;
    u32 pad0 : 23;
    u32 sel : 4;
    u32 pad1 : 5;
    u8 pad[0x2dc];
    struct {
        s32 pal;
        s32 b;
        s32 c;
    } ent[16];
} E;
void SetExtObjPaletteData(s32, s32, s32, s32);
extern E *data_ov109_020ea340;
void changeUnitListSel(s32 n) {
    s32 s;
    s = data_ov109_020ea340->sel;
    if (s != 0) {
        if (data_ov109_020ea340->ent[s].pal != 0) {
            SetExtObjPaletteData(data_ov109_020ea340->ent[s].pal, (s + 0x2f) << 5, 0x20, 0);
        }
        data_ov109_020ea340->sel = 0;
    }
    if (n != 0) {
        data_ov109_020ea340->sel = n;
    }
}
