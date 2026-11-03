/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024d8c(s8 *, s8 *);
void func_ov123_0207e0f0(void **, void *, s32);
void func_ov123_0207e128(void **, void *, s8 *);
void func_ov123_02086078(void **, s8 *);
void func_ov123_02086568(s8 *, s8 *, s32);
extern s8 data_ov123_020d9c24[];
extern s8 data_ov123_020d9c54[];
extern s8 data_ov123_020d9c60[];
extern s8 data_ov123_020d9c8c[];
extern s8 data_ov123_020d9ca4[];
extern s8 data_ov123_020d9cbc[];
extern s8 data_ov123_020d9cc8[];
extern s8 data_ov123_020d9cd8[];

s32 func_ov123_0207b4e4(void **arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    struct {
        s8 a[256];
        s8 b[256];
        s32 pad;
    } L;
    u8 *obj;
    s8 *p;

    if (arg0 == NULL || (obj = (u8 *) *arg0) == NULL) {
        return 2;
    }
    if (*(s32 *) (obj + 0x108) != 0) {
        return 0;
    }
    if (*(s32 *) (obj + 0x1D8) == 4) {
        func_ov123_02086078(arg0, data_ov123_020d9c24);
        return 2;
    }
    if (arg2 == NULL) {
        func_ov123_02086078(arg0, data_ov123_020d9c8c);
        return 2;
    }
    if (arg3 == NULL) {
        func_ov123_02086078(arg0, data_ov123_020d9ca4);
        return 2;
    }
    func_ov123_02086568(L.a, arg2, 0x100);
    if (L.a[0] != 0) {
        p = L.a;
        do {
            if (*p == 0x5C) {
                *p = 0x2F;
            }
        } while (*++p != 0);
    }
    func_ov123_02086568(L.b, arg3, 0x100);
    if (L.b[0] != 0) {
        p = L.b;
        do {
            if (*p == 0x5C) {
                *p = 0x2F;
            }
        } while (*++p != 0);
    }
    if (arg1 == *(s32 *) (obj + 0x214) && func_02024d8c(L.a, (s8 *) (obj + 0x218)) == 0 &&
        func_02024d8c(L.b, (s8 *) (obj + 0x318)) == 0) {
        return 0;
    }
    *(s32 *) (obj + 0x214) = arg1;
    func_ov123_02086568((s8 *) (obj + 0x218), L.a, 0x100);
    func_ov123_02086568((s8 *) (obj + 0x318), L.b, 0x100);
    func_ov123_0207e128(arg0, obj + 0x1F4, data_ov123_020d9cbc);
    func_ov123_0207e0f0(arg0, obj + 0x1F4, arg1);
    func_ov123_0207e128(arg0, obj + 0x1F4, data_ov123_020d9c54);
    func_ov123_0207e0f0(arg0, obj + 0x1F4, *(s32 *) (obj + 0x198));
    func_ov123_0207e128(arg0, obj + 0x1F4, data_ov123_020d9cc8);
    func_ov123_0207e128(arg0, obj + 0x1F4, L.a);
    func_ov123_0207e128(arg0, obj + 0x1F4, data_ov123_020d9cd8);
    func_ov123_0207e128(arg0, obj + 0x1F4, L.b);
    func_ov123_0207e128(arg0, obj + 0x1F4, data_ov123_020d9c60);
    return 0;
}
