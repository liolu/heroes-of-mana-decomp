/* compiler: 1.2/sp3 */
#include "m2c.h"
void MIi_CpuClear32(u32, void *, u32);
typedef struct Heap {
    u32 head;
    u32 tail;
} Heap;

void *func_020082c4(Heap *h, u32 size, s32 align) {
    u32 tail    = h->tail;
    u32 aligned = ~(align - 1) & (tail - size);
    u32 len;
    if (aligned < h->head) {
        return NULL;
    }
    len = tail - aligned;
    if ((u16) (((u32 *) h)[-1] & 0xff) & 1) {
        MIi_CpuClear32(0, (void *) aligned, len);
    }
    h->tail = aligned;
    return (void *) aligned;
}
