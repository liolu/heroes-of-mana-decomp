#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_ov122_0205534c(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02056dbc(M2C_UNK *, s32, u32);   /* extern */
M2C_UNK func_ov122_02058248(M2C_UNK *);             /* extern */
M2C_UNK func_ov122_02059890();                      /* extern */
M2C_UNK func_ov122_0205a850();                      /* extern */
extern M2C_UNK data_ov122_02064020;
extern M2C_UNK data_ov122_020647ac;
typedef struct {
    u32 a : 25;
    u32 b : 1;
    u32 r : 6;
} B_data_ov122_02065604;
typedef struct {
    u8 pad[3548];
    B_data_ov122_02065604 f;
} D_data_ov122_02065604;
extern D_data_ov122_02065604 data_ov122_02065604;

void func_ov122_0205adac(void) {
    u32 temp_r2;

    func_ov122_02054db8();
    func_ov122_0205a850();
    func_ov122_02054e24(0xF4, 0x2C, func_ov122_02056af8(0x1F) + 0x1B, 0);
    func_ov122_02054e24(0xF4, 0xB4, func_ov122_02056af8(0x20) + 0x1D, 0);
    if (((u32) (M2C_FIELD(&data_ov122_02064020, s32 *, 0x794) << 0x17) >> 0x1F) != 0) {
        func_ov122_0205534c(0, 0, 0);
        func_ov122_0205534c(0, 0xA0, 0x100);
    }
    func_ov122_02058248(&data_ov122_020647ac);
    func_ov122_02059890();
    func_ov122_02054d5c(0, 0x400);
    temp_r2 = data_ov122_02065604.f.b;
    if (temp_r2 == 0) {
        return;
    }
    data_ov122_02065604.f.b = 0;
    func_ov122_02056dbc((s32 *) (void *) &data_ov122_02065604, *(s32 *) (void *) &data_ov122_02065604.f, temp_r2);
}
