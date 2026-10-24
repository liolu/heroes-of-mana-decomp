#include "m2c.h"

typedef struct {
    u8 pad[0xde0];
    u32 flags;
} A;

s32 func_ov122_02055af0(void);
void func_ov122_0205ce60(s32, s32);
void func_ov122_0205db1c(s32);
s32 func_ov123_020d30a8(void);
u32 func_ov123_020d31ec(void);
void func_ov123_020d3258(void);
u32 func_ov123_020d32c0(void);
s32 func_ov123_020d3344(void);
extern A data_ov122_02065604;
extern s32 data_ov122_020664b0;

s32 func_ov122_0205dd3c(void) {
    s32 go;
    data_ov122_02065604.flags |= 0x80;
    func_ov122_0205ce60(2, 0x80000000);
    if (func_ov123_020d30a8() == 0) {
        func_ov122_0205db1c(3);
        return 0;
    }
    go = 1;
    do {
        if (func_ov122_02055af0() == 3) {
            func_ov123_020d3258();
            while (1) {
                func_ov122_02055af0();
                switch (func_ov123_020d32c0()) {
                    case 0:
                    case 2:
                        break;
                    case 1:
                    case 3:
                    case 4:
                        return 0;
                }
            }
        }
        if (func_ov123_020d3344() == 0) {
            func_ov122_0205db1c(3);
            return 0;
        }
        switch (func_ov123_020d31ec()) {
            case 0:
            case 2:
                break;
            case 1:
                go = 0;
                break;
            case 3:
            case 4:
                func_ov122_0205db1c(3);
                return 0;
        }
    } while (go != 0);
    data_ov122_02065604.flags &= ~0x80;
    data_ov122_020664b0 = 1;
    return 1;
}
