#include "m2c.h"

M2C_UNK ArrayFree();                            /* extern */
extern s32 negotiateList;

void NNFreeNegotiateList(void) {
    if (negotiateList == 0) {
        return;
    }
    ArrayFree();
    negotiateList = 0;
}
