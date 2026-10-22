#include "m2c.h"

M2C_UNK MIi_CpuCopy16(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov121_020f4148(u32);                       /* extern */
extern M2C_UNK data_ov121_020f5b80;

typedef struct {
    u32 f0;
    u8 pad[0x58];
} ElemA;

typedef struct {
    u8 pad[0x58];
    u32 flag : 1;
    u32 pad1 : 21;
    u32 field22 : 4;
    u32 field26 : 6;
} ElemB;

extern ElemA data_ov121_020f6680[];
extern ElemB data_ov121_020f60a4[];
extern M2C_UNK data_ov121_020f6628[];

void func_ov121_020ea18c(void) {
    s32 i;
    ElemA *p;
    s32 n;
    ElemB *q;
    u8 *dst;
    s32 j;

    p = data_ov121_020f6680;
    i = 0;
    do {
        i += 1;
        p->f0 &= ~1;
        p += 1;
    } while (i < 0xF);
    j   = 0;
    q   = data_ov121_020f60a4;
    dst = (u8 *) data_ov121_020f6628;
    n   = 0;
    do {
        if (q->flag) {
            q->field22 = func_ov121_020f4148(q->field26);
            MIi_CpuCopy16((M2C_UNK *) q, (M2C_UNK *) dst, 0x5C);
            dst += 0x5C;
            n += 1;
        }
        j += 1;
        q += 1;
    } while (j < 0xF);
    M2C_FIELD(&data_ov121_020f5b80, s32 *, 0xA8C) = n;
}