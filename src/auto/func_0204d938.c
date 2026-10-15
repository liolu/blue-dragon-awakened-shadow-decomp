#include "m2c.h"

M2C_UNK func_0204f1fc();                            /* extern */
M2C_UNK func_020504fc();                            /* extern */
M2C_UNK func_020513dc();                            /* extern */
M2C_UNK func_020513f0();                            /* extern */
M2C_UNK func_020515ec();                            /* extern */
M2C_UNK func_02053554();                            /* extern */
M2C_UNK func_02059c58();                            /* extern */
M2C_UNK gpDestroy(void *);                      /* extern */
M2C_UNK gpProcess(void *);                      /* extern */
M2C_UNK gpSetCallback(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0206b318();                            /* extern */
M2C_UNK gt2CloseSocket();                            /* extern */
M2C_UNK func_02071ccc();                            /* extern */
M2C_UNK func_020750b4();                            /* extern */
extern void *data_0210e738;

void func_0204d938(void) {
    if (data_0210e738 == NULL) {
        return;
    }
    if (M2C_FIELD(data_0210e738, s32 *, 0x388) != 0) {
        func_02071ccc();
        M2C_FIELD(data_0210e738, s32 *, 0x388) = 0;
    }
    M2C_FIELD(data_0210e738, s8 *, 0x390) = 0;
    if (M2C_FIELD(data_0210e738, s32 *, 0x45C) != 0) {
        func_020750b4();
        M2C_FIELD(data_0210e738, s32 *, 0x45C) = 0;
    }
    func_020515ec();
    func_020513dc();
    func_0206b318();
    func_020513f0();
    if (M2C_FIELD(data_0210e738, s32 *, 0x1C) != 0) {
        gpSetCallback(data_0210e738 + 0x1C, 0, 0, 0);
        gpSetCallback(data_0210e738 + 0x1C, 3, 0, 0);
        gpSetCallback(data_0210e738 + 0x1C, 1, 0, 0);
        gpSetCallback(data_0210e738 + 0x1C, 2, 0, 0);
        gpProcess(data_0210e738 + 0x1C);
        gpDestroy(data_0210e738 + 0x1C);
        M2C_FIELD(data_0210e738, s32 *, 0x1C) = 0;
    }
    func_0204f1fc();
    func_020504fc();
    func_02053554();
    func_02059c58();
    if (M2C_FIELD(data_0210e738, s32 *, 0) != 0) {
        gt2CloseSocket();
        M2C_FIELD(data_0210e738, s32 *, 0) = 0;
    }
    data_0210e738 = NULL;
}
