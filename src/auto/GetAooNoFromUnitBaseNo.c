/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
void *GetAooFromUnitBaseNo(int);
int GetAooNoFromUnitBaseNo(int unitBaseNo) {
    u8 *p = (u8 *) GetAooFromUnitBaseNo(unitBaseNo);
    if (p != 0) {
        return p[0x38];
    }
    return -1;
}
