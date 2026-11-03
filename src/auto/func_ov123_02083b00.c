/* compiler: 1.2/sp3 */
/* near start: 12 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 pad[0x13C];
    s32 mark;
    s32 f140;
} Obj;
typedef struct Node {
    s32 type;
    Obj *obj;
    u8 pad[0xC];
    s32 f14;
    u8 pad2[4];
    s32 f1c;
    struct Node *next;
} Node;
typedef struct {
    u8 pad[0x210];
    s32 count;
    u8 pad2[0x210];
    Node *head;
} Ctx;
void func_02020d04(void *, void *, s32, s32);
void func_ov123_02081e10(Ctx **, Node *);
s32 func_ov123_02083c5c(Ctx **, Node *);
void func_ov123_02086078(Ctx **, void *);
void func_ov123_020996a0(void *);
void *func_ov123_020996d4(s32);
extern u8 data_ov123_020dae34;
extern u8 data_ov123_020dae44;
extern u8 data_ov123_020dae64;

s32 func_ov123_02083b00(Ctx **arg0) {
    Ctx *c;
    Node **arr;
    Node *n;
    s32 cnt;
    s32 i;
    s32 j;
    s32 r;
    Obj *o;

    c   = *arg0;
    cnt = 0;
    if (c->count > 0) {
        arr = func_ov123_020996d4(c->count * 4);
        if (arr == 0) {
            func_ov123_02086078(arg0, &data_ov123_020dae34);
            return 1;
        }
        n = c->head;
        if (n != NULL) {
            do {
                if (n->type == 3 && n->f14 != 5 && n->obj->mark == 0) {
                    if (cnt >= c->count) {
                        func_02020d04(&data_ov123_020dae44, &data_ov123_020dae64, 0, 0x563);
                    }
                    arr[cnt] = n;
                    cnt++;
                    n->obj->mark = 1;
                }
                n = n->next;
            } while (n != NULL);
        }
        i = 0;
        if (cnt > 0) {
            do {
                r = func_ov123_02083c5c(arg0, arr[i]);
                if (r != 0) {
                    arr[i]->f1c = r;
                }
                i++;
            } while (i < cnt);
        }
        i = 0;
        if (cnt > 0) {
            do {
                o       = arr[i]->obj;
                o->mark = 0;
                if (o->f140 != 0) {
                    func_ov123_02081e10(arg0, arr[i]);
                }
                i++;
            } while (i < cnt);
        }
        func_ov123_020996a0(arr);
    }
    return 0;
}
