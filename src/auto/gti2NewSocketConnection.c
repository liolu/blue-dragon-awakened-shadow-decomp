#include "m2c.h"

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 ArrayNew(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK ArrayFree();                            /* extern */
M2C_UNK TableEnter(s32, void **);                /* extern */
s32 current_time();                                /* extern */
M2C_UNK gsifree(void *);                      /* extern */
s32 gti2AllocateBuffer(void *, s32);                     /* extern */
s32 gti2SocketFindConnection(void *, s32, s16);                /* extern */
void *gti2CreateConnectionObject();                              /* extern */

s32 gti2NewSocketConnection(void *arg0, s32 *arg1, s32 arg2, s16 arg3) {
    void *sp0;
    s32 temp_r0_2;
    void *temp_r0;

    sp0 = NULL;
    if (gti2SocketFindConnection(arg0, arg2, arg3) != 0) {
        return 5;
    }
    temp_r0 = gti2CreateConnectionObject();
    sp0     = temp_r0;
    if (temp_r0 != NULL) {
        memset(temp_r0, 0, 0xA0);
        M2C_FIELD(sp0, s32 *, 0)    = arg2;
        M2C_FIELD(sp0, s16 *, 4)    = arg3;
        M2C_FIELD(sp0, void **, 8)  = arg0;
        M2C_FIELD(sp0, s32 *, 0x1C) = current_time();
        M2C_FIELD(sp0, s32 *, 0x88) = (s32) M2C_FIELD(sp0, s32 *, 0x1C);
        M2C_FIELD(sp0, s16 *, 0x64) = 0;
        M2C_FIELD(sp0, s16 *, 0x66) = 0;
        if ((gti2AllocateBuffer(sp0 + 0x44, M2C_FIELD(arg0, s32 *, 0x3C)) != 0) &&
            (gti2AllocateBuffer(sp0 + 0x50, M2C_FIELD(arg0, s32 *, 0x38)) != 0)) {
            M2C_FIELD(sp0, s32 *, 0x5C) = ArrayNew(0x10, 0x40, 0);
            if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
                M2C_FIELD(sp0, s32 *, 0x60) = ArrayNew(0x10, 0x40, 0);
                if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
                    M2C_FIELD(sp0, s32 *, 0x98) = ArrayNew(4, 2, 0);
                    if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
                        M2C_FIELD(sp0, s32 *, 0x9C) = ArrayNew(4, 2, 0);
                        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
                            TableEnter(M2C_FIELD(arg0, s32 *, 0xC), &sp0);
                            temp_r0_2 = gti2SocketFindConnection(arg0, arg2, arg3);
                            *arg1     = temp_r0_2;
                            if (temp_r0_2 != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (sp0 != NULL) {
        gsifree(M2C_FIELD(sp0, void **, 0x44));
        gsifree(M2C_FIELD(sp0, void **, 0x50));
        if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
            ArrayFree();
        }
        if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
            ArrayFree();
        }
        if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
            ArrayFree();
        }
        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
            ArrayFree();
        }
        gsifree(sp0);
    }
    return 1;
}
