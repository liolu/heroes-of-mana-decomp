/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x1c];
    u32 ch;
} Q;
typedef struct {
    u8 pad[4];
    Q *q;
    u8 pad2[0x28];
    u8 trk;
    u8 pad3[0];
} Dummy;
typedef struct {
    u8 pad[4];
    Q *q;
    u8 pad2[0x24];
    u8 b2c;
    u8 pad4[2];
    u8 b2f;
    s32 tag;
    u8 pad5[8];
    u8 trk;
} P;
void SND_PrepareSeq(u32);
void SND_SetTrackAllocatableChannel(u32, u32, u32);
void InitPlayer(void *);
s32 SND_GetCurrentCommandTag(void);
void NNSi_SndPlayerStartSeq(P *p) {
    Q *q = p->q;
    SND_PrepareSeq(p->trk);
    if (q->ch != 0) {
        SND_SetTrackAllocatableChannel(p->trk, 0xffff, q->ch);
    }
    InitPlayer(p);
    p->tag = SND_GetCurrentCommandTag();
    p->b2f = 1;
    p->b2c = 1;
}
