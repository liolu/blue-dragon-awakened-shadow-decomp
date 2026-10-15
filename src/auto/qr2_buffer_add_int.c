#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK qr2_buffer_addA(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020fcacc;

void qr2_buffer_add_int(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[20];

    func_020068c0(sp0, &data_020fcacc, arg1);
    qr2_buffer_addA(arg0, sp0);
}
