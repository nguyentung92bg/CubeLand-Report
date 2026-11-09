/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$.ctor
void Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey___ctor (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this, UnityEngine_Vector3_o size, float radius, int32_t segments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$.ctor
   void Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey___ctor
   (Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey_o __this, UnityEngine_Vector3_o size, float
   radius, int32_t segments, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey___ctor_101b310
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize_101d0b0(param_2);
  *param_1 = uVar1;
  uVar1 = Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize_101d0b0(param_3);
  param_1[1] = uVar1;
  uVar1 = Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize_101d0b0(param_4);
  param_1[2] = uVar1;
  uVar1 = Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize_101d0b0(param_5);
  param_1[3] = uVar1;
  param_1[4] = param_6;
  return;
}

