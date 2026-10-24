#include "m2c.h"

typedef struct D {
    u8 pad[0x650];
    s32 n;
    s32 *items;
    s32 rounds;
    u8 flag;
} D;

s32 func_ov004_020b9ecc(void);
void func_ov004_020ba020(s32, s32);
s32 func_ov004_020bc1cc(void);
void func_ov004_020bc2c0(s32, s32);
void func_ov004_020bc30c(s32, s32, s32);
void func_ov004_020bc360(s32, s32);
void func_ov004_020bc3a8(s32);
void func_ov004_020bc3bc(s32);
void func_ov004_020bc6b4(s32, s32, s32, s32, s32, s32, s32);
void func_ov004_020bc880(s32);
s32 func_ov004_020c1f94(s32);
void func_ov004_020c20c8(s32);
s32 func_ov004_020c25e4(s32);
void func_ov004_020c2688(s32, s32);
s32 func_ov004_020cad5c(void);
void func_ov004_020cb340(s32);
extern D data_ov004_020cfaf0;

void func_ov004_020cb564(s32 arg0) {
    s32 obj;
    s32 t;
    s32 v;
    s32 i;
    s32 k;
    s32 j;

    if (data_ov004_020cfaf0.n <= 0) {
        return;
    }
    t = func_ov004_020b9ecc();
    if (arg0 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    func_ov004_020ba020(t, v);
    if (arg0 != 0) {
        obj = func_ov004_020bc1cc();
        func_ov004_020bc360(obj, 1);
        func_ov004_020bc2c0(obj, 1);
        func_ov004_020bc30c(obj, 1, 0);
        func_ov004_020bc880(obj);
        func_ov004_020bc3a8(obj);
        func_ov004_020bc6b4(obj, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000);
        for (k = 0; k < data_ov004_020cfaf0.n; k++) {
            func_ov004_020c2688(data_ov004_020cfaf0.items[k], obj);
        }
        func_ov004_020bc3bc(obj);
    }
    for (i = 0; i < data_ov004_020cfaf0.rounds; i++) {
        for (j = 0; j < data_ov004_020cfaf0.n; j++) {
            if (func_ov004_020c25e4(data_ov004_020cfaf0.items[j]) != 0) {
                if (data_ov004_020cfaf0.flag == 0) {
                    func_ov004_020c1f94(data_ov004_020cfaf0.items[j]);
                    if (func_ov004_020cad5c() == 0) {
                        func_ov004_020cb340(data_ov004_020cfaf0.items[j]);
                        j -= 1;
                    }
                }
            } else {
                func_ov004_020c20c8(data_ov004_020cfaf0.items[j]);
            }
        }
    }
    data_ov004_020cfaf0.rounds = 0;
}
