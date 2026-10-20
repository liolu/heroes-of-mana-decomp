#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_ov122_020527b0();                      /* extern */
M2C_UNK func_ov122_0205282c();                      /* extern */
extern s32 data_ov122_02062b20;

typedef struct {
    u8 pad[0xDF4];
    s32 arr[14];
} Data65604;

extern Data65604 data_ov122_02065604;

void func_ov122_02052754(void) {
    s32 i;

    func_ov122_020527b0();
    func_ov122_0205282c();
    OS_FreeToHeap(0, -1, data_ov122_02062b20);
    for (i = 0; i < 0xE; i++) {
        OS_FreeToHeap(0, -1, data_ov122_02065604.arr[i]);
    }
}
