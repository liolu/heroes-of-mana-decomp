/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Pat {
    s16 id;
    u16 cnt : 14;
    u16 type : 2;
    s32 pos;
    s32 f8;
    s32 fC;
    s32 f10;
    struct Pat *next;
} Pat;

typedef struct Req {
    s32 kind;
    s32 mode;
    s32 id;
} Req;

typedef struct Root {
    u8 pad[0x240];
    Pat *head;
} Root;

s32 GetFilePosForSkana(s32, Req *, s32 *);
void MIi_CpuClear16(s32, void *, s32);
s32 ReadAnaFile(s32, Req *, s32 *);
Pat *SearchObjPat();
void *func_0200ed38(s32, s32, s32);
extern Root *data_ov000_02051548;

Pat *getNewPattern(s16 id, s32 type) {
    s32 sp0;
    Req req;
    Pat *p;

    p = SearchObjPat();
    if (p == NULL) {
        p = func_0200ed38(0, -1, 0x18);
        MIi_CpuClear16(0, p, 0x18);
        p->id   = id;
        p->cnt  = 1;
        p->f8   = 0;
        p->type = type;
        switch (type) {
            case 0:
                req.kind = 3;
                break;
            case 1:
                req.kind = 0xA;
                break;
            case 2:
            default:
                req.kind = 9;
                break;
        }
        req.mode                  = 1;
        req.id                    = id;
        p->pos                    = GetFilePosForSkana(3, &req, &sp0);
        req.mode                  = 3;
        p->fC                     = ReadAnaFile(3, &req, &sp0);
        req.mode                  = 2;
        p->f10                    = ReadAnaFile(3, &req, &sp0);
        p->next                   = data_ov000_02051548->head;
        data_ov000_02051548->head = p;
    } else {
        p->cnt = p->cnt + 1;
    }
    return p;
}
