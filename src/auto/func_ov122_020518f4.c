/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    u32 act : 1;
    u32 p0 : 31;
    u8 pad[0xc];
    u32 p1 : 22;
    u32 id : 8;
    u32 p2 : 2;
} E;

typedef struct {
    u8 pad[0x2c];
    u8 *tbl;
} G;

extern G *data_0203673c;
s32 func_ov122_0205fe64(s32, u32, E *);

s32 func_ov122_020518f4(s32 a) {
    s32 r;
    E *e;
    u32 id;

    r  = 0;
    e  = (E *) (data_0203673c->tbl + (a + 0x32) * 0x14);
    id = e->id;
    if (id >= 0x32 && id <= 0x5c && e->act != 0) {
        r += func_ov122_0205fe64(0, id, e);
        r += func_ov122_0205fe64(1, e->id, e);
        r += func_ov122_0205fe64(2, e->id, e);
        r += func_ov122_0205fe64(3, e->id, e);
        r += func_ov122_0205fe64(4, e->id, e);
        r += func_ov122_0205fe64(5, e->id, e);
        r += func_ov122_0205fe64(6, e->id, e);
        r += func_ov122_0205fe64(7, e->id, e);
    }
    return r;
}
