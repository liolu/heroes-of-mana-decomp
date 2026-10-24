/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct N {
    u32 a;
    u32 b;
    struct N *next;
} N;
typedef struct S {
    u8 pad[0x174];
    u32 f : 5;
    u32 bit : 1;
    u32 rest : 26;
    u8 pad2[0x24];
    N *list;
} S;
extern S data_ov003_020b5380;
extern s32 TransBigSizeData(void);
extern void OS_FreeToHeap(int, int, N *);
void SyncBigTransGo(void) {
    if (data_ov003_020b5380.bit == 0 && data_ov003_020b5380.list != 0 && TransBigSizeData() == 1) {
        N *p                     = data_ov003_020b5380.list;
        data_ov003_020b5380.list = p->next;
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
