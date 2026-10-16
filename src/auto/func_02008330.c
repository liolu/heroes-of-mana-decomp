/* compiler: 1.2/sp3 */
#include "m2c.h"
void MIi_CpuClear32(u32, void *, u32);
typedef struct Heap {
    u32 head;
    u32 tail;
} Heap;

void *func_02008330(Heap *h, u32 size, s32 align) {
    u32 start   = h->head;
    u32 aligned = ~(align - 1) & ((align - 1) + start);
    u32 end     = size + aligned;
    u32 len;
    if (end > h->tail) {
        return NULL;
    }
    len = end - start;
    if ((u16) (((u32 *) h)[-1] & 0xff) & 1) {
        MIi_CpuClear32(0, (void *) start, len);
    }
    h->head = end;
    return (void *) aligned;
}
