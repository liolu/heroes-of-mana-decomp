/* compiler: 1.2/sp3 */
#include "m2c.h"

struct Dev {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4(s32, s32);
    virtual void f5();
};

struct O {
    Dev *dev;
    u8 pad4[4];
    u32 n;
    u8 pad0C[0x20 - 0xC];
    s32 f20;
    u8 pad24[0x34 - 0x24];
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    u8 pad58[0xB8 - 0x58];
    s32 *pB8;
    s32 *pBC;
    u8 padC0[0xD0 - 0xC0];
    s32 d0[2];
    s32 d8[2];
    s32 e0[2];
    s32 e8[2];
    s32 cur;
    u32 padF4;
    u32 cnt;
    s32 fFC;
    u8 pad100[0x118 - 0x100];
    s32 i118;
    s32 i11C;
    s32 i120;
    s32 i124;
    u8 pad128[0x12C - 0x128];
    u8 f12C;
};

extern "C" {
void func_ov110_020e1b6c(O *);
s32 func_ov110_020e1c68(O *arg0);
}

s32 func_ov110_020e1c68(O *arg0) {
    s32 r4;
    u32 t;

    if (arg0->cnt == arg0->n) {
        if (arg0->f12C == 0) {
            return 0;
        }
        func_ov110_020e1b6c(arg0);
    }
    arg0->cnt    = arg0->cnt + 1;
    r4           = arg0->cur;
    arg0->cur    = (r4 + 1) % 2;
    t            = *(u32 *) ((u8 *) (arg0->d0[arg0->cur] + (arg0->e0[arg0->cur] + arg0->d8[arg0->cur])) - 2);
    arg0->d8[r4] = t & 0xFFFF;
    arg0->e8[r4] = t >> 16;
    arg0->dev->f5();
    arg0->f34 = arg0->d0[arg0->cur] + arg0->e0[arg0->cur];
    if (arg0->cnt < arg0->n) {
        arg0->e0[r4] = arg0->dev->f4(arg0->d0[r4], arg0->d8[r4] + 2);
    }
    arg0->f38 = arg0->pB8[arg0->i118];
    arg0->f3C = arg0->pBC[arg0->i118];
    arg0->f40 = arg0->pB8[arg0->i11C];
    arg0->f44 = arg0->pBC[arg0->i11C];
    arg0->f48 = arg0->pB8[arg0->i120];
    arg0->f4C = arg0->pBC[arg0->i120];
    arg0->f50 = arg0->pB8[arg0->i124];
    arg0->f54 = arg0->pBC[arg0->i124];
    arg0->fFC = arg0->f20 * arg0->e8[arg0->cur];
    return 1;
}
