/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern s32 func_ov123_0207c16c(void **, s32);
extern s32 func_ov123_0207e5e0(void **, Pair, void *, void *, s32);
extern s32 func_ov123_020801a4(void **, s32, s32);
extern void func_ov123_02081860(s32, void *);
extern void func_ov123_02081e10(void **, void *);
extern s32 func_ov123_02081f18(void **, s32, s32, void **, s32, s32, s32);
extern s32 func_ov123_02083774(void **, s32, void **);
extern void func_ov123_02086078(void **, void *);
extern void *func_ov123_020996d4(s32);
extern u8 data_ov123_020da794[];

s32 func_ov123_0207fff0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *spC;
    void *sp10;
    Pair pr;
    s32 r;
    s32 var_r4;
    s32 var_r5;
    void *obj;
    u8 *g;

    g      = (u8 *) *arg0;
    var_r4 = 0;
    sp10   = NULL;
    if (arg2 == 1) {
        var_r4 = 1;
    }
    if (*(s32 *) (g + 0x100) == 0) {
        var_r4 = 0;
    }
    if (arg4 == 0) {
        goto plain;
    }
    if (var_r4 == 0) {
        goto plain;
    }
    if (func_ov123_02083774(arg0, arg1, &spC) == 0) {
        goto plain;
    }
    if (*(s32 *) ((u8 *) spC + 0xC) != 0) {
        obj = func_ov123_020996d4(0x204);
        if (obj == NULL) {
            func_ov123_02086078(arg0, data_ov123_020da794);
            return 1;
        }
        func_ov123_02081860(*(s32 *) ((u8 *) spC + 0xC), obj);
        *(s32 *) obj              = 0;
        *(s32 *) ((u8 *) obj + 4) = arg1;
        pr.a                      = arg4;
        pr.b                      = arg5;
        r                         = func_ov123_02081f18(arg0, 2, 0, &sp10, 1, arg4, arg5);
        if (r != 0) {
            return r;
        }
        var_r5 = *(s32 *) ((u8 *) sp10 + 0x18);
        r      = func_ov123_0207e5e0(arg0, pr, obj, sp10, 0);
        if (r != 0) {
            return r;
        }
        func_ov123_02081e10(arg0, sp10);
        goto block19;
    }
plain:
    r = func_ov123_02081f18(arg0, 2, 0, &sp10, arg3, arg4, arg5);
    if (r != 0) {
        return r;
    }
    var_r5 = *(s32 *) ((u8 *) sp10 + 0x18);
    r      = func_ov123_020801a4(arg0, arg1, var_r5);
    if (r != 0) {
        return r;
    }
block19:
    if (arg3 != 0) {
        r = func_ov123_0207c16c(arg0, var_r5);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
