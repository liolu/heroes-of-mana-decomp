typedef unsigned int u32;
typedef int s32;
typedef struct R {
    u32 flag : 1;
    u32 pad : 31;
    s32 w[4];
} R;
extern R *data_ov120_020f4204;
s32 func_ov120_020eb600(s32 i) {
    if (i == -1) {
        return 0;
    }
    if (data_ov120_020f4204[i].flag != 0) {
        return 1;
    }
    return 0;
}
