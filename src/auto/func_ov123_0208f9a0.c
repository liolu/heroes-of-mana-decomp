/* compiler: 1.2/sp3 */
#include "m2c.h"
extern void func_ov123_02090688(void *);
extern void *func_ov123_0207a27c(s32, s32, s32);
extern s32 func_ov123_02090ed8(u8 *, s32);
extern s32 func_ov123_02090f88(void *, u8 *);
extern void func_ov123_0207a140(void *, void *);
typedef struct {
    s32 a;
    s32 b;
} Pair;
typedef struct {
    u8 pad[8];
    void *list;
} Obj;
s32 func_ov123_0208f9a0(Obj *obj, u8 *data, s32 size) {
    Pair pr;
    s32 i;
    s32 n;
    u8 count;
    size--;
    count = *data++;
    if (obj->list != 0) {
        func_ov123_02090688(obj);
    }
    obj->list = func_ov123_0207a27c(8, count, 0);
    if (obj->list == 0) {
        return 5;
    }
    for (i = 0; i < count; i++) {
        if (size < 2) {
            return 4;
        }
        n = func_ov123_02090ed8(data + 1, size - 1);
        if (n == -1) {
            return 4;
        }
        pr.b = *data;
        pr.a = func_ov123_02090f88(obj, data + 1);
        func_ov123_0207a140(obj->list, &pr);
        n++;
        data += n;
        size -= n;
    }
    return 0;
}
