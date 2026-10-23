#include "m2c.h"

typedef struct {
    u8 pad[8];
    u32 val : 16;
    u32 hi : 16;
} A;

typedef struct {
    u8 pad[0xc];
    s32 flag;
} B;

extern A data_ov122_020647c0;
extern B data_ov122_020664b0;
s32 func_ov123_020d3b5c(void);
s32 func_ov123_020d3b84(void);
void func_ov122_0205ce60(s32, u32);
s32 func_ov123_020d3344(void);
void func_ov122_0205db1c(s32);
s32 func_ov122_02055af0(void);

s32 func_ov122_0205e6c4(void) {
    s32 r                   = func_ov123_020d3b5c();
    data_ov122_020647c0.val = r - func_ov123_020d3b84();
    if (data_ov122_020647c0.val > 9999) {
        data_ov122_020647c0.val = 9999;
    }
    if (data_ov122_020647c0.val != 0) {
        data_ov122_020664b0.flag = 1;
        func_ov122_0205ce60(0x20, 0x80000000);
        while (1) {
            if (func_ov123_020d3344() == 0) {
                func_ov122_0205db1c(3);
                return 0;
            }
            if (func_ov122_02055af0() == 4) {
                break;
            }
        }
    }
    return 1;
}
