#include "m2c.h"

s32 SOC_InetAtoN(M2C_UNK, s32 *);                  /* extern */

s32 inet_addr(M2C_UNK arg0) {
    s32 sp0;

    if (SOC_InetAtoN(arg0, &sp0) == 0) {
        return -1;
    }
    return sp0;
}
