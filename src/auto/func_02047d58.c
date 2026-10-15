#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                         /* extern */
s32 DWC_BM_Init(M2C_UNK);                         /* extern */
M2C_UNK DWCi_AUTH_MakeWiFiID(M2C_UNK);                     /* extern */
s32 DWC_Auth_CheckWiFiIDNeedCreate();                                /* extern */
M2C_UNK func_0205cb04(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK DWCi_GsMalloc;
extern M2C_UNK DWCi_GsRealloc;
extern M2C_UNK DWCi_GsFree;
extern M2C_UNK DWCi_GsMemalign;

s32 func_02047d58(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r4;
    s32 var_r5;

    var_r5 = 0;
    OSi_ReferSymbol(0x02000C34);
    temp_r4 = DWC_BM_Init(arg0);
    if (DWC_Auth_CheckWiFiIDNeedCreate() != 0) {
        DWCi_AUTH_MakeWiFiID(arg0);
        var_r5 = 1;
    }
    if (temp_r4 < 0) {
        if (var_r5 != 0) {
            var_r4 = 2;
        } else {
            var_r4 = 3;
        }
    } else if (var_r5 != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_0205cb04(&DWCi_GsMalloc, &DWCi_GsFree, &DWCi_GsRealloc, &DWCi_GsMemalign);
    return var_r4;
}
