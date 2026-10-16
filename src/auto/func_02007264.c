/* compiler: 1.2/sp3 */
#include "m2c.h"
void FreeCommandBuffer(void *);
void *func_0200789c(void *, void *);
void func_020078b4(void *, void *);
s32 func_0200fa98(void);
void func_0200faac(s32);

void func_02007264(void *list, s32 tag) {
    s32 irq;
    void *cur;
    void *next;
    irq = func_0200fa98();
    cur = func_0200789c(list, NULL);
    while (cur != NULL) {
        next = func_0200789c(list, cur);
        if (*(s32 *) ((u8 *) cur + 8) == tag) {
            func_020078b4(list, cur);
            FreeCommandBuffer(cur);
        }
        cur = next;
    }
    func_0200faac(irq);
}
