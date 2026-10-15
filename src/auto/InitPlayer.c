#include "m2c.h"

M2C_UNK NNSi_SndFaderInit(void *);                      /* extern */
M2C_UNK NNSi_SndFaderSet(void *, M2C_UNK, M2C_UNK);    /* extern */

void InitPlayer(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    NNSi_SndFaderInit(arg0 + 0x1C);
    NNSi_SndFaderSet(arg0 + 0x1C, 0x7F00, 1);
}
