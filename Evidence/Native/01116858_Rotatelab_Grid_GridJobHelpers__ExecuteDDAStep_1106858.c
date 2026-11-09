/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$ExecuteDDAStep
bool Rotatelab_Grid_GridJobHelpers__ExecuteDDAStep (Unity_Mathematics_float3_o* tMax, Unity_Mathematics_float3_o* tDelta, Unity_Mathematics_int3_o* currentCell, Unity_Mathematics_int3_o* step, Unity_Mathematics_int3_o* gridSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$ExecuteDDAStep
   bool Rotatelab_Grid_GridJobHelpers__ExecuteDDAStep (Unity_Mathematics_float3_o* tMax,
   Unity_Mathematics_float3_o* tDelta, Unity_Mathematics_int3_o* currentCell,
   Unity_Mathematics_int3_o* step, Unity_Mathematics_int3_o* gridSize, const MethodInfo* method); */

undefined4
Rotatelab_Grid_GridJobHelpers__ExecuteDDAStep_1106858
          (float *param_1,float *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *param_1;
  pfVar3 = param_1 + 2;
  fVar5 = param_1[1];
  fVar4 = param_1[2];
  if (fVar5 <= fVar6) {
    if (fVar4 <= fVar5) goto LAB_011168cc;
    pfVar3 = param_1 + 1;
    param_3[1] = param_4[1] + param_3[1];
    param_2 = param_2 + 1;
  }
  else {
    if (fVar6 < fVar4) {
      fVar5 = *param_2;
      iVar2 = *param_4 + *param_3;
      *param_3 = iVar2;
      *param_1 = fVar6 + fVar5;
      goto LAB_011168f0;
    }
LAB_011168cc:
    param_3[2] = param_4[2] + param_3[2];
    param_2 = param_2 + 2;
    fVar5 = fVar4;
  }
  iVar2 = *param_3;
  *pfVar3 = fVar5 + *param_2;
LAB_011168f0:
  uVar1 = 0;
  if ((((-1 < iVar2) && (iVar2 < *param_5)) && (-1 < param_3[1])) && (param_3[1] < param_5[1])) {
    if (param_3[2] < 0) {
      return 0;
    }
    if (param_3[2] < param_5[2]) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

