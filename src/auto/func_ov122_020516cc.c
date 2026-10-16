#include "m2c.h"

M2C_UNK func_ov122_02052500();                      /* extern */
s32 func_ov122_02052680();                          /* extern */
M2C_UNK func_ov122_020529c4();                      /* extern */
M2C_UNK func_ov122_02052a90();                      /* extern */
M2C_UNK func_ov122_02052ec0();                      /* extern */
M2C_UNK func_ov122_020555f0();                      /* extern */

void func_ov122_020516cc(void) {
    func_ov122_020529c4();
    func_ov122_02052a90();
    if (func_ov122_02052680() != 1) {
        return;
    }
    func_ov122_020555f0();
    func_ov122_02052500();
    func_ov122_02052ec0();
}
