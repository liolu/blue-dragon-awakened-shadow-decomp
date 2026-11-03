typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct G {
    u8 pad0[0x200];
    u16 h200;
    u8 pad1[2];
    u32 w204;
    u8 pad2[0x648 - 0x208];
    u16 h648;
    u16 h64a;
    u8 pad3[0xa90 - 0x64c];
    u8 b_a90;
    u8 pad4[0xaa4 - 0xa91];
    u8 *p_aa4;
} G;
extern G *data_ov001_02196c6c;
extern u32 func_ov001_02184a0c(void);
extern void func_ov001_02184f20(int, u16, u16);
extern void func_ov001_02185ee4(int, u16, void *);
extern void func_ov001_0218604c(void);
extern int func_ov001_02186130(void);
void func_ov001_02185c40(void) {
    switch (func_ov001_02184a0c()) {
        case 1:
            func_ov001_02184f20(4, (u16) (data_ov001_02196c6c->h648 + 1), data_ov001_02196c6c->h64a);
            return;
        case 4:
        case 5:
        case 6:
            func_ov001_02185ee4(0, data_ov001_02196c6c->h200,
                                data_ov001_02196c6c->p_aa4 + (data_ov001_02196c6c->h200 % 16) * 64);
            func_ov001_0218604c();
            if (data_ov001_02196c6c->b_a90 == 0x1b) {
                return;
            }
            if (data_ov001_02196c6c->w204 > 0x1e0) {
                data_ov001_02196c6c->b_a90 = 0x1b;
                return;
            }
            if (func_ov001_02186130() == 0x10 || func_ov001_02186130() == 0x20) {
                func_ov001_02186130();
                data_ov001_02196c6c->b_a90 = 0xa;
                return;
            }
            if (func_ov001_02186130() == 0x40) {
                data_ov001_02196c6c->b_a90 = 0xb;
                return;
            }
            if (func_ov001_02186130() == 0xff) {
                data_ov001_02196c6c->b_a90 = 0x1b;
                return;
            }
            if (func_ov001_02186130() == 0x50) {
                data_ov001_02196c6c->b_a90 = 0x15;
                return;
            }
            if (func_ov001_02186130() == 0x60) {
                data_ov001_02196c6c->b_a90 = 0x18;
                return;
            }
            if (func_ov001_02186130() == 0x70) {
                data_ov001_02196c6c->b_a90 = 0x1b;
                return;
            }
            if (func_ov001_02186130() == 0) {
                data_ov001_02196c6c->b_a90 = 8;
                return;
            }
            if (func_ov001_02186130() == 0xbd) {
                data_ov001_02196c6c->b_a90 = 9;
                return;
            }
            data_ov001_02196c6c->b_a90 = 0x1f;
            return;
        default:
            return;
    }
}
