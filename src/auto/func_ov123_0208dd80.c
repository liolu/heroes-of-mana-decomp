/* compiler: 1.2/sp3 */
/* near start: 37 diffs with profile "1.2/sp3" */
#include "m2c.h"

s32 func_ov123_0207add8(s32, u8 *, s32, s32, void *, s32 *);
s32 func_ov123_0207b0c4(s32);
s32 func_ov123_0208df24(void *, void *, u8 *, s32);
void func_ov123_0208df2c(void *, void *, u8 *, s32);
void func_ov123_0208dfd4(void *, void *, u8 *, s32);

typedef struct Node {
    s32 key;
    u16 h4;
    u8 pad6[2];
    s32 w8;
    u16 hC;
    u8 padE[2];
    s32 w10;
    u8 pad14;
    u8 flags;
    u8 pad16[0xA];
    struct Node *next;
} Node;

typedef struct {
    s32 w0;
    u8 pad4[4];
    Node *list;
    u8 pad0c[0x14];
    s32 w20;
    s32 w24;
    s32 w28;
} Obj;

void func_ov123_0208dd80(Obj *o, s32 arg1) {
    struct {
        u16 pad8;
        u16 hA;
        s32 wC;
        s32 size;
        u8 buf[0x800];
    } L;
    s32 len;
    Node *n;
    s32 zero = 0;
    s32 h;
    u8 *bp;
    L.size = 8;
    if (arg1 != 0) {
        h = o->w24;
    } else {
        h = o->w20;
    }
    if (func_ov123_0207b0c4(h) == 0) {
        return;
    }
    bp = L.buf;
    do {
        len = func_ov123_0207add8(h, bp, 0x7FF, zero, &L, &L.size);
        if (len == -1) {
            return;
        }
        bp[len] = zero;
        for (n = o->list; n != 0; n = n->next) {
            if ((arg1 != 0 && (n->flags & 8) && n->w10 == L.wC) || (n->key == L.wC && (n->h4 == L.hA || arg1 != 0)) ||
                (n->key == o->w28 && (n->flags & 2) && n->w8 == L.wC && n->hC == L.hA)) {
                if (arg1 != 0) {
                    if (func_ov123_0208df24(o, n, bp, len) != 0) {
                        break;
                    }
                    continue;
                } else if (o->w0 == 1) {
                    func_ov123_0208dfd4(o, n, bp, len);
                } else {
                    func_ov123_0208df2c(o, n, bp, len);
                }
                break;
            }
        }
    } while (func_ov123_0207b0c4(h) != 0);
}
