#include "m2c.h"

s32 ArrayLength();                             /* extern */
M2C_UNK ArrayNth();                    /* extern */
M2C_UNK NegotiateThink();                     /* extern */
extern s32 negotiateList;

void NNThink(void) {
    s32 var_r5;

    if ((negotiateList == 0) || (ArrayLength() == 0)) {
        NegotiateThink(0);
        return;
    }
    var_r5 = ArrayLength(negotiateList) - 1;
    if (var_r5 < 0) {
        return;
    }
    do {
        ArrayNth(negotiateList, var_r5);
        NegotiateThink();
        var_r5 -= 1;
    } while (var_r5 >= 0);
}
