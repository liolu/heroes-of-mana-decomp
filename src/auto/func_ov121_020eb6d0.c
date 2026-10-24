#include "m2c.h"

void *func_0200a7b8(void);
void *func_0200aa50(void);
void *func_0200a7ec(void);
void *func_0200aa84(void);
void *G2_GetBG2ScrPtr(void);
void *G2_GetBG2CharPtr(void);
void *G2S_GetBG2ScrPtr(void);
void *G2S_GetBG2CharPtr(void);

void func_ov121_020eb6d0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 *base;
    u16 *p;
    s32 val;
    s32 col;
    s32 row;

    if (arg2 == 0) {
        return;
    }
    if (!(arg5 & 2)) {
        if (!(arg5 & 1)) {
            base = func_0200a7b8();
            func_0200aa50();
        } else {
            base = func_0200a7ec();
            func_0200aa84();
        }
    } else {
        if (!(arg5 & 1)) {
            base = G2_GetBG2ScrPtr();
            G2_GetBG2CharPtr();
        } else {
            base = G2S_GetBG2ScrPtr();
            G2S_GetBG2CharPtr();
        }
        if (arg5 & 4) {
            base += 0x800;
        }
    }
    if (arg5 & 8) {
        base = (u8 *) 0x06810000;
    }
    p   = (u16 *) base + (arg0 + (arg1 << 5));
    val = !(arg4 & 1) ? 0 : 0x6c;
    row = 0;
    if (arg3 <= 0) {
        return;
    }
    do {
        col = 0;
        if (arg2 > 0) {
            do {
                p[col] = (u16) val;
                col++;
            } while (col < arg2);
        }
        row++;
        p += 0x20;
    } while (row < arg3);
}
