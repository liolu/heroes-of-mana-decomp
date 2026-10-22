/* compiler: 1.2/sp3 */
struct Obj {
    int a;
    int b;
    int c;
};
struct G {
    struct Obj o[2];
    char pad[0x788 - 0x18];
    int h;
    int hs[2];
};
extern int data_ov123_020de720[];
extern int data_ov123_020de728[];
extern struct G *data_ov123_020e4724;
void func_ov123_020698f0(struct Obj *, int);
int func_ov123_020b2388(void);
int func_ov123_020c887c(int, int, int);
int func_ov123_020c94ec(int, void *, int);
void *func_ov123_020ca510(int, int);
void func_ov123_020c9f68(void) {
    int i;
    data_ov123_020e4724    = func_ov123_020ca510(0x798, 4);
    data_ov123_020e4724->h = func_ov123_020c94ec(0x20, (char *) data_ov123_020e4724 + 0x18, 0x38);
    if (func_ov123_020b2388() == 6) {
        for (i = 0; i < 2; i++) {
            data_ov123_020e4724->hs[i] = func_ov123_020c887c(data_ov123_020de720[i], 0, 4);
            func_ov123_020698f0(&data_ov123_020e4724->o[i], data_ov123_020e4724->hs[i]);
        }
    } else {
        for (i = 0; i < 2; i++) {
            data_ov123_020e4724->hs[i] = func_ov123_020c887c(data_ov123_020de728[i], 0, 4);
            func_ov123_020698f0(&data_ov123_020e4724->o[i], data_ov123_020e4724->hs[i]);
        }
    }
}
