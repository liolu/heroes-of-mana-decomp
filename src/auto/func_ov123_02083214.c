/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_ov123_02082604(void **, void *);
extern s32 func_ov123_02086288(void **, s32, s32 *);
extern void func_ov123_02086078(void **, void *);
extern s32 func_ov123_02083774(void **, s32, void **);
extern void func_ov123_0207e128(void **, void *, void *);
extern void func_ov123_0207e0f0(void **, void *, s32);
extern void func_ov123_020996a0(void *);
extern s32 func_ov123_02083578(void *);
extern void func_ov123_0208372c(void **, void *);
extern s32 func_ov123_0207dbb8(void **, s32, void *, s32 *, s32 *, void *);
extern void *func_02024f10(void *, void *);
extern s32 func_02024ea0(void *, void *, s32);
extern s32 func_ov123_0208279c(void **, void *);
extern void func_02020d04(void *, void *, s32, s32);
extern s32 func_ov123_0207da38(void **, s32, void *, s32 *, s32, void *);

extern u8 data_ov123_020dab78[];
extern u8 data_ov123_020dabdc[];
extern u8 data_ov123_020dac7c[];
extern u8 data_ov123_020daccc[];
extern u8 data_ov123_020dad04[];
extern u8 data_ov123_020dad0c[];
extern u8 data_ov123_020dad14[];
extern u8 data_ov123_020dad1c[];
extern u8 data_ov123_020dad24[];
extern u8 data_ov123_020dad34[];
extern u8 data_ov123_020dad3c[];
extern u8 data_ov123_020dad44[];
extern u8 data_ov123_020dad68[];

s32 func_ov123_02083214(void **ctx, u8 *obj) {
    u8 *r5;
    u8 *p3;
    void *p;
    void *p4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    void *sp14;
    s32 st;
    s32 t;
    s32 r4;

    r5 = (u8 *) ctx[0];
    st = *(s32 *) obj;
    switch ((u32) (st - 0x65)) {
        case 0:
            break;
        case 1:
            t = func_ov123_02082604(ctx, obj);
            if (t != 0) {
                return t;
            }
            break;
        case 2:
            t = func_ov123_02086288(ctx, *(s32 *) (obj + 8), &sp8);
            if (t != 0) {
                return t;
            }
            if (sp8 == 4) {
                func_ov123_02086078(ctx, data_ov123_020dabdc);
                return 3;
            }
            if (sp8 != 3) {
                break;
            }
            r4 = 1;
            if (func_ov123_02083774(ctx, *(s32 *) (obj + 0xc), &sp14) == 0) {
                func_ov123_02086078(ctx, data_ov123_020dabdc);
                return 3;
            }
            func_ov123_0207e128(ctx, obj + 0x28, data_ov123_020dad0c);
            func_ov123_0207e128(ctx, obj + 0x28, data_ov123_020dad14);
            func_ov123_0207e0f0(ctx, obj + 0x28, *(s32 *) (r5 + 0x1a0));
            func_ov123_0207e128(ctx, obj + 0x28, data_ov123_020dad1c);
            func_ov123_0207e128(ctx, obj + 0x28, r5 + 0x110);
            func_ov123_0207e128(ctx, obj + 0x28, data_ov123_020dad24);
            func_ov123_0207e128(ctx, obj + 0x28, *(void **) ((u8 *) sp14 + 0x18));
            func_ov123_0207e128(ctx, obj + 0x28, data_ov123_020dad04);
            p3 = *(u8 **) (r5 + 0x434);
            if (p3 != 0) {
                do {
                    if (*(s32 *) (p3 + 0xc) == *(s32 *) (obj + 0xc) && p3 != obj && *(s32 *) p3 <= 0x67) {
                        r4 = 0;
                    }
                    p3 = *(u8 **) (p3 + 0x3c);
                } while (p3 != 0);
            }
            if (r4 != 0) {
                func_ov123_020996a0(*(void **) ((u8 *) sp14 + 0x18));
                *(void **) ((u8 *) sp14 + 0x18) = 0;
                if (func_ov123_02083578(sp14) != 0) {
                    func_ov123_0208372c(ctx, sp14);
                }
            }
            *(s32 *) obj = 0x68;
            break;
        case 3:
            t = func_ov123_0207dbb8(ctx, *(s32 *) (obj + 8), obj + 0x18, &spC, &sp10, data_ov123_020daccc);
            if (t != 0) {
                return t;
            }
            p = func_02024f10(*(void **) (obj + 0x18), data_ov123_020dad04);
            if (p == 0) {
                break;
            }
            *(u8 *) p = 0;
            p4        = *(void **) (obj + 0x18);
            if (func_02024ea0(p4, data_ov123_020dad34, 7) == 0) {
                *(s32 *) (obj + 0x14) = *(s32 *) (obj + 0x14) + 1;
                if (*(s32 *) (obj + 0x14) > 1) {
                    func_ov123_02086078(ctx, data_ov123_020dad44);
                    return 3;
                }
                t = func_ov123_0208279c(ctx, obj);
                if (t != 0) {
                    return t;
                }
            } else if (func_02024ea0(p4, data_ov123_020dad3c, 6) != 0) {
                func_ov123_02086078(ctx, data_ov123_020dad68);
                return 3;
            }
            *(s32 *) obj          = 0x69;
            *(s32 *) (obj + 0x20) = 0;
            break;
        default:
            func_02020d04(data_ov123_020dac7c, data_ov123_020dab78, 0, 0x9f);
            break;
    }
    if (*(s32 *) (obj + 0x30) > 0) {
        t = func_ov123_0207da38(ctx, *(s32 *) (obj + 8), obj + 0x28, &sp10, 1, data_ov123_020daccc);
        if (sp10 != 0 || t != 0) {
            *(s32 *) obj = 0x6a;
        }
    }
    return 0;
}
