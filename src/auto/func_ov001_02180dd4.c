int func_020068c0(int, unsigned char *, int, int, int, int);
extern unsigned char data_ov001_02193ea4;
extern unsigned char *data_ov001_02196c48;
void func_ov001_02180dd4(int arg0) {
    unsigned char *p = data_ov001_02196c48;
    unsigned char *q = p + 0x4C4;
    func_020068c0(arg0, &data_ov001_02193ea4, *q, q[1], q[2], q[3]);
}
