/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void is_thereFriendOfHalfHP(void *, s32);
typedef struct {
    u32 pad : 11;
    u32 idx : 8;
    u32 rest : 13;
} I;
typedef struct {
    u32 pad : 18;
    u32 type : 5;
    u32 rest : 9;
} E;
typedef struct {
    u8 pad[0x10];
    u8 *tab;
} G;
typedef struct {
    u8 pad[0x2c];
    u16 f : 1;
    u8 pad2[0xe8 - 0x2e];
    I *ip;
} Obj;
extern G *data_0203673c;
void GetFriendOfHalfHP(Obj *o) {
    E *e = (E *) (data_0203673c->tab + o->ip->idx * 4 + 8);
    if (e->type == 4) {
        is_thereFriendOfHalfHP(o, o->f ^ 1);
    } else {
        is_thereFriendOfHalfHP(o, o->f);
    }
}
