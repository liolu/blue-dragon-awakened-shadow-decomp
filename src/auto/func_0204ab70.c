typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef unsigned int u32;
typedef struct S {
    u8 pad[0x1024];
    char buf[0x100];
    char *p;
    char *q;
    int unk;
    int kind;
    s16 port;
} S;
u32 strlen(char *);
void strncpy(char *, char *, int);
char *strstr(char *, void *);
s16 atoi(char *);
extern char data_020f9630[];
extern char data_020f9638[];
extern char data_020f9644[];
extern char data_020f9648[];
s32 func_0204ab70(S *s, char *arg1) {
    char *a = 0;
    char *t;
    if (strlen(arg1) >= 0x100U) {
        return 0;
    }
    strncpy(s->buf, arg1, 0x100);
    if (strlen(arg1) != strlen(s->buf)) {
        return 0;
    }
    if (strstr(s->buf, data_020f9630) != 0) {
        s->p    = s->buf + 7;
        s->kind = 0;
        s->port = 0x50;
    } else {
        t = strstr(s->buf, data_020f9638);
        if (t == 0) {
            return 0;
        }
        s->p    = t + 8;
        s->kind = 1;
        s->port = 0x1BB;
    }
    t = strstr(s->p, data_020f9644);
    if (t != 0) {
        *t = 0;
        a  = t + 1;
    }
    t = strstr(s->p, data_020f9648);
    if (t == 0) {
        s->q = 0;
    } else {
        *t   = 0;
        s->q = t + 1;
    }
    if (a != 0) {
        s->port = atoi(a);
    }
    return 1;
}
