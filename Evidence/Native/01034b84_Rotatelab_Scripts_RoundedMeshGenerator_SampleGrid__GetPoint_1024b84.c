/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator.SampleGrid$$GetPoint
UnityEngine_Vector3_o Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint (Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o __this, int32_t ix, int32_t iy, int32_t iz, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator.SampleGrid$$GetPoint
   UnityEngine_Vector3_o Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint
   (Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o __this, int32_t ix, int32_t iy, int32_t iz,
   const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint_1024b84
               (float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_2[3];
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = param_2[1];
  fVar1 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = param_2[2];
  *param_1 = *param_2 + fVar6 * fVar2;
  param_1[1] = fVar4 + fVar6 * fVar3;
  param_1[2] = fVar5 + fVar6 * fVar1;
  return;
}

