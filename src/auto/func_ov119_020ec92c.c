#include "m2c.h"

typedef struct {
    s32 a0;
    s32 a4;
    u8 p8[4];
    s32 ac;
    s32 a10;
    s32 a14;
    s32 a18;
    u8 pad[0x118 - 0x1c];
} Ent;
typedef struct {
    s32 w;
    s32 h;
} Sz;

extern s32 data_ov119_020f1e48;
extern s32 data_ov119_020f1e4c;
extern Ent data_ov119_020f2028[2];
extern Sz data_ov119_020f2258;

s32 func_ov119_020ec860(s32, s32, s32);
void func_ov119_020ecb24(s32, s32, s32, s32);
s32 func_0200a7b8(void);
s32 func_0200a7ec(void);
s32 func_0200aa50(void);
s32 func_0200aa84(void);
s32 G2_GetBG2ScrPtr(void);
s32 G2_GetBG2CharPtr(void);
s32 G2S_GetBG2ScrPtr(void);
s32 G2S_GetBG2CharPtr(void);
s32 GetFilePosForSkana(s32, s32, s32 *);
s32 ReadOneString(s32, s32, s32 *);

s32 func_ov119_020ec92c(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 flags, s32 a6) {
    s32 sp4;
    s32 sp0;
    s32 r7, r8, r9, r10, r;

    if (data_ov119_020f1e4c != 0) {
        data_ov119_020f1e4c = (func_ov119_020ec860(a0, a3, a6) + 0x78) / 8;
    }
    data_ov119_020f2258.w = 0x20;
    data_ov119_020f2258.h = 0x20;
    if (!(flags & 2)) {
        r10 = flags & 1;
        if (r10 == 0) {
            r8 = func_0200a7b8();
            r9 = func_0200aa50();
        } else {
            r8 = func_0200a7ec();
            r9 = func_0200aa84();
        }
    } else {
        r10 = flags & 1;
        if (r10 == 0) {
            r8 = G2_GetBG2ScrPtr();
            r9 = G2_GetBG2CharPtr();
        } else {
            r8 = G2S_GetBG2ScrPtr();
            r9 = G2S_GetBG2CharPtr();
        }
        if (flags & 4) {
            r8 += 0x800;
        }
    }
    if (flags & 8) {
        r8 = 0x6810000;
        r9 = r8 - 0x8000;
    }
    switch (a4) {
        case 2:
            r7 = 0xd000;
            break;
        case 4:
            r7 = 0xe000;
            break;
        default:
            r7 = 0xf000;
            break;
    }
    r = ReadOneString(GetFilePosForSkana(a0, a6, &sp0), a3, &sp4);
    if (r10 == 0) {
        data_ov119_020f2028[0].a4  = r8;
        data_ov119_020f2028[0].a0  = r9;
        data_ov119_020f2028[0].a14 = data_ov119_020f2258.w;
        data_ov119_020f2028[0].ac  = a1 + data_ov119_020f1e4c;
        data_ov119_020f2028[0].a10 = a2 + data_ov119_020f1e48;
        data_ov119_020f2028[0].a18 = r7;
        func_ov119_020ecb24(r, r + sp4, 2, 0);
    } else {
        data_ov119_020f2028[1].a4  = r8;
        data_ov119_020f2028[1].a0  = r9;
        data_ov119_020f2028[1].a14 = data_ov119_020f2258.h;
        data_ov119_020f2028[1].ac  = a1 + data_ov119_020f1e4c;
        data_ov119_020f2028[1].a10 = a2 + data_ov119_020f1e48;
        data_ov119_020f2028[1].a18 = r7;
        func_ov119_020ecb24(r, r + sp4, 2, 1);
    }
    data_ov119_020f1e4c = 0;
    data_ov119_020f1e48 = 0;
    return 0;
}
