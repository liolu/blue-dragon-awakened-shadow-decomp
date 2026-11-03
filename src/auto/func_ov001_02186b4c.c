struct E {
    unsigned w, x;
};
void func_ov001_02186b4c(char *a, int i, unsigned *p, int *q) {
    struct E *t = *(struct E **) (a + 8);
    *p          = (t[i].w & 0x1ff0000) >> 16;
    *q          = t[i].w & 0xff;
}
