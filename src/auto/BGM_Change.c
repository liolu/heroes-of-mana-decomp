/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void func_02003948(s32, s32);
void func_020038ac(s32);
typedef struct {
    u32 w0;
    u32 a : 4;
    u32 id : 10;
    u32 b : 18;
} S;
extern struct {
    u32 w0;
    S *s;
} data_ov000_02051544;
void BGM_Change(s32 id) {
    func_02003948(id, 0);
    func_020038ac(id);
    if (data_ov000_02051544.s != NULL) {
        data_ov000_02051544.s->id = id;
    }
}
