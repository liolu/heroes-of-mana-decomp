/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Un {
    u32 a : 6;
    u32 b6 : 18;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 k : 3;
    u32 c : 3;
    u8 pad[0x64 - 4];
    u8 x;
    u8 y;
} Un;
typedef struct Gs {
    u8 pad[0x10];
    u32 w10;
} Gs;
extern Gs *data_ov000_02051548;
u8 *GetCanIsThereBoard(s32);
void SetTableUnitThere(Un *, u8 *);
s32 SetNowDownId_a(s32, s32, s32);
s32 SetNowDownId_i(s32, s32, s32);
void *GetKisekiTable(s32, s32, s32, s32, s32, s32);
void OS_FreeToHeap(u32, s32, void *);

s32 setBlankPos(Un *u, s32 *px, s32 *py, s32 d, s32 e) {
    s32 x;
    s32 y;
    s32 dir;
    s32 len;
    s32 step;
    void *tbl;
    s32 id;
    s32 n;
    u8 *board;
    s32 a;
    x     = *px;
    y     = *py;
    len   = 1;
    step  = len;
    tbl   = NULL;
    n     = 25;
    dir   = 6;
    board = GetCanIsThereBoard(u->k);
    if (!u->b24 && !u->b25) {
        SetTableUnitThere(u, board);
    }
    id = -1;
    do {
        if (x >= 0 && x < 0x28 && y >= 0 && y < 0x28 && board[y * 0x28 + x] == 0) {
            if (d >= 0) {
                a    = SetNowDownId_a(x, y, id);
                a    = SetNowDownId_i(x, y, a);
                u->x = x;
                u->y = y;
                data_ov000_02051548->w10 |= 0x4000000;
                tbl = GetKisekiTable(u->k, x, y, d, e, a);
            }
            if (tbl != NULL || d < 0) {
                if (tbl != NULL) {
                    OS_FreeToHeap(0, -1, tbl);
                }
                *px = x;
                *py = y;
                if (board != NULL) {
                    OS_FreeToHeap(0, -1, board);
                }
                return 1;
            }
        }
        switch (dir) {
            case 6:
                if (len != 0) {
                    len--;
                }
                x--;
                if (len == 0) {
                    dir = 4;
                    len = step;
                }
                break;
            case 4:
                y++;
                if (len != 0) {
                    len--;
                }
                if (len == 0) {
                    step++;
                    dir = 2;
                    len = step;
                }
                break;
            case 2:
                if (len != 0) {
                    len--;
                }
                x++;
                if (len == 0) {
                    dir = 0;
                    len = step;
                }
                break;
            case 0:
                if (len != 0) {
                    len--;
                }
                y--;
                if (len == 0) {
                    step++;
                    dir = 6;
                    len = step;
                }
                break;
        }
    } while (--n > 0);
    if (board != NULL) {
        OS_FreeToHeap(0, -1, board);
    }
    return 0;
}
