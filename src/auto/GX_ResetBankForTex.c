#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021018cc;

void GX_ResetBankForTex(void) {
    resetBankForX_(&data_021018cc);
}
