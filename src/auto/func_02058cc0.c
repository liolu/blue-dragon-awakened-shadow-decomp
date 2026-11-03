typedef struct Hdr {
    int magic;
    int ver;
    unsigned char a;
    unsigned char len;
    unsigned short c;
    int d;
    int e;
} Hdr;
extern void MI_CpuCopy8(void *, void *, unsigned int);
extern int strncmp(void *, void *, int);
extern int func_0204e34c(void);
extern unsigned char *func_02059234(void);
extern int func_0205450c(int, int, int, int, void *, int);
extern unsigned char data_020fa880[];

void func_02058cc0(unsigned char *src, unsigned int size) {
    Hdr h;
    unsigned char buf[0x80];
    unsigned int off = 0;
    if (func_0204e34c() != 5) {
        if (func_0204e34c() != 6) {
            return;
        }
        if (func_02059234()[0x15] != 2 && func_02059234()[0x15] != 3) {
            return;
        }
    }
    if (size < 0x14) {
        return;
    }
    do {
        MI_CpuCopy8(src, &h, 0x14);
        if (strncmp(&h, data_020fa880, 4) != 0) {
            return;
        }
        if (h.ver != 3) {
            return;
        }
        MI_CpuCopy8(src + 0x14, buf, h.len);
        if (func_0205450c(h.a, h.e, h.d, h.c, buf, h.len >> 2) == 0) {
            return;
        }
        off += h.len + 0x14;
    } while (off + 0x14 <= size);
}
