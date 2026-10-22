#include "m2c.h"

M2C_UNK func_ov110_020e2288(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK VX_Free();                      /* extern */

typedef struct {
    void *obj;
    u8 pad1[0xB0];
    s32 f_b4;
    s32 f_b8;
    s32 f_bc;
    s32 f_c0;
    s32 f_c4;
    s32 f_c8;
    s32 f_cc;
    s32 arr[2];
    u8 pad2[0x1C];
    s32 f_f4;
} Obj;

void func_ov110_020e1e18(Obj *p) {
    s32 i;

    if (p->obj != NULL) {
        (*(void (**)(void *))(*(u8 **) p->obj + 0x18))(p->obj);
        if (p->obj != NULL) {
            (*(void (**)(void *))(*(u8 **) p->obj + 4))(p->obj);
        }
    }
    func_ov110_020e2288(p->f_cc, p->f_b8, p->f_bc, p->f_c0, p->f_c4, p->f_c8);
    for (i = 0; i < 2; i++) {
        if (p->arr[i] != 0) {
            VX_Free();
        }
        p->arr[i] = 0;
    }
    if (p->f_f4 != 0) {
        VX_Free();
    }
    if (p->f_b4 != 0) {
        VX_Free();
    }
    p->obj  = NULL;
    p->f_b4 = 0;
    p->f_b8 = 0;
    p->f_bc = 0;
    p->f_c0 = 0;
    p->f_c4 = 0;
    p->f_c8 = 0;
    p->f_f4 = 0;
}
