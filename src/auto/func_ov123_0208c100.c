/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u32 v;
} W;
typedef struct {
    u8 d[0x800];
    s32 len;
} SB;

extern s32 data_ov123_020e14f4;
extern W data_ov123_020e14f8[];
extern u8 data_ov123_020db708[], data_ov123_020db714[], data_ov123_020db720[], data_ov123_020db728[];
extern u8 data_ov123_020db72c[], data_ov123_020db730[], data_ov123_020db740[], data_ov123_020db74c[], data_ov123_020db758[];

void func_ov123_0208cf90(u8 *, s32, u8 *);
void func_0202373c(u8 *, u8 *, s32);
void func_ov123_0208d384(u8 *, u8 *);
u8 *func_ov123_0207367c(W);
void func_ov123_0208d3e4(u8 *, s32);
void func_ov123_0208cb78(u8 *, u8 *, s32, s32, s32, s32, s32, s32);
void func_ov123_0207ad6c(s32, u8 *, s32, s32, u8 *, s32);
s32 func_ov123_0207b3f4(void);

void func_ov123_0208c100(u8 *o, s32 mode) {
    u8 tmp[0x14];
    SB sb;
    s32 i;

    sb.len = 0;
    func_ov123_0208cf90(sb.d, 3, o + 0x84);
    for (i = 0; i < data_ov123_020e14f4; i++) {
        func_0202373c(tmp, data_ov123_020db708, i);
        func_ov123_0208d384(sb.d, tmp);
        func_ov123_0208d384(sb.d, func_ov123_0207367c(data_ov123_020e14f8[i]));
    }
    func_ov123_0208d384(sb.d, data_ov123_020db714);
    func_ov123_0208d3e4(sb.d, *(s32 *) (o + 0xc0));
    func_ov123_0208d384(sb.d, data_ov123_020db720);
    func_ov123_0208d384(sb.d, *(s32 *) (o + 0xc8) != 0 ? data_ov123_020db728 : data_ov123_020db72c);
    if (mode != 0) {
        func_ov123_0208d384(sb.d, data_ov123_020db730);
        func_ov123_0208d3e4(sb.d, mode);
    }
    func_ov123_0208d384(sb.d, data_ov123_020db740);
    func_ov123_0208d384(sb.d, o + 4);
    if (*(s32 *) (o + 0xa8) != 0) {
        func_ov123_0208d384(sb.d, data_ov123_020db74c);
        func_ov123_0208d3e4(sb.d, *(s32 *) (o + 0x104));
        func_ov123_0208d384(sb.d, data_ov123_020db758);
        func_ov123_0208d3e4(sb.d, *(u16 *) (o + 0x108));
    }
    if (mode != 2) {
        func_ov123_0208cb78(o, sb.d, 0xff, 0, 0xff, 0, 0xff, 0);
    } else {
        if (0x800 - sb.len >= 1) {
            sb.d[sb.len++] = 0;
        }
    }
    func_ov123_0207ad6c(*(s32 *) o, sb.d, sb.len, 0, o + 0xcc, 8);
    *(s32 *) (o + 0xac) = func_ov123_0207b3f4();
    *(s32 *) (o + 0xb0) = *(s32 *) (o + 0xac);
    if (mode != 0) {
        *(s32 *) (o + 0xb4) = 0;
    }
}
