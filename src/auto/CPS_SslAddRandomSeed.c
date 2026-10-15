#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
M2C_UNK SHA1Init(M2C_UNK *);                   /* extern */
M2C_UNK SHA1Update(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK SHA1Final(M2C_UNK *, M2C_UNK *);        /* extern */
extern s8 sPoolSeeded;
extern M2C_UNK sPool;

void CPS_SslAddRandomSeed(M2C_UNK *arg0, M2C_UNK arg1) {
    u8 sp0[92];
    s32 temp_r4;

    SHA1Init(sp0);
    temp_r4 = OS_DisableInterrupts();
    SHA1Update(sp0, &sPool, 0x14);
    SHA1Update(sp0, arg0, arg1);
    SHA1Final(sp0, &sPool);
    OS_RestoreInterrupts(temp_r4);
    sPoolSeeded = 1;
}
