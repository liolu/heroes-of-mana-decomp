/* compiler: 2.0/sp1p5 -profile */
int ReadAnaFile(int, int *, int);
int getIconObjPalData(int a, int b) {
    int arr[4];
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 0;
    arr[3] = b;
    return ReadAnaFile(4, arr, a);
}
