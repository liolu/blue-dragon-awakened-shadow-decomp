#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SSLi_HashKeyMaterialBlock(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK sLabelA;
extern M2C_UNK sLabelBB;
extern M2C_UNK sLabelCCC;

void SSLi_GenerateMasterSecret(M2C_UNK arg0) {
    u8 sp20[16];
    u8 sp10[16];
    u8 sp0[16];

    SSLi_HashKeyMaterialBlock(sp0, &sLabelA, arg0);
    SSLi_HashKeyMaterialBlock(sp10, &sLabelBB, arg0);
    SSLi_HashKeyMaterialBlock(sp20, &sLabelCCC, arg0);
    MI_CpuCopy8(sp0, arg0, 0x30);
}
