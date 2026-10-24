/* compiler: 1.2/sp3 */
typedef struct B {
    int a;
    char *pos;
    char *end;
} B;
extern int func_02024c28(char *);
extern int func_ov123_020967ac(void *, B *, int);
extern int func_0200cdbc(char *, int, const char *, char *);
extern const char data_ov123_020dc298[];
int func_ov123_02096928(char *self, char *str) {
    int n;
    B *b;
    int room;
    int r;
    b    = (B *) (self + 0x19f8);
    n    = func_02024c28(str);
    room = b->end - b->pos;
    if (n > room) {
        if (func_ov123_020967ac(self, b, n - room + 1) == 0) {
            return 1;
        }
        room = b->end - b->pos;
    }
    r = func_0200cdbc(b->pos, room, data_ov123_020dc298, str);
    if (r != n) {
        return 1;
    }
    b->pos += r;
    return 0;
}
