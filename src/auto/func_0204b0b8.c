#include "m2c.h"
typedef struct {
    char *name;
    s32 val;
} E;
typedef struct {
    u8 pad[0x1a38];
    E e[0x20];
} T;
s32 strcmp(char *, char *);
s32 func_0204b0b8(T *t, char *key) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (t->e[i].name == NULL) {
            break;
        }
        if (strcmp(key, t->e[i].name) == 0) {
            return t->e[i].val;
        }
    }
    return 0;
}
