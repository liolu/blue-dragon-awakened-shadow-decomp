#include "m2c.h"

M2C_UNK func_0205bf70(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern s32 data_0210f670;
extern M2C_UNK gti2CloseAllConnectionsHardMap;

void gt2CloseAllConnectionsHard(void *arg0) {
    if (data_0210f670 == 1) {
        return;
    }
    data_0210f670 = 1;
    func_0205bf70(M2C_FIELD(arg0, s32 *, 0xC), &gti2CloseAllConnectionsHardMap, 0);
    data_0210f670 = 0;
}
