#include "m2c.h"
typedef struct {
    s32 a[3];
} E12;
typedef struct {
    s32 a[2];
} E8;
s32 func_ov004_020b9cf4(s32);
s32 func_ov004_020b9d30(s32, s32);
void func_ov004_020bf950(u8 *obj, s32 arg1) {
    *(s32 *) (obj + 0x4)  = func_ov004_020b9cf4(arg1);
    *(s32 *) (obj + 0x8)  = func_ov004_020b9cf4(arg1);
    *(s32 *) (obj + 0xC)  = func_ov004_020b9d30(arg1, *(s32 *) (obj + 0x8) * 3 * sizeof(E12));
    *(s32 *) (obj + 0x10) = func_ov004_020b9d30(arg1, *(s32 *) (obj + 0x8) * 3 * sizeof(E12));
    *(s32 *) (obj + 0x14) = func_ov004_020b9d30(arg1, *(s32 *) (obj + 0x8) * 3 * sizeof(E8));
}
