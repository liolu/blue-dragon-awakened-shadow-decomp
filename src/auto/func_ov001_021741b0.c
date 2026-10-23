extern int func_ov001_021882c0(void *);
extern int func_ov001_021881b8(int);
extern int func_ov001_02188178(int);
extern void func_ov001_0216dc64(int);
extern void func_ov001_0216e620(unsigned short, unsigned short, unsigned short, unsigned short);
extern void func_ov001_021744dc(int);
extern unsigned char data_ov001_02192a36[];
extern unsigned char data_ov001_02196ba8;

void func_ov001_021741b0(void) {
    unsigned int i;
    unsigned char *p;
    p = data_ov001_02192a36;
    for (i = 0; i < 3; i++, p += 8) {
        if (func_ov001_021882c0(p) != 0) {
            int o;
            func_ov001_0216dc64(1);
            data_ov001_02196ba8 = i;
            o                   = data_ov001_02196ba8 * 8;
            func_ov001_0216e620(
                *(unsigned short *) (data_ov001_02192a36 + 0x18 + o), *(unsigned short *) (data_ov001_02192a36 + 0x1c + o),
                *(unsigned short *) (data_ov001_02192a36 + 0x1a + o), *(unsigned short *) (data_ov001_02192a36 + 0x1e + o));
            return;
        }
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
        func_ov001_021744dc(1);
        return;
    }
    if (func_ov001_021881b8(0x80) == 0) {
        return;
    }
    func_ov001_021744dc(3);
}
