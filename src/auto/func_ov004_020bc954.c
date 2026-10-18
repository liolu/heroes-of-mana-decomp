#include "m2c.h"

M2C_UNK **func_0202f3f8(M2C_UNK);                   /* extern */
M2C_UNK **func_ov004_020bcb8c(s32);                 /* extern */
M2C_UNK **func_ov004_020bcba0(s32, M2C_UNK **);     /* extern */
extern M2C_UNK data_ov004_020cdafc;

typedef struct OB OB;
typedef struct VT {
    int p[7];
    void (*f)(s32 *, OB *);
} VT;
struct OB {
    VT *vt;
};
void func_ov004_020bc954(void *arg0) {
    s32 sp0;
    M2C_UNK **temp_r0;
    M2C_UNK **temp_r0_2;
    M2C_UNK **temp_r0_3;

    M2C_FIELD(arg0, s32 *, 8)         = -1;
    temp_r0                           = func_ov004_020bcb8c(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK ***, 0xC) = temp_r0;
    if (temp_r0 == NULL) {
        temp_r0_2 = func_0202f3f8(0xC);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r0_2, M2C_UNK **, 0) = &data_ov004_020cdafc;
            M2C_FIELD(temp_r0_2, s32 *, 8)      = 0;
        }
        M2C_FIELD(arg0, M2C_UNK ***, 0xC) = temp_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 0x10)       = 0;
    temp_r0_3                          = func_ov004_020bcba0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, M2C_UNK ***, 0xC));
    M2C_FIELD(arg0, M2C_UNK ***, 0x14) = temp_r0_3;
    if (temp_r0_3 == NULL) {
        M2C_FIELD(arg0, M2C_UNK ***, 0x14) = (M2C_UNK **) M2C_FIELD(arg0, M2C_UNK ***, 0xC);
    }
    {
        OB *o = *(OB **) ((u8 *) arg0 + 0xC);
        o->vt->f(&sp0, o);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = sp0;
}
