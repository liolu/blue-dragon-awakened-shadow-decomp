unsigned char func_02044a60(void);
void func_02044884(void);
void func_02045784(unsigned char *);
void func_02044a00(int);
int func_0204465c(void) {
    unsigned char x = func_02044a60();
    if (x == 0 || x == 0x12) {
        func_02044884();
        return 1;
    }
    func_02045784(&x);
    func_02044a00(x);
    return 0;
}
