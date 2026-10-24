#include "m2c.h"

typedef struct S {
    void (*fn)(void *, void *, s32);
    s32 a;
    u8 *data;
    s32 type;
} S;

void func_02020d04(void *, void *, s32, s32);
void func_ov123_020996a0(void *);
extern u8 data_ov123_020da274[];
extern u8 data_ov123_020da294[];
extern u8 data_ov123_020da2a4[];

void func_ov123_0207e3ec(void *arg0, S *s) {
    if (s->fn == NULL) {
        func_02020d04(data_ov123_020da274, data_ov123_020da294, 0, 0x6E);
    }
    if (s->data == NULL) {
        func_02020d04(data_ov123_020da2a4, data_ov123_020da294, 0, 0x6F);
    }
    s->fn(arg0, s->data, s->a);
    if (s->type == 2) {
        func_ov123_020996a0(*(void **) (s->data + 8));
        *(void **) (s->data + 8) = NULL;
    } else if (s->type == 3) {
        u8 *d = s->data;
        s32 i;
        for (i = 0; i < *(s32 *) (d + 0x38); i++) {
            func_ov123_020996a0(((void **) *(void **) (d + 0x3C))[i]);
            ((void **) *(void **) (d + 0x3C))[i] = NULL;
            func_ov123_020996a0(((void **) *(void **) (d + 0x40))[i]);
            ((void **) *(void **) (d + 0x40))[i] = NULL;
        }
        func_ov123_020996a0(*(void **) (d + 0x3C));
        *(void **) (d + 0x3C) = NULL;
        func_ov123_020996a0(*(void **) (d + 0x40));
        *(void **) (d + 0x40) = NULL;
    } else if (s->type == 4) {
        u8 *d = s->data;
        func_ov123_020996a0(*(void **) (d + 0xC));
        *(void **) (d + 0xC) = NULL;
    } else if (s->type == 7) {
        u8 *d = s->data;
        if (*(void **) (d + 0x10) != NULL) {
            func_ov123_020996a0(*(void **) (d + 0x10));
            *(void **) (d + 0x10) = NULL;
        }
    } else if (s->type == 8) {
        u8 *d = s->data;
        if (*(void **) (d + 8) != NULL) {
            func_ov123_020996a0(*(void **) (d + 8));
            *(void **) (d + 8) = NULL;
        }
    } else if (s->type == 9) {
        u8 *d = s->data;
        s32 i;
        for (i = 0; i < *(s32 *) (d + 4); i++) {
            func_ov123_020996a0(((void **) *(void **) (d + 8))[i]);
            ((void **) *(void **) (d + 8))[i] = NULL;
        }
        func_ov123_020996a0(*(void **) (d + 8));
        *(void **) (d + 8) = NULL;
    }
    func_ov123_020996a0(s->data);
    s->data = NULL;
    func_ov123_020996a0(s);
}
