#include "m2c.h"

M2C_UNK Sha1PutBigEndian(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK SHA1Update(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020f914d;

void SHA1FinalNoLength(M2C_UNK arg0, M2C_UNK arg1) {
    SHA1Update(arg0, &data_020f914d, 0x2C);
    Sha1PutBigEndian(arg1, arg0, 0x14);
}
