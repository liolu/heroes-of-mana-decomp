/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x20];
    u8 buf[4];
    u16 f24;
    u16 f26;
    u8 f28[8];
    u8 pad2[0x13c - 0x30];
    u32 prev;
    u32 trig;
} T;
typedef struct {
    u8 pad[8];
    T *t;
} G;
extern G data_ov000_02051544;
void func_020157a4(void *p, void *q);
void MIi_CpuCopy16(void *a, void *b, s32 n);
void GetPanelTouch(void) {
    func_020157a4(data_ov000_02051544.t->buf, data_ov000_02051544.t);
    if (data_ov000_02051544.t->f26 == 0) {
        MIi_CpuCopy16(data_ov000_02051544.t->buf, data_ov000_02051544.t->f28, 8);
        data_ov000_02051544.t->trig = data_ov000_02051544.t->prev ^ data_ov000_02051544.t->f24;
        data_ov000_02051544.t->prev = data_ov000_02051544.t->f24;
    } else {
        data_ov000_02051544.t->trig = 0;
        data_ov000_02051544.t->prev = 0;
    }
}
