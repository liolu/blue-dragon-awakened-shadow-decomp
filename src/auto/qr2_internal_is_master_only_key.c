#include "m2c.h"

s32 strcmp(M2C_UNK, s32);                    /* extern */
extern M2C_UNK qr2_registered_key_list;

s32 qr2_internal_is_master_only_key(M2C_UNK arg0) {
    if ((strcmp(arg0, M2C_FIELD(&qr2_registered_key_list, s32 *, 0x7C)) == 0) ||
        (strcmp(arg0, M2C_FIELD(&qr2_registered_key_list, s32 *, 0x80)) == 0)) {
        return 1;
    }
    return 0;
}
