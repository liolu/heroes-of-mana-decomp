#include "m2c.h"
typedef struct {
    s32 v;
    u8 pad[0x410];
    u32 lo : 8;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 f10 : 1;
    u32 f11 : 1;
    u32 f12 : 1;
    u32 f13 : 1;
    u32 f14 : 1;
    u32 rest : 17;
    u32 b;
} S;
extern S data_ov113_020e4940;
extern s32 data_02036720_end;
void func_ov113_020e16c8(void) {
    data_ov113_020e4940.f9  = 0;
    data_ov113_020e4940.f10 = 0;
    data_ov113_020e4940.f11 = 0;
    data_ov113_020e4940.b   = (((data_ov113_020e4940.b & ~0xff) | 8) & ~0xff00) | 0x800;
    data_ov113_020e4940.f14 = 0;
    data_ov113_020e4940.f8  = 0;
    if (data_ov113_020e4940.f13) {
        data_ov113_020e4940.v = 0;
        return;
    }
    if (data_02036720_end != 0) {
        data_ov113_020e4940.v = 0x14;
    } else {
        data_ov113_020e4940.v = 0;
    }
}
