#include "m2c.h"

s32 ArrayLength(s32);                             /* extern */
s32 ArrayNth(s32, s32);                        /* extern */
M2C_UNK ArrayRemoveAt(s32, s32);                    /* extern */
extern s32 negotiateList;

void RemoveNegotiator(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    if (ArrayLength(negotiateList) <= 0) {
        return;
    }
loop_3:
    if (arg0 == ArrayNth(negotiateList, var_r5)) {
        ArrayRemoveAt(negotiateList, var_r5);
        return;
    }
    var_r5 += 1;
    if (var_r5 >= ArrayLength(negotiateList)) {
        return;
    }
    goto loop_3;
}
