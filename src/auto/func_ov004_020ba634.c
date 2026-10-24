#include "m2c.h"
typedef struct {
    u32 a;
    u32 b;
} E;
extern void DeleteTexPalMap(u32, u32);
void func_ov004_020ba634(u8 *arg0) {
    s32 i = 0;
    if (*(s32 *) (arg0 + 0x38) > 0) {
        do {
            E *e = *(E **) (arg0 + 0x3C);
            if (e[i].a < 0xF0000000U) {
                DeleteTexPalMap(e[i].a, e[i].b >> 5);
                *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) - (*(E **) (arg0 + 0x3C))[i].b;
            }
            i++;
        } while (i < *(s32 *) (arg0 + 0x38));
    }
    *(s32 *) (arg0 + 0x38) = 0;
}
