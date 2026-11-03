#include "m2c.h"
typedef struct {
    u8 p[0xd];
    u8 n;
    u8 q[0xe6];
    s32 k[0x77];
    u8 v[0x40];
} G;
extern G *func_02059234(void);
u8 func_020579a8(s32 key, s32 b) {
    s32 i = (b == 0);
    if (i <= func_02059234()->n) {
        do {
            if (key == func_02059234()->k[i]) {
                return *(u8 *) ((u8 *) func_02059234() + (i + 0x2d0));
            }
            i++;
        } while (i <= func_02059234()->n);
    }
    return 0xff;
}
