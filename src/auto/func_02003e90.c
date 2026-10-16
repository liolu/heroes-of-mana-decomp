/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_020367c0[];
extern u8 sPrioList[];
void *func_0200789c(void *, void *);
void ForceStopSeq(void *);
void func_020078b4(void *, void *);
void InsertPrioList(void *);

u8 *func_02003e90(s32 prio) {
    u8 *seq = func_0200789c(data_020367c0, NULL);
    if (seq == NULL) {
        seq = func_0200789c(sPrioList, NULL);
        if (prio < seq[0x3d]) {
            return NULL;
        }
        ForceStopSeq(seq);
    }
    func_020078b4(data_020367c0, seq);
    seq[0x3d] = prio;
    InsertPrioList(seq);
    return seq;
}
