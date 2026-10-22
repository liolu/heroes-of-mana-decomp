struct BF {
    unsigned pad : 17;
    unsigned f : 1;
};
struct S {
    char p0[8];
    int x;
    char pad[0x85C - 12];
    struct BF bf;
};
extern struct S data_ov115_020e9160;
extern short data_ov115_020e99d8[];
extern short data_ov115_020e99dc[];
void func_ov115_020e3664(int, int);
void func_ov115_020e36c0(void);
void func_ov115_020e3700(int, int, int, int);
void func_ov115_020e49f4(void);
void func_ov115_020e4b98(int);
void func_ov115_020e4c64(void) {
    int i;
    int y;
    data_ov115_020e9160.x = 1;
    func_ov115_020e36c0();
    func_ov115_020e49f4();
    y = 0x30;
    for (i = 0; i < 2; i++) {
        if (data_ov115_020e99d8[i] != 0) {
            func_ov115_020e3700(0x14, y, 0x18, 0);
        }
        y += 0x18;
    }
    y = 0x68;
    for (i = 0; i < 4; i++) {
        if (data_ov115_020e99dc[i] != 0) {
            func_ov115_020e3700(0x14, y, 0x19, 0);
        }
        y += 0x18;
    }
    func_ov115_020e3664(0, 0x400);
    if (data_ov115_020e9160.bf.f == 0) {
        return;
    }
    data_ov115_020e9160.bf.f = 0;
    func_ov115_020e4b98(0);
}
