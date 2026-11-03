extern void func_ov001_0216dc64(int);
extern void func_ov001_0217db88(int);
extern void func_ov001_0217db0c(void);
extern int func_ov001_021882c0(void *);
extern int func_ov001_021881b8(int);
extern int func_ov001_02188178(int);
extern unsigned char data_ov001_02192cd6[];
extern unsigned char data_ov001_02196c0c;

void func_ov001_0217d67c(void) {
    unsigned int i;
    int dummy;
    int *pd = &dummy;
    unsigned char *p;
    p = data_ov001_02192cd6;
    for (i = 0; i < 7; i++) {
        if (func_ov001_021882c0(p) != 0) {
            func_ov001_0216dc64(1);
            data_ov001_02196c0c = i;
            func_ov001_0217db0c();
            return;
        }
        p += 8;
    }
    if (func_ov001_02188178(1) != 0) {
        func_ov001_0216dc64(1);
        return;
    }
    if (func_ov001_02188178(2) != 0) {
        func_ov001_0216dc64(0);
        return;
    }
    if (func_ov001_021881b8(0x40) != 0) {
        func_ov001_0217db88(1);
        return;
    }
    if (func_ov001_021881b8(0x80) != 0) {
        func_ov001_0217db88(3);
        return;
    }
    if (func_ov001_021881b8(0x20) != 0) {
        func_ov001_0217db88(0);
        return;
    }
    if (func_ov001_021881b8(0x10) == 0) {
        return;
    }
    func_ov001_0217db88(2);
}
