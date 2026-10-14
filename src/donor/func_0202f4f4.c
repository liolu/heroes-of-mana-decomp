/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021424e8 from https://github.com/RonyxDumb/mkds src/arm9/021424e8_func_021424e8.c (license: none), reused by
 * tools/donor_match.py */
struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_02042184;
void func_0202f4f4(void) {
    struct Node72 *head = data_02042184;
    if (head == 0) {
        return;
    }
    do {
        data_02042184 = head->next;
        head->fn(head->object, -1);
        head = data_02042184;
    } while (head != 0);
}
