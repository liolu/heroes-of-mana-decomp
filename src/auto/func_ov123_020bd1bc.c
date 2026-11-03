/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Hd {
    s32 a0;
    u8 pad4[0x10];
    s32 v14;
    s32 v18[7];
    s32 v34;
    s32 v38;
    s32 v3c;
    u8 pad40[2];
    u8 v42;
    u8 v43;
    u8 pad44[4];
} Hd;

typedef struct Spr {
    u16 a;
    u16 b;
    u16 f : 10;
    u16 m : 2;
    u16 rest : 4;
} Spr;

typedef struct Cfg {
    u8 pad0[0xe7];
    u8 mode;
    u8 pad[0xc];
    u8 f4;
    u8 pad2;
    u8 f6;
} Cfg;

extern Cfg *func_ov123_020c35d4(void);
extern Hd *func_ov123_020ca4ec(s32, s32);
extern void func_ov123_020bcf4c(void);
extern void func_ov123_020bcfa4(void);
extern s32 func_ov123_020b2388(void);
extern void func_ov123_020ae2a4(s32, s32, s32);
extern void func_ov123_020ae530(s32);
extern void func_ov123_020ae898(void);
extern void func_ov123_020c2428(s32, s32, s32, s32, s32);
extern s32 func_ov123_020c9c88(s32, s32);
extern s32 func_ov123_020c92f8(s32, s32);
extern s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern void func_ov123_020bc1fc(void);
extern void func_ov123_020bb330(void);
extern void func_ov123_020b2410(void *);
extern void func_ov123_020bb418(void);
extern void func_ov123_020bae4c(void);
extern void func_ov123_020bcef0(void);

extern u8 data_ov123_020e4668;
extern u16 data_ov123_020e4670;
extern s8 data_ov123_020d7ff4[];
extern u8 data_ov123_020d8048[];
extern Hd *data_ov123_020e4674;

void func_ov123_020bd1bc(void) {
    Cfg *c;
    s32 i;
    s32 n;
    u8 t8;

    c                        = func_ov123_020c35d4();
    data_ov123_020e4674      = func_ov123_020ca4ec(0x48, 4);
    data_ov123_020e4674->v43 = c->f6;
    data_ov123_020e4674->v42 = 0xc;
    func_ov123_020bcf4c();
    func_ov123_020bcfa4();
    if (data_ov123_020e4668 == 0) {
        func_ov123_020ae2a4(0x30, data_ov123_020d7ff4[func_ov123_020b2388()], c->f4 + 1);
    } else {
        func_ov123_020ae2a4(0x45, -1, 0);
    }
    func_ov123_020ae530(1);
    func_ov123_020ae898();
    n = data_ov123_020e4670 * 0x37;
    func_ov123_020c2428(2, 0x55, 0xf1, 0x41, n / 145);
    data_ov123_020e4674->v14 = func_ov123_020c9c88(0, 1);
    i                        = 0;
    t8                       = data_ov123_020d8048[1];
    do {
        data_ov123_020e4674->v18[i] = func_ov123_020c92f8(0, t8);
        i++;
    } while (i < 7);
    switch (c->mode) {
        case 1:
            data_ov123_020e4674->v34              = func_ov123_020c92f8(0, 0x50);
            ((Spr *) data_ov123_020e4674->v34)->m = 3;
            break;
        case 2:
            data_ov123_020e4674->v34              = func_ov123_020c92f8(0, 0x51);
            ((Spr *) data_ov123_020e4674->v34)->m = 3;
            break;
    }
    data_ov123_020e4674->v3c = func_ov123_020cb6ac(1, func_ov123_020bb418, 0, 0x6e);
    data_ov123_020e4674->a0  = func_ov123_020cb6ac(0, func_ov123_020bae4c, 0, 0x78);
    func_ov123_020bc1fc();
    func_ov123_020bb330();
    func_ov123_020b2410(func_ov123_020bcef0);
}
