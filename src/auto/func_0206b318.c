#include "m2c.h"

M2C_UNK closesocket(s32);                         /* extern */
M2C_UNK shutdown(s32, M2C_UNK);                /* extern */
M2C_UNK gsifree();                            /* extern */
M2C_UNK func_0206bc50();                            /* extern */
extern M2C_UNK enc;
extern M2C_UNK serverreqs;

void func_0206b318(void) {
    if (M2C_FIELD(&enc, s32 *, 4) != -1) {
        shutdown(M2C_FIELD(&enc, s32 *, 4), 2);
        closesocket(M2C_FIELD(&enc, s32 *, 4));
    }
    M2C_FIELD(&enc, s32 *, 4) = -1;
    func_0206bc50();
    if (M2C_FIELD(&serverreqs, s32 *, 0x28) == 0) {
        return;
    }
    gsifree();
    M2C_FIELD(&serverreqs, s32 *, 0x28) = 0;
    M2C_FIELD(&serverreqs, s32 *, 0x18) = 0;
    M2C_FIELD(&serverreqs, s32 *, 8)    = 0;
}
