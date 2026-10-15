#include "m2c.h"

s32 qr2_internal_is_master_only_key(M2C_UNK *);                       /* extern */
M2C_UNK SBServerAddKeyValue(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 CheckValidKey(M2C_UNK *);                       /* extern */
M2C_UNK *mytok(s32, M2C_UNK);               /* extern */
extern M2C_UNK data_020fd100;

void SBServerParseKeyVals(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r8;
    M2C_UNK *var_r9;

    var_r8 = mytok(arg1 + 1, 0x5C);
    if (var_r8 == NULL) {
        return;
    }
    do {
        var_r9 = mytok(0, 0x5C);
        if (var_r9 == NULL) {
            var_r9 = &data_020fd100;
        }
        if ((CheckValidKey(var_r8) != 0) && (qr2_internal_is_master_only_key(var_r8) == 0)) {
            SBServerAddKeyValue(arg0, var_r8, var_r9);
        }
        var_r8 = mytok(0, 0x5C);
    } while (var_r8 != NULL);
}
