#include "m2c.h"

void func_020037e8(s32);
s32 func_ov122_02055af0(void);
void func_ov122_0205ce50(s32, u32);
void func_ov122_0205ce60(s32, u32);
void func_ov122_0205ce70(u32);
void func_ov122_0205db1c(s32);
void func_ov122_0205e864(u32, s32);
s32 func_ov123_020d3344(void);
s32 func_ov123_020d3bac(void);
s32 func_ov123_020d3bd4(void);
s32 func_ov123_020d3c4c(void);
u16 func_ov123_020d4b78(u16);

typedef struct {
    u8 pad[8];
    u32 lo8 : 16;
    u32 hi8 : 16;
} X;
typedef struct {
    u8 pad[8];
    u32 lo8 : 16;
    u32 hi8 : 16;
    u32 loc : 16;
    u32 hic : 16;
} P;
typedef struct {
    u8 pad[0xC];
    s32 f;
} Q;
typedef struct {
    u8 pad[0xDE0];
    u32 f;
} R;
extern P data_ov122_020647c0;
extern R data_ov122_02065604;
extern Q data_ov122_020664b0;

s32 func_ov122_0205e958(void) {
    s32 a;
    s32 b;

    a = func_ov123_020d3bd4();
    b = func_ov123_020d3c4c();
    if (a != b) {
        data_ov122_020647c0.hi8 = a;
        func_ov122_0205ce60(0x40, 0x80000000);
        func_020037e8(0x86);
        while (1) {
            if (func_ov123_020d3344() == 0) {
                func_ov122_0205db1c(3);
                return 0;
            }
            if (func_ov122_02055af0() == 4) {
                break;
            }
        }
        if (func_ov123_020d3bac() != 0) {
            return 1;
        }
        if ((b == 0x1F) || (a == 0x1F)) {
            return 1;
        }
        b += 1;
        if (b <= a) {
            do {
                if (func_ov123_020d4b78((u16) b) != 0) {
                    func_ov122_0205ce70(0x80000000);
                    data_ov122_020664b0.f   = 1;
                    data_ov122_020647c0.loc = func_ov123_020d4b78((u16) b);
                    data_ov122_02065604.f   = data_ov122_02065604.f & ~0x300;
                    func_ov122_0205ce50(0x80, 0x80000000);
                    func_020037e8(0x86);
                    while (1) {
                        if (func_ov123_020d3344() == 0) {
                            func_ov122_0205db1c(3);
                            return 0;
                        }
                        if (func_ov122_02055af0() == 4) {
                            break;
                        }
                    }
                    func_ov122_0205e864(data_ov122_020647c0.loc, 1);
                }
                b += 1;
            } while (b <= a);
        }
    }
    return 1;
}
