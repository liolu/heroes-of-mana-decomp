#include "m2c.h"

struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct Gl {
    u8 pad[0x64c];
    s32 f4c;
    s32 count;
    void **list;
};

extern "C" {
extern Gl data_ov004_020cfaf0;
extern Obj *data_ov004_020cfafc[];
extern s32 data_ov004_020cfe1c[];
void func_0202f49c(void *);
void func_ov004_020bb468(void);
void func_ov004_020bbd68(void);
void func_ov004_020bc1dc(void);
s32 func_ov004_020c1f94(void **);
s32 func_ov004_020cad5c(void);
void EffectEndCallBackForAna(void **);
void func_ov004_020cb340(void **o);
}

static inline s32 Has(void **o) {
    s32 i;
    for (i = 0; i < data_ov004_020cfaf0.count; i++) {
        if (data_ov004_020cfaf0.list[i] == o) {
            return 1;
        }
    }
    return 0;
}

void func_ov004_020cb340(void **o) {
    s32 k;
    Obj *it;
    s32 i;
    void **dst;
    s32 id;
    void **src;
    s32 n;
    if (o == (void **) -1) {
        return;
    }
    if (Has(o) == 0) {
        return;
    }
    func_ov004_020c1f94(o);
    if (func_ov004_020cad5c() == 0) {
        EffectEndCallBackForAna(o);
    }
    for (i = 0; i < data_ov004_020cfaf0.count; i++) {
        if (data_ov004_020cfaf0.list[i] == o) {
            n   = data_ov004_020cfaf0.count - 1 - i;
            dst = &data_ov004_020cfaf0.list[i];
            src = &data_ov004_020cfaf0.list[i + 1];
            for (k = 0; k < n; k++) {
                *dst++ = *src++;
            }
            data_ov004_020cfaf0.count--;
            break;
        }
    }
    id = func_ov004_020c1f94(o);
    if (o != NULL) {
        ((Obj *) o)->f1();
    }
    data_ov004_020cfe1c[id]--;
    if (data_ov004_020cfe1c[id] <= 0) {
        it = data_ov004_020cfafc[id];
        if (it != NULL) {
            it->f3();
            if (data_ov004_020cfafc[id] != NULL) {
                data_ov004_020cfafc[id]->f1();
            }
            data_ov004_020cfafc[id] = 0;
        }
    }
    if (data_ov004_020cfaf0.count > 0) {
        return;
    }
    data_ov004_020cfaf0.count = 0;
    func_0202f49c(data_ov004_020cfaf0.list);
    data_ov004_020cfaf0.list = 0;
    data_ov004_020cfaf0.f4c  = 0;
    func_ov004_020bb468();
    func_ov004_020bbd68();
    func_ov004_020bc1dc();
}
