#include "m2c.h"

s32 _s32_div_f(s32, s32);                        /* extern */
M2C_UNK ArrayInsertAt(void *, M2C_UNK, s32);        /* extern */
s32 mybsearch(M2C_UNK, s32, s32, s32, s32, M2C_UNK *); /* extern */

void ArrayInsertSorted(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK sp8;

    ArrayInsertAt(arg0, arg1,
                  _s32_div_f(mybsearch(arg1, M2C_FIELD(arg0, volatile s32 *, 0x14), M2C_FIELD(arg0, volatile s32 *, 0),
                                       M2C_FIELD(arg0, volatile s32 *, 8), arg2, &sp8) -
                                 M2C_FIELD(arg0, volatile s32 *, 0x14),
                             M2C_FIELD(arg0, volatile s32 *, 8)));
}
