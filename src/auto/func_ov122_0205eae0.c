#include "m2c.h"

typedef struct {
    u8 p0[0xc];
    s32 w;
} X;
typedef struct {
    u8 p0[0xc];
    s32 fc;
} A;
typedef struct {
    u8 p0[0xde0];
    u32 flags;
} B;
typedef struct {
    u8 p0[0x2c];
    u8 *f2c;
} D;

extern void func_020037e8(s32);
extern s32 func_ov122_02055af0(void);
extern void func_ov122_0205ce60(u32, u32);
extern void func_ov122_0205db1c(s32);
extern void func_ov122_0205e864(u16, s32);
extern s32 func_ov123_020d3344(void);
extern s32 func_ov123_020d3b0c(void);
extern s32 func_ov123_020d4a54(s32);
extern D *data_0203673c;
extern X data_ov122_020647c0;
extern B data_ov122_02065604;
extern A data_ov122_020664b0;

s32 func_ov122_0205eae0(void) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = func_ov123_020d3b0c();
    if ((*(s32 *) (data_0203673c->f2c + 0x1098) & ~0x80000000) != temp_r0) {
        data_ov122_020664b0.fc                 = 1;
        *(s32 *) (data_0203673c->f2c + 0x1098) = temp_r0 | 0x80000000;
        temp_r1                                = (data_ov122_020647c0.w & ~0xFFFF) | (u16) func_ov123_020d4a54(temp_r0);
        data_ov122_020647c0.w                  = temp_r1;
        if ((u16) temp_r1 != 0) {
            data_ov122_02065604.flags = (data_ov122_02065604.flags & ~0x300) | 0x100;
            func_ov122_0205ce60(0x80, 0x80000000);
            func_020037e8(0x86);
            while (1) {
                if (func_ov123_020d3344() == 0) {
                    func_ov122_0205db1c(3);
                    return 0;
                }
                if (func_ov122_02055af0() == 4) {
                    func_ov122_0205e864((u16) data_ov122_020647c0.w, 1);
                    break;
                }
            }
        }
    }
    return 1;
}
