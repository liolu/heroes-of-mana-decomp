#include "m2c.h"
extern void func_ov122_0205ce60(s32 a, u32 b);
extern s32 func_ov123_020d3344(void);
extern void func_ov122_0205db1c(s32 a);
extern s32 func_ov122_02055af0(void);
extern void func_ov122_0205fbc4(void);
s32 func_ov122_0205db94(void) {
    func_ov122_0205ce60(0x2000000, 0x80000000);
    for (;;) {
        if (func_ov123_020d3344() == 0) {
            func_ov122_0205db1c(3);
            return 1;
        }
        switch (func_ov122_02055af0()) {
            case 6:
                func_ov122_0205fbc4();
                return 1;
            case 7:
                return 0;
        }
    }
}
