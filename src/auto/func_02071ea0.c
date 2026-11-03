#include "m2c.h"
typedef struct {
    u8 len;
    u8 family;
    u16 port;
    s32 addr;
} SA;
typedef struct {
    u8 pad[0xc];
    s32 **list;
} H;
extern char data_020fcad0[];
s32 inet_addr(char *);
s32 strcmp(char *, char *);
H *SOC_GetHostByName(char *);
s32 func_02071ea0(char *host, s32 port0, SA *sa, H **out) {
    H *h       = 0;
    u16 port   = port0;
    sa->family = 2;
    sa->port   = (u16) (((port >> 8) & 0xff) | ((port << 8) & 0xff00));
    if (host == 0) {
        sa->addr = 0;
    } else {
        sa->addr = inet_addr(host);
    }
    if (sa->addr == -1) {
        if (strcmp(host, data_020fcad0) != 0) {
            h = SOC_GetHostByName(host);
            if (h == 0) {
                return 0;
            }
            sa->addr = **h->list;
        }
    }
    if (out != 0) {
        *out = h;
    }
    return 1;
}
