/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 first;
    u8 pad0[0x46];
    char a[0x12D];
    char b[0x4D];
} Rec;

typedef struct {
    u8 data[0x34];
    char name[0x0C];
    void (*f0)(void);
    void (*f1)(void);
} Msg;

typedef struct {
    u8 pad0[0x10];
    u16 *p10;
    u8 pad1[0x8];
    s32 f1c;
    u8 pad2[0x4];
    s32 f24;
    u64 t28;
    u8 pad3[0x18];
    char s48[0x100];
    char s148[0x109];
    char s251[1];
} Gst;

extern Gst *data_ov123_020e18d4;
extern s32 data_ov123_020e18d0;
extern void (*data_ov123_020e18d8)(char *, char *, s32);
void func_ov123_0209bacc(void);
void func_ov123_020997c4(void);

s32 func_ov123_020956e8(void);
void func_ov123_02095654(Rec *);
void func_02024c44(char *, char *);
void func_ov123_02095778(void);
void func_ov123_02099778(s32, s32, s32);
s32 func_ov123_02094630(s32);
void func_ov123_0209ba14(char *, char *, void *, s32);
u64 func_0200f510(void);
u64 _ll_udiv(u64, u64);
void func_ov123_0209bce0(s32, s32);
s32 func_ov123_02099d64(u16 *);
void func_ov123_02095928(Msg *, s32);
void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);

void func_ov123_0209b618(void) {
    if (func_ov123_020956e8() == 0x15) {
        Rec r;
        func_ov123_02095654(&r);
        func_02024c44(data_ov123_020e18d4->s48, r.a);
        func_02024c44(data_ov123_020e18d4->s148, r.b);
        func_ov123_02095778();
        func_ov123_02099778(0, data_ov123_020e18d4->f24, 0);
        data_ov123_020e18d4->f24 = 0;
        if (func_ov123_02094630(data_ov123_020e18d4->f1c)) {
            data_ov123_020e18d8(data_ov123_020e18d4->s48, data_ov123_020e18d4->s148, data_ov123_020e18d0);
            return;
        }
        func_ov123_0209ba14(data_ov123_020e18d4->s48, data_ov123_020e18d4->s148, (void *) func_ov123_0209bacc, 3);
        return;
    }
    if (func_ov123_020956e8() == 0) {
        return;
    }
    if (_ll_udiv((func_0200f510() - data_ov123_020e18d4->t28) << 6, 0x82EA) > 0x2710) {
        Rec r2;
        func_ov123_02095654(&r2);
        func_ov123_02095778();
        func_ov123_02099778(0, data_ov123_020e18d4->f24, 0);
        data_ov123_020e18d4->f24 = 0;
        func_ov123_0209bce0(2, r2.first);
        return;
    }
    {
        Msg m;
        func_ov123_02095778();
        MI_CpuFill8(&m, 0, 0x48);
        MI_CpuCopy8(data_ov123_020e18d4->p10, &m, func_ov123_02099d64(data_ov123_020e18d4->p10) * 2 + 2);
        func_02024c44(m.name, data_ov123_020e18d4->s251);
        m.f0 = func_ov123_020997c4;
        m.f1 = (void (*)(void)) func_ov123_02099778;
        func_ov123_02095928(&m, data_ov123_020e18d4->f24);
    }
}
