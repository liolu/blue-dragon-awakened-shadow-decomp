#include "m2c.h"

M2C_UNK CARDi_WaitAsync();                            /* extern */

void CARD_WaitBackupAsync(void) {
    CARDi_WaitAsync();
}
