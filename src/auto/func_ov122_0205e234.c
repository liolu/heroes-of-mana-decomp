#include "m2c.h"
typedef struct {
    u8 pad0[0xDE0];
    u32 flags;
    u8 pad1[0x50];
    s32 mode;
} Ctx;
extern void func_ov122_02055af0(void);
extern void func_ov122_0205ce60(s32, s32);
extern void func_ov122_0205db1c(s32);
extern s32 func_ov122_0205db94(void);
extern s32 func_ov123_020d3344(void);
extern s32 func_ov123_020d34d4(void);
extern u32 func_ov123_020d3828(void);
extern s32 func_ov123_020d4520(void);
extern u32 func_ov123_020d4548(s32);
extern s8 data_ov122_020647c0[];
extern Ctx data_ov122_02065604;
s32 func_ov122_0205e234(void) {
    s32 i;
    s32 n;
    s32 again;
    s8 *p;
    s8 *q;
    data_ov122_02065604.flags |= 0x80;
    if (func_ov123_020d34d4() == 0) {
        i = 3;
        do {
            func_ov122_0205db1c(i);
        } while (func_ov122_0205db94() == 0);
        return 0;
    }
    data_ov122_02065604.mode = 0x8E;
    func_ov122_0205ce60(0x200000, 0x80000000);
    again = 1;
    i     = 0;
    do {
        if (func_ov123_020d3344() == 0) {
            func_ov122_0205db1c(3);
            return 0;
        }
        func_ov122_02055af0();
        switch (func_ov123_020d3828()) {
            case 1:
                again = i;
                break;
            case 3:
                i = 3;
                do {
                    func_ov122_0205db1c(i);
                } while (func_ov122_0205db94() == 0);
                return 0;
            case 4:
                i = 3;
                do {
                    func_ov122_0205db1c(i);
                } while (func_ov122_0205db94() == 0);
                return 0;
            case 0:
            case 2:
            default:
                break;
        }
    } while (again != 0);
    n = func_ov123_020d4520();
    i = 0;
    if (n > 0) {
        p = data_ov122_020647c0;
        do {
            *p = (u8) func_ov123_020d4548(i) + 0x32;
            i++;
            p++;
        } while (i < n);
    }
    if (i < 5) {
        q = &data_ov122_020647c0[i];
        do {
            i++;
            *q = 0;
            q++;
        } while (i < 5);
    }
    data_ov122_02065604.flags &= ~0x80;
    return 1;
}
