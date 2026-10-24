#include "m2c.h"
typedef struct {
    u8 pad[0x514];
    u32 b0 : 8;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10 : 1;
    u32 b11 : 1;
    u32 b12 : 1;
    u32 b13 : 8;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 b23 : 9;
    u32 c0 : 8;
    u32 c1 : 8;
    u32 c2 : 8;
    u32 c3 : 8;
    u8 d0;
    u8 d1;
} R;
typedef struct {
    u8 pad[0x1e];
    u16 h1e;
    u16 h20;
} Q;
extern R data_ov114_020e6148;
extern Q data_ov114_020e6648;
void func_ov114_020e2f58(void) {
    data_ov114_020e6148.b8  = 0;
    data_ov114_020e6148.b11 = 0;
    data_ov114_020e6148.b9  = 1;
    data_ov114_020e6148.b10 = 1;
    data_ov114_020e6148.c0  = 0xf;
    data_ov114_020e6148.c1  = 0xf;
    data_ov114_020e6148.c2  = 0xf;
    data_ov114_020e6148.c3  = 0xf;
    data_ov114_020e6648.h1e = 0;
    data_ov114_020e6148.d1  = 0;
    data_ov114_020e6148.d0  = 0;
    data_ov114_020e6148.b12 = 0;
    data_ov114_020e6648.h20 = 0;
    data_ov114_020e6148.b13 = 1;
    data_ov114_020e6148.b22 = 0;
}
