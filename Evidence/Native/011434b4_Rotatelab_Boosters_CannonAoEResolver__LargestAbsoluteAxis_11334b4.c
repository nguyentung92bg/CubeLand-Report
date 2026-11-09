/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$LargestAbsoluteAxis
int32_t Rotatelab_Boosters_CannonAoEResolver__LargestAbsoluteAxis (UnityEngine_Vector3_o v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Boosters.CannonAoEResolver$$LargestAbsoluteAxis
   int32_t Rotatelab_Boosters_CannonAoEResolver__LargestAbsoluteAxis (UnityEngine_Vector3_o v, const
   MethodInfo* method); */

undefined4
Rotatelab_Boosters_CannonAoEResolver__LargestAbsoluteAxis_11334b4
          (float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (ABS(param_2) < ABS(param_3)) {
    uVar2 = 2;
  }
  uVar1 = uVar2;
  if (ABS(param_3) <= ABS(param_1)) {
    uVar1 = 0;
  }
  if (ABS(param_1) < ABS(param_2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

