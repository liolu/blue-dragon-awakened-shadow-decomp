extern signed char data_020fadd0[];
extern int rand(void);
void randomString(char *buf, int n) {
    int i;
    for (i = 0; i < n; i++) {
        buf[i] = data_020fadd0[(unsigned int) rand() % 62];
    }
    buf[i] = 0;
}
