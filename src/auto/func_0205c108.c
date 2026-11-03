#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
    u8 c[6];
} B;
extern s32 SOC_Bind(s32 o, B *b);
extern s32 CheckRcode(s32 o, s32 k);
s32 func_0205c108(s32 o, B *src, u8 v) {
    B b;
    if (*(u16 *) ((u8 *) src + 2) == 0) {
        return 0;
    }
    b   = *src;
    b.a = v;
    return CheckRcode(SOC_Bind(o, &b), -1);
}
