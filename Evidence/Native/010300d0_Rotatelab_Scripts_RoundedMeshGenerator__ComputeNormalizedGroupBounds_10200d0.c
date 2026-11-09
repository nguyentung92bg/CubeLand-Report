/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ComputeNormalizedGroupBounds
void Rotatelab_Scripts_RoundedMeshGenerator__ComputeNormalizedGroupBounds (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels, UnityEngine_Vector3Int_o min, UnityEngine_Bounds_o* group1Bounds, UnityEngine_Bounds_o* group2Bounds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$ComputeNormalizedGroupBounds
   void Rotatelab_Scripts_RoundedMeshGenerator__ComputeNormalizedGroupBounds
   (UnityEngine_Vector3Int_array* group1Voxels, UnityEngine_Vector3Int_array* group2Voxels,
   UnityEngine_Vector3Int_o min, UnityEngine_Bounds_o* group1Bounds, UnityEngine_Bounds_o*
   group2Bounds, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__ComputeNormalizedGroupBounds_10200d0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar1 = (char *)(_UNK_01030198 + 0x10300f0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103019c + 0x1030108));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010301a0 + 0x1030124) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_RoundedMeshGenerator__BuildVoxelBounds_102099c
            (&uStack_40,param_1,param_3,param_4,param_5);
  *param_6 = uStack_40;
  param_6[1] = uStack_38;
  param_6[2] = uStack_30;
  Rotatelab_Scripts_RoundedMeshGenerator__BuildVoxelBounds_102099c
            (&uStack_58,param_2,param_3,param_4,param_5);
  *param_7 = uStack_58;
  param_7[1] = uStack_50;
  param_7[2] = uStack_48;
  return;
}

