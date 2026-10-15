#include "m2c.h"

s32 nextlongrand(s32);                             /* extern */
extern s32 randomnum;

void longrand(void) {
    randomnum = nextlongrand(randomnum);
}
