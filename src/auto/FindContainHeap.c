#include "m2c.h"
u8 *func_0200789c(void *, void *);
u8 *FindContainHeap(void *list, u32 addr);

u8 *FindContainHeap(void *list, u32 addr) {
    u8 *h = func_0200789c(list, NULL);
    while (h != NULL) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = FindContainHeap(h + 0xc, addr);
            if (sub == NULL) {
                sub = h;
            }
            return sub;
        }
        h = func_0200789c(list, h);
    }
    return NULL;
}
