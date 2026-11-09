/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$DistanceToFaceRect
float Rotatelab_Scripts_RoundedMeshGenerator__DistanceToFaceRect (UnityEngine_Vector3_o point, UnityEngine_Vector3Int_o voxel, int32_t axis, int32_t sign, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$DistanceToFaceRect
   float Rotatelab_Scripts_RoundedMeshGenerator__DistanceToFaceRect (UnityEngine_Vector3_o point,
   UnityEngine_Vector3Int_o voxel, int32_t axis, int32_t sign, const MethodInfo* method); */

float Rotatelab_Scripts_RoundedMeshGenerator__DistanceToFaceRect_1024150
                (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = param_4;
  uVar2 = param_5;
  uVar3 = param_6;
  fVar4 = param_1;
  fVar5 = param_3;
  fVar7 = param_2;
  if ((param_7 != 0) &&
     (uVar1 = param_6, uVar2 = param_4, uVar3 = param_5, fVar4 = param_3, fVar5 = param_2,
     fVar7 = param_1, param_7 == 1)) {
    uVar1 = param_5;
    uVar3 = param_6;
    fVar4 = param_2;
    fVar5 = param_3;
  }
  fVar6 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = ABS(fVar7 - fVar6) + -0.5;
  fVar5 = ABS(fVar5 - fVar8) + -0.5;
  fVar4 = fVar4 - (fVar9 + fVar10 * 0.5);
  if (fVar7 < 0.0) {
    fVar7 = _UNK_01034238;
  }
  if (fVar5 < 0.0) {
    fVar5 = _UNK_01034238;
  }
  return SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
}

