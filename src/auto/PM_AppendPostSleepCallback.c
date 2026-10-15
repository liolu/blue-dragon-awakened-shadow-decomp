#include "m2c.h"

M2C_UNK PMi_AppendList(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02103a00;

void PM_AppendPostSleepCallback(M2C_UNK arg0) {
    PMi_AppendList(&data_02103a00, arg0);
}
