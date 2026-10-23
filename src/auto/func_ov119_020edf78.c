#include "m2c.h"
extern s32 func_ov119_020edeb8(void);
extern s32 func_ov119_020edf40(void);
typedef struct G {
    u8 pad[0x18];
    s32 *t;
} G;
extern G *data_ov119_020f2f68;
s32 func_ov119_020edf78(void) {
    u32 r = func_ov119_020edf40();
    if ((r & 0x8000) == 0) {
        return func_ov119_020edeb8();
    }
    return data_ov119_020f2f68->t[r & 0x7FFF];
}
