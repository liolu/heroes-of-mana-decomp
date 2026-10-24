#include "m2c.h"

typedef struct Sub {
    u8 pad[0x10];
    u16 f10;
    u16 f12;
} Sub;

typedef struct Ent {
    u8 pad[0xE8];
    Sub *sub;
    u8 pad_ec[0x1C];
} Ent;

extern Ent data_ov003_020b0cf0[];
void ReadySetUpWaza(void *);
s32 func_0202d478(s32, u16);
s32 GetAooNoFromCharNo(s32);
s32 distanceForBattle(s32, void *);
void changeOcc(s32, void *, s32, s32);

void func_ov108_020d9674(void *arg0) {
    s32 a[3];
    s32 i;
    s32 r;
    Sub *s;

    ReadySetUpWaza(arg0);
    s = ((Ent *) arg0)->sub;
    if (func_0202d478(s->f10 * 100, s->f12) >= 50) {
        r = GetAooNoFromCharNo(5);
    } else {
        a[0] = GetAooNoFromCharNo(5);
        a[1] = GetAooNoFromCharNo(0xE);
        a[2] = GetAooNoFromCharNo(7);
        for (i = 0; i < 3; i++) {
            if (a[i] == -1) {
                return;
            }
        }
        for (i = 1; i < 3; i++) {
            s32 x = a[i];
            s32 y = a[0];
            if (((Sub *) *(u32 *) ((u8 *) data_ov003_020b0cf0 + y * 0x110 + 0xE8))->f10 >
                ((Sub *) *(u32 *) ((u8 *) data_ov003_020b0cf0 + x * 0x110 + 0xE8))->f10) {
                a[0] = x;
                a[i] = y;
            }
        }
        r = a[0];
        if (r == -1) {
            return;
        }
    }
    if (distanceForBattle(r, arg0) == 1) {
        changeOcc(3, arg0, r, 0);
        return;
    }
    changeOcc(2, arg0, r, 0);
}
