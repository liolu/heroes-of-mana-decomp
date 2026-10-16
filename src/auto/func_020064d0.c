/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_02005224(void);
u8 *NNS_SndArcGetPlayerInfo(s32);
void NNS_SndPlayerSetPlayableSeqCount(s32, s32);
void NNS_SndPlayerSetAllocatableChannel(s32, s32);
s32 func_02004608(s32, void *, void *);

u32 func_020064d0(void *heap) {
    s32 i;
    u8 *info;
    s32 j;
    func_02005224();
    i = 0;
    do {
        info = NNS_SndArcGetPlayerInfo(i);
        if (info != NULL) {
            NNS_SndPlayerSetPlayableSeqCount(i, info[0]);
            NNS_SndPlayerSetAllocatableChannel(i, *(u16 *) (info + 2));
            if (*(void **) (info + 4) != NULL && heap != NULL) {
                for (j = 0; j < info[0]; j++) {
                    if (func_02004608(i, heap, *(void **) (info + 4)) == 0) {
                        return 0;
                    }
                }
            }
        }
        i++;
    } while (i < 0x20);
    return 1;
}
