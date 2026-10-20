#include "m2c.h"

typedef struct {
    s32 unk0;
    s16 unk4;
    u16 pad;
} E;

typedef struct {
    u8 pad[0x494];
    E arr[12][8];
} D;

extern D data_ov117_020f23e0;

void func_ov117_020e9ee0(void) {
    s32 i;
    s32 j;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 8; j++) {
            data_ov117_020f23e0.arr[i][j].unk0 = 0x200;
            data_ov117_020f23e0.arr[i][j].unk4 = 0;
        }
    }
}
