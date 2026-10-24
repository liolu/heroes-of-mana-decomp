/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    u32 t;
} E;
typedef struct {
    u8 pad[0x60];
    void *list;
} O;
extern s32 func_ov123_0207a204(void *);
extern E *func_ov123_0207a194(void *, s32);
extern s32 func_ov123_02088924(O *, E *);
s32 func_ov123_0208821c(O *o, u32 now) {
    s32 i;
    s32 n = func_ov123_0207a204(o->list);
    for (i = 0; i < n; i++) {
        E *e = func_ov123_0207a194(o->list, i);
        if (now - e->t > 1000) {
            if (func_ov123_02088924(o, e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
