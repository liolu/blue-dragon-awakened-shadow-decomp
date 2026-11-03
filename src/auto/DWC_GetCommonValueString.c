/* near start: 1 diffs with profile "1.2/sp3" */
extern int strlen(char *);
extern void strncpy(char *, int, int);
extern int strncmp(int, char *, int);
extern int strchr(int, int);

int DWC_GetCommonValueString(char *s, char *out, int in, int ch) {
    int p;
    int q;
    int len;
    if (out == 0) {
        return -1;
    }
    p = strchr(in, ch);
    if (p == 0) {
        return -1;
    }
    while (1) {
        if (strncmp(p + 1, s, strlen(s)) != 0 || ch != ((signed char *) ((char *) strlen(s) + p))[1]) {
            q = strchr(p + 1, ch);
            if (q == 0) {
                return -1;
            }
            p = strchr(q + 1, ch);
            if (p == 0) {
                return -1;
            }
        } else {
            break;
        }
    }
    q = strchr(p + 1, ch);
    if (q == 0) {
        return -1;
    }
    p = strchr(q + 1, ch);
    if (p != 0) {
        len = p - (q + 1);
    } else {
        len = strlen((char *) (q + 1));
    }
    strncpy(out, q + 1, len);
    out[len] = 0;
    return len;
}
