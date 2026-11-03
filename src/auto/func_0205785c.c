/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 pad[0x2fc];
    s32 a;
    u8 pad2[4];
    u8 ids[0x40];
    s32 n;
} G;
extern G *func_02059234(void);
extern s32 func_020502dc(s32);
s32 func_0205785c(s32 want) {
    s32 i;
    s32 v;
    if (func_02059234()->a == 0) {
        return 0;
    }
    for (i = 0; i < func_02059234()->n; i++) {
        v = func_020502dc(((u8 *) ((char *) func_02059234() + i))[0x304]);
        if (v > 0 && v == want) {
            return 1;
        }
    }
    return 0;
}
