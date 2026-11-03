/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void *WCM_PointApList(u16 idx);
void WCM_LockApList(s32 v);
s32 WCM_CountApList(void);
void MIi_CpuCopy32(void *src, void *dst, s32 size);

s32 func_ov001_0216a4dc(u8 *dst, s32 lim) {
    s32 cnt;
    s32 i;

    WCM_LockApList(1);
    cnt = WCM_CountApList();
    if (cnt > 0) {
        i = 0;
        if (cnt > 0) {
            do {
                if (i >= lim) {
                    break;
                }
                MIi_CpuCopy32(WCM_PointApList((u16) i), dst, 0xC0);
                i++;
                dst += 0xC0;
            } while (i < cnt);
        }
    }
    WCM_LockApList(0);
    return cnt;
}
