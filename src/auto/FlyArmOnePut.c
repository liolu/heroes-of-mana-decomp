/* compiler: 2.0/sp1p5 -profile */
struct N {
    int x;
    struct N *n;
};
extern void putOne_FlyArm(struct N *);
void FlyArmOnePut(struct N *p) {
    if (p) {
        FlyArmOnePut(p->n);
        putOne_FlyArm(p);
    }
}
