/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct AnaWork {
    u8 pad_0[300];
    void *f_12C;
    void *f_130;
    void *f_134;
    void *f_138;
    u8 pad_13C[412];
    void *f_2D8;
    u8 pad_2DC[16];
    void *f_2EC;
    u8 pad_2F0[520];
    void *f_4F8;
    u8 pad_4FC[12];
    void *f_508;
    void *f_50C;
    u8 pad_510[368];
    void *f_680;
    void *f_684;
    void *f_688;
    u8 pad_68C[208];
    void *f_75C;
    u8 pad_760[16];
    void *f_770;
    u8 pad_774[16];
    void *f_784;
} AnaWork;

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);
M2C_UNK ReleaseShipInPara();
M2C_UNK ReleaseTrsData();
M2C_UNK ReleaseDeleteObjST();
M2C_UNK DeleteNoAnimeObj(u32);
M2C_UNK TrsGameWorkRelease();
M2C_UNK ReleaseTrsCommand();
M2C_UNK ReleaseObjTrsDataOneWork();
M2C_UNK ReleaseWmWorks();
M2C_UNK deleteComObj(void *);
extern M2C_UNK data_ov000_020506ec;
extern AnaWork *data_ov000_02051548;
void release_AnaGlobalWork(void) {
    u32 temp_r0;
    AnaWork *g;
    if (data_ov000_02051548 != NULL) {
        temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) << 0x1D) >> 0x1F;
        if (temp_r0 != 0) {
            DeleteNoAnimeObj(temp_r0);
            deleteComObj((u8 *) data_ov000_02051548 + 0x78C);
            deleteComObj((u8 *) data_ov000_02051548 + 0x794);
            deleteComObj((u8 *) data_ov000_02051548 + 0x790);
            deleteComObj((u8 *) data_ov000_02051548 + 0x798);
            ReleaseDeleteObjST();
            ReleaseObjTrsDataOneWork();
            ReleaseTrsCommand();
            ReleaseTrsData();
            TrsGameWorkRelease();
            ReleaseWmWorks();
            TrsGameWorkRelease();
        }
        if (data_ov000_02051548->f_784 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_784);
            data_ov000_02051548->f_784 = 0;
        }
        if (data_ov000_02051548->f_680 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_680);
            data_ov000_02051548->f_680 = 0;
        }
        if (data_ov000_02051548->f_684 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_684);
            data_ov000_02051548->f_684 = 0;
        }
        if (data_ov000_02051548->f_770 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_770);
            data_ov000_02051548->f_770 = 0;
        }
        if (data_ov000_02051548->f_4F8 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_4F8);
            data_ov000_02051548->f_4F8 = 0;
        }
        if (data_ov000_02051548->f_12C != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_12C);
            data_ov000_02051548->f_12C = 0;
        }
        if (data_ov000_02051548->f_688 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_688);
            data_ov000_02051548->f_688 = 0;
        }
        if (data_ov000_02051548->f_130 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_130);
            data_ov000_02051548->f_130 = 0;
        }
        if (data_ov000_02051548->f_134 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_134);
            data_ov000_02051548->f_134 = 0;
        }
        if (data_ov000_02051548->f_138 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_138);
            data_ov000_02051548->f_138 = 0;
        }
        if (data_ov000_02051548->f_2D8 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_2D8);
            data_ov000_02051548->f_2D8 = 0;
        }
        if (data_ov000_02051548->f_2EC != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_2EC);
            data_ov000_02051548->f_2EC = 0;
        }
        if (data_ov000_02051548->f_508 != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_508);
            data_ov000_02051548->f_508 = 0;
        }
        if (data_ov000_02051548->f_50C != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_50C);
            data_ov000_02051548->f_50C = 0;
        }
        if (data_ov000_02051548->f_75C != 0) {
            OS_FreeToHeap(0, -1, data_ov000_02051548->f_75C);
            data_ov000_02051548->f_75C = 0;
        }
        ReleaseShipInPara();
        if (data_ov000_02051548 != NULL) {
            OS_FreeToHeap(0, -1, data_ov000_02051548);
        }
        data_ov000_02051548 = NULL;
    }
}
