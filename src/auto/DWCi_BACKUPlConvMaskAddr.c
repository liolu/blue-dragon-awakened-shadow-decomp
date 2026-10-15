/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void DWCi_BACKUPlConvMaskAddr(s32 arg0, s32 arg1) {
    s32 var_ip;
    s32 var_r3;

    var_r3 = 0;
    var_ip = 0;
    do {
        *(s8 *) (arg1 + var_r3) = (s8) ((u32) (-1 ^ (-1U >> arg0)) >> (0x18 - var_ip));
        var_r3 += 1;
        var_ip += 8;
    } while (var_r3 < 4);
}