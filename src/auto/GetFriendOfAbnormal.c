/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 18;
    u32 t : 5;
    u32 pad2 : 9;
} T;
typedef struct {
    u8 pad[0x10];
    u8 *tb;
} G;
typedef struct {
    u8 pad[0x2c];
    u16 f : 1;
    u16 g : 15;
} O;
extern G *data_0203673c;
void is_thereFriendOfAbnormal(void *, u32);
void GetFriendOfAbnormal(O *o) {
    u32 idx = ((**(u32 **) ((u8 *) o + 0xe8)) << 13) >> 24;
    if (((T *) (data_0203673c->tb + 8))[idx].t == 4) {
        is_thereFriendOfAbnormal(o, o->f ^ 1);
    } else {
        is_thereFriendOfAbnormal(o, o->f);
    }
}
