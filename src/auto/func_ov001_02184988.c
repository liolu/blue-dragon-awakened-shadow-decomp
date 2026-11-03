typedef struct {
    short a;
    unsigned short e;
} G;
void func_ov001_0218418c(int);
void func_ov001_02184208(int);
void func_ov001_02184988(G *g) {
    if (g->e != 0) {
        func_ov001_0218418c(9);
        func_ov001_02184208(g->e);
    } else {
        func_ov001_0218418c(1);
    }
}
