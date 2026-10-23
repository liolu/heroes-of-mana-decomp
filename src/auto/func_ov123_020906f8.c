/* compiler: 1.2/sp3 */
typedef struct {
    char pad[0x84];
    int arr[1];
} P;
void func_ov123_02090f08(void *, int);
void func_ov123_020906f8(P *p) {
    int i;
    for (i = 0; i < *(int *) ((char *) p + 0x480); i++) {
        func_ov123_02090f08(p, p->arr[i]);
    }
    *(int *) ((char *) p + 0x480) = 0;
}
