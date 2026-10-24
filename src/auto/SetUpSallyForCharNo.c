/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u32 w0;
    u32 lo : 5;
    u32 f : 1;
    u32 v : 2;
    u32 pad : 24;
    u8 pad2[0x2C];
} E;
typedef struct G {
    u8 pad[0x24];
    E *tbl;
} G;
extern G *data_0203673c;
s32 func_02002414(s32);

void SetUpSallyForCharNo(s32 arg0, s32 arg1) {
    s32 r = func_02002414(arg0);
    if (r != -1) {
        data_0203673c->tbl[r].v = arg1;
        data_0203673c->tbl[r].f = 1;
    }
}
