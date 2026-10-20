/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s32 data_ov123_020e3098;
extern s32 data_ov123_020e309c;
extern s32 data_ov123_020e30cc[];

void func_ov123_020ad034(s32 arg0) {
    s32 temp_r4;
    s32 cur;

    cur = data_ov123_020e309c;
    temp_r4 = data_ov123_020e3098 + 1;
    if ((temp_r4 != cur) && (data_ov123_020e3098 != (cur + 3))) {
        data_ov123_020e30cc[data_ov123_020e3098] = arg0;
        data_ov123_020e3098 = temp_r4;
        if (temp_r4 >= 4) {
            data_ov123_020e3098 = 0;
        }
    }
}
