/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    u8 pad[0x2c];
    u8 *tbl;
} G;

extern G *data_0203673c;
extern u32 data_ov117_020f0ee0[];
extern u8 data_ov117_020f1ee0[];
extern u32 data_ov117_020f23e0[];

void OS_FreeToHeap(s32, s32, u32);
void func_ov117_020e3720(void);

void func_ov117_020e3730(void) {
    s32 off;
    s32 i;
    s32 off2;
    s32 j;
    s32 off3;
    s32 k;

    OS_FreeToHeap(0, -1, data_ov117_020f0ee0[0]);
    OS_FreeToHeap(0, -1, data_ov117_020f0ee0[1]);
    for (i = 0; i < 7; i++) {
        OS_FreeToHeap(0, -1, data_ov117_020f23e0[i + 0x2a5]);
    }
    func_ov117_020e3720();
    i   = 0;
    off = 0;
    do {
        i++;
        *(u32 *) (data_0203673c->tbl + off) &= ~2;
        off += 0x14;
    } while (i < 0x80);
    j    = 0;
    off2 = 0;
    do {
        j++;
        *(u16 *) (data_0203673c->tbl + 0xa00 + off2) &= ~2;
        off2 += 2;
    } while (j < 0x64);
    k    = 0;
    off3 = 0;
    do {
        k++;
        *(u16 *) (data_0203673c->tbl + 0x2c8 + 0x800 + off3) &= ~2;
        off3 += 2;
    } while (k < 0xf0);
    OS_FreeToHeap(0, -1, *(u32 *) (data_ov117_020f1ee0 + 0x510));
}
