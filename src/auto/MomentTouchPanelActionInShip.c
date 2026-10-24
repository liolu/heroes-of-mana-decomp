/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    struct {
        u32 p : 2;
        u32 f2 : 1;
        u32 rest : 29;
    } w0;
    struct {
        u32 p : 10;
        u32 k : 5;
        u32 rest : 17;
    } w4;
    u8 pad8[4];
    u16 h0c;
    u8 pad0e[2];
    u16 h10;
    u8 pad12[0x1f];
    u8 b31;
    u8 b32;
    u8 b33;
    u8 b34;
    u8 pad35[7];
    s32 f3c;
} Obj;
typedef struct {
    u8 pad[0x28];
    s16 x;
    s16 y;
} Cur;
typedef struct {
    u8 pad[8];
    struct {
        u8 pad[0x72];
        s16 h72;
    } *p8;
} T3;

extern Obj *data_ov109_020ea340;
extern Cur *data_ov000_0205154c;
extern T3 data_ov003_020b6430;

u32 getComIcon(s32, s32, s32);
void PutOffButton(void);

s32 MomentTouchPanelActionInShip(void) {
    s32 id;
    Obj *o;

    id = getComIcon(data_ov109_020ea340->f3c, data_ov000_0205154c->x, data_ov000_0205154c->y);
    if ((u32) id >= 0xff09 && (u32) id <= 0xff09 + 0x11) {
        if (data_ov109_020ea340->w0.f2 != 0) {
            data_ov109_020ea340->w4.k = 1;
        }
        o = data_ov109_020ea340;
        if (o->b31 != id - 0xff0a) {
            o->h0c = o->b31 + 0xff0a;
            PutOffButton();
        }
    } else if ((u32) id >= 0xff1b && (u32) id <= 0xff1b + 9) {
        if (data_ov109_020ea340->w0.f2 != 0) {
            data_ov109_020ea340->w4.k = 7;
        }
        o = data_ov109_020ea340;
        if (o->b32 != id - 0xff1c) {
            o->h0c = o->b32 + 0xff1c;
        }
    } else if ((u32) id >= 0xff25 && (u32) id <= 0xff25 + 10) {
        if (data_ov109_020ea340->w0.f2 != 0) {
            data_ov109_020ea340->w4.k = 10;
        }
        o = data_ov109_020ea340;
        if (o->b34 != id - 0xff26) {
            if ((data_ov003_020b6430.p8->h72 - 0x50) % 3 != 2) {
                o->h0c = o->b34 + 0xff26;
                PutOffButton();
            }
        }
    } else {
        switch (id) {
            case 0xff06:
                if (data_ov109_020ea340->w0.f2 != 0) {
                    data_ov109_020ea340->w4.k = 2;
                    data_ov109_020ea340->h10  = 0x14;
                }
                break;
            case 0xff07:
                if (data_ov109_020ea340->w0.f2 != 0) {
                    data_ov109_020ea340->w4.k = 3;
                    data_ov109_020ea340->h10  = 0x14;
                }
                break;
            case 0xff6f:
            case 0xff70:
                data_ov109_020ea340->w4.k = 4;
                break;
            case 0xff01:
                data_ov109_020ea340->w4.k = 5;
                break;
            case 0xff6a:
                data_ov109_020ea340->w4.k = 9;
                break;
            case 0xff68:
                data_ov109_020ea340->w4.k = 8;
                break;
            case 0xff34:
            case 0xff35:
                data_ov109_020ea340->w4.k = 6;
                break;
            case 0xff65:
                break;
        }
    }
    return 1;
}
