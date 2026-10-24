/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Node {
    u32 lo : 14;
    u32 id : 8;
    u32 hi : 10;
    u32 w4;
    u32 w8;
    struct Node *next;
} Node;
typedef struct {
    u8 pad[0x2cc];
    Node *head;
} Ctx;
extern Ctx *data_ov000_02051548;
extern u8 *func_0200ed38(u32, s32, s32);
extern void MIi_CpuClear16(s16, void *, s32);
extern void OS_FreeToHeap(u32, s32, void *);

s32 GetEmptyModelId(void) {
    Node *n = data_ov000_02051548->head;
    u8 *buf = func_0200ed38(0, -1, 0x100);
    s32 i;
    MIi_CpuClear16(0, buf, 0x100);
    for (; n != 0; n = n->next) {
        buf[(u8) n->id] = 1;
    }
    for (i = 0; i < 0x100; i++) {
        if (buf[i] == 0) {
            break;
        }
    }
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    return i;
}
