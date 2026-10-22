/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct Obj {
    void *a;
    void *b;
    void *items[2];
    void *c;
    u8 pad[8];
    u8 idx;
} Obj;
void func_ov123_020c8f8c(void *);
void func_ov123_020c9e10(void *);
void func_ov123_020cb5f8(s32, s32);
void func_ov123_020ca49c(Obj **);
extern u8 data_ov123_020d8380[];
extern Obj *data_ov123_020e46e4;
void func_ov123_020c4af4(s32 arg0) {
    Obj *o;
    s32 i;
    *(volatile u32 *) 0x04000000 &= ~0xE000;
    func_ov123_020c8f8c(data_ov123_020e46e4->a);
    func_ov123_020c8f8c(data_ov123_020e46e4->b);
    o = data_ov123_020e46e4;
    i = 0;
    if (i < data_ov123_020d8380[o->idx]) {
        do {
            if (o->items[i] != 0) {
                func_ov123_020c8f8c(o->items[i]);
            }
            o = data_ov123_020e46e4;
            i++;
        } while (i < data_ov123_020d8380[o->idx]);
    }
    func_ov123_020c9e10(o->c);
    func_ov123_020cb5f8(1, arg0);
    func_ov123_020ca49c(&data_ov123_020e46e4);
}
