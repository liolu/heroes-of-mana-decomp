/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x2a];
    s16 a;
    u8 pad1[2];
    s16 b;
    u8 pad2[0x36 - 0x30];
    u16 c;
    u8 pad3[0x72 - 0x38];
    s16 base;
} Com;

typedef struct {
    u8 pad[0x78c];
    u8 coms[4];
} G;

extern G *data_ov000_02051548;
Com *SearchComObjByComno(u8 *, s32);

void ChgYesNoButton(s32 mode, s32 off) {
    Com *yes = SearchComObjByComno(data_ov000_02051548->coms, 0xFFA9);
    Com *no  = SearchComObjByComno(data_ov000_02051548->coms, 0xFFAA);
    if (yes != NULL && no != NULL) {
        switch (mode) {
            case 0:
                yes->b = 0;
                yes->a = yes->base + off * 2;
                yes->c = 0x8000;
                no->b  = 0;
                no->a  = no->base + off * 2;
                no->c  = 0x8000;
                break;
            case 1:
                yes->b = 0;
                yes->a = yes->base + off * 2;
                yes->c = 0x8000;
                break;
            case 2:
                no->b = 0;
                no->a = no->base + off * 2;
                no->c = 0x8000;
                break;
        }
    }
}
