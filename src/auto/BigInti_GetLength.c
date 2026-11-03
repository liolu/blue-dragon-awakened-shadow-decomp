#include "m2c.h"
s32 BigInti_GetLength(u16 *a, s32 n) {
    while (n != 0 && a[n - 1] == 0) {
        n--;
    }
    return n;
}