typedef int s32;
extern s32 distanceForBattle(s32 a, s32 b);
extern void changeOcc(s32 a, s32 b, s32 c, s32 d);
s32 func_ov107_020dbb7c(s32 a, s32 b) {
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return 1;
    }
    changeOcc(2, a, b, 0);
    return 1;
}
