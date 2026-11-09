/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GetHpFaceDimension
float Rotatelab_Scripts_MergedBlockController__GetHpFaceDimension (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3_o hpTextDirection, UnityEngine_Vector3_o size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$GetHpFaceDimension
   float Rotatelab_Scripts_MergedBlockController__GetHpFaceDimension
   (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3_o hpTextDirection,
   UnityEngine_Vector3_o size, const MethodInfo* method); */

float Rotatelab_Scripts_MergedBlockController__GetHpFaceDimension_101b29c
                (undefined4 param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                float param_6,float param_7)

{
  float fVar1;
  
  if (ABS(param_2) <= _UNK_0102b30c) {
    if (ABS(param_3) <= _UNK_0102b30c) {
      fVar1 = param_6;
      if (param_5 < param_6) {
        fVar1 = param_5;
      }
    }
    else {
      fVar1 = param_7;
      if (param_5 < param_7) {
        fVar1 = param_5;
      }
    }
  }
  else {
    fVar1 = param_7;
    if (param_6 < param_7) {
      fVar1 = param_6;
    }
  }
  return fVar1;
}

