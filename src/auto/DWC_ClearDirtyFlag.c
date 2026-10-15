#include "m2c.h"

M2C_UNK DWCi_Acc_ClearDirty();                            /* extern */

void DWC_ClearDirtyFlag(void) {
    DWCi_Acc_ClearDirty();
}
