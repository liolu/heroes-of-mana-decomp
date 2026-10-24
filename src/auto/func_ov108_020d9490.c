#include "m2c.h"

typedef struct E {
    u8 pad[0x10];
    u16 a;
    u16 b;
} E;
typedef struct O {
    u8 pad[0xe8];
    E *e;
} O;
void ReadySetUpWaza(O *);
s32 func_0202d478(s32, s32);
s32 GetAooNoFromCharNo(s32);
s32 distanceForBattle(s32, O *);
void changeOcc(s32, O *, s32, s32);

void func_ov108_020d9490(O *o) {
    s32 r;
    s32 no;
    ReadySetUpWaza(o);
    r = func_0202d478(o->e->a * 100, o->e->b);
    if (r >= 0x50) {
        no = GetAooNoFromCharNo(0xE);
    } else if (r < 0x50 && r >= 0x32) {
        no = GetAooNoFromCharNo(5);
    } else {
        no = GetAooNoFromCharNo(7);
    }
    if (no == -1) {
        return;
    }
    if (distanceForBattle(no, o) == 1) {
        changeOcc(3, o, no, 0);
        return;
    }
    changeOcc(2, o, no, 0);
}
