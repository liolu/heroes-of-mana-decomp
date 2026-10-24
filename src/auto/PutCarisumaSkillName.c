/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct A {
    u8 pad[0x354];
    u8 cnt;
} A;
typedef struct B {
    u8 pad[0x338];
    u16 flag : 1;
    u16 rest : 15;
} B;
void OS_FreeToHeap(s32, s32, s32);
void PutStringByObj(s32, s32, u16, s32, s32, s32, s32, s32, s32, s32, s32);
s32 getNameString(s32, s32, s32 *);
extern B *data_ov000_02051550;
extern A *data_ov109_020ea340;

void PutCarisumaSkillName(s32 id, s32 idx) {
    s32 len;
    s32 p;
    s32 n;

    n                         = data_ov109_020ea340->cnt + 1;
    p                         = getNameString(0xE, id, &len);
    data_ov000_02051550->flag = 1;
    PutStringByObj(p, p + len, (u16) n, ((u32) (idx << 31) >> 24) + 0x40, ((idx >> 1) << 5) + 0x22, 1, 1, 0, 1, 1, 1);
    data_ov000_02051550->flag = 0;
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
    }
}
