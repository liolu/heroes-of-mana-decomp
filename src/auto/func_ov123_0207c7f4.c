/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Ent;
typedef struct {
    s8 f0;
    u8 pad0[0xFF];
    s32 f100, f104, f108, f10C;
    u8 pad1[0x94];
    Ent ent[6];
    u8 pad2[0x244];
    s32 f418;
    u8 pad3[4];
    s32 f420;
    u8 pad4[0x3C];
    s32 f460;
    u8 pad5[8];
    s32 f46C;
    s32 f470;
    u8 pad6[0x1C];
} Obj;

M2C_UNK func_0202379c();                            /* extern */
M2C_UNK func_ov123_0207b3e4();                      /* extern */
M2C_UNK func_ov123_0207b3f4();                      /* extern */
s32 func_ov123_0207c64c(Obj **);                   /* extern */
M2C_UNK func_ov123_0207c7ac(Obj **);               /* extern */
s32 func_ov123_020839fc(Obj **);                   /* extern */
M2C_UNK func_ov123_0208655c(Obj **, M2C_UNK *);    /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */
void *func_ov123_020996d4(M2C_UNK);                 /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_ov123_020d9f54;
s32 func_ov123_0207c7f4(Obj **arg0, s32 arg1, s32 arg2) {
    Obj *sp0;
    s32 temp_r0;
    s32 i;
    *arg0 = NULL;
    sp0   = func_ov123_020996d4(0x490);
    if (sp0 == NULL) {
        return 1;
    }
    memset(sp0, 0, 0x490);
    sp0->f0   = 0;
    sp0->f418 = 0;
    sp0->f100 = 1;
    sp0->f104 = 0;
    sp0->f108 = 0;
    sp0->f10C = 0;
    sp0->f46C = arg1;
    sp0->f470 = arg2;
    if (func_ov123_020839fc(&sp0) == 0) {
        func_ov123_020996a0(sp0);
        sp0 = NULL;
        return 1;
    }
    i         = 0;
    sp0->f420 = 0;
    do {
        sp0->ent[i].a = 0;
        sp0->ent[i].b = 0;
        i += 1;
    } while (i < 6);
    sp0->f460 = 0;
    func_ov123_0208655c(&sp0, &data_ov123_020d9f54);
    temp_r0 = func_ov123_0207c64c(&sp0);
    if (temp_r0 != 0) {
        func_ov123_0207c7ac(&sp0);
        return temp_r0;
    }
    func_ov123_0207b3e4();
    func_ov123_0207b3f4();
    func_0202379c();
    *arg0 = sp0;
    return 0;
}
