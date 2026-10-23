#include "m2c.h"
extern u8 NNSi_G3dGetJointScaleSi3d[];
extern u8 NNSi_G3dGetJointScaleMaya[];
extern u8 NNSi_G3dGetJointScaleBasic[];
u32 NNS_G3dGetJointScale_FuncArray[3] = {(u32) &NNSi_G3dGetJointScaleBasic, (u32) &NNSi_G3dGetJointScaleMaya,
                                         (u32) &NNSi_G3dGetJointScaleSi3d};
