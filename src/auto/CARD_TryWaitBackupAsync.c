#include "m2c.h"

M2C_UNK CARDi_TryWaitAsync();                            /* extern */

void CARD_TryWaitBackupAsync(void) {
    CARDi_TryWaitAsync();
}
