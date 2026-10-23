/* compiler: 2.0/sp1p5 -thumb */
unsigned short *func_ov001_0216b08c(long *, long, long *, long *);
long func_ov001_0216b01c(long, long *, long *);
long func_ov001_0216b25c(long arg0, long *arg1) {
    long spC;
    long sp10;
    long sp14;
    long sp18;
    long sp1C;
    long sp4;
    long sp8;
    long temp_r0;
    long temp_r6;
    unsigned short *p;
    unsigned short t;
    unsigned short var_r7;
    temp_r0 = func_ov001_0216b01c(arg0, &spC, &sp10);
    sp1C    = temp_r0;
    var_r7  = 0;
    sp4     = 0;
    sp8     = 0;
    if (temp_r0 == 0) {
        return 0;
    }
    if (spC != 1) {
        return 0;
    }
    temp_r6 = temp_r0 + sp10;
    sp1C    = temp_r0 + 8;
    p       = func_ov001_0216b08c(&sp1C, temp_r6, &sp14, &sp18);
    while (p != 0) {
        switch (sp14) {
            case 1:
                t      = *p;
                var_r7 = ((t >> 8) & 0xFF) | ((t << 8) & 0xFF00);
                break;
            case 2:
                t   = *p;
                sp4 = (unsigned short) (((t >> 8) & 0xFF) | ((t << 8) & 0xFF00));
                break;
            case 5:
                t   = *p;
                sp8 = (unsigned short) (((t >> 8) & 0xFF) | ((t << 8) & 0xFF00));
                break;
        }
        p = func_ov001_0216b08c(&sp1C, temp_r6, &sp14, &sp18);
    }
    if ((var_r7 != 1) || (sp4 != 1)) {
        return 0;
    }
    if (sp8 >= 1) {
        *arg1 = 1;
    } else {
        *arg1 = 0;
    }
    return 1;
}
