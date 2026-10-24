#include "m2c.h"

typedef struct {
    u8 pad[0x488];
    u32 pad2 : 23;
    u32 kind : 3;
} A;
typedef struct {
    u8 pad[0x24];
    u8 *tbl;
} B;
typedef struct {
    u8 pad[0xc];
    u8 f[0x28];
} E;
extern A data_ov112_020ec588;
extern B *data_0203673c;
extern u16 data_ov112_020ec988[];

s32 func_ov112_020e614c(void) {
    s32 k;
    switch (data_ov112_020ec588.kind) {
        case 0:
            k = 0;
            break;
        case 1:
            k = 1;
            break;
        case 2:
            k = 2;
            break;
        default:
            return 0;
    }
    {
        u8 *p = (u8 *) &((E *) data_0203673c->tbl)[data_ov112_020ec988[0x40]];
        return p[k + 0xc] != 0;
    }
}
