#include "m2c.h"

M2C_UNK CARDi_UnlockResource(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK CARD_WaitBackupAsync();                            /* extern */
s32 CARD_TryWaitBackupAsync();                                /* extern */

void CARD_UnlockBackup(M2C_UNK arg0) {
    if (CARD_TryWaitBackupAsync() == 0) {
        CARD_WaitBackupAsync();
    }
    CARDi_UnlockResource(arg0, 2);
}
