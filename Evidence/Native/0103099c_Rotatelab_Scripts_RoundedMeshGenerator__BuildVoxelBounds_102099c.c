/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildVoxelBounds
UnityEngine_Bounds_o Rotatelab_Scripts_RoundedMeshGenerator__BuildVoxelBounds (UnityEngine_Vector3Int_array* voxels, UnityEngine_Vector3Int_o min, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$BuildVoxelBounds
   UnityEngine_Bounds_o Rotatelab_Scripts_RoundedMeshGenerator__BuildVoxelBounds
   (UnityEngine_Vector3Int_array* voxels, UnityEngine_Vector3Int_o min, const MethodInfo* method);
    */

void Rotatelab_Scripts_RoundedMeshGenerator__BuildVoxelBounds_102099c
               (float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  piVar9 = (int *)(param_2 + 0x10);
  uVar10 = 0;
  iVar12 = 0x7fffffff;
  iVar7 = -0x80000000;
  iVar6 = -0x80000000;
  iVar5 = -0x80000000;
  iVar11 = 0x7fffffff;
  iVar8 = 0x7fffffff;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar10) break;
    if (*(uint *)(param_2 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1 = piVar9 + 2;
    uVar10 = uVar10 + 1;
    iVar2 = *piVar9;
    piVar13 = piVar9 + 1;
    piVar9 = piVar9 + 3;
    iVar3 = *piVar1 - param_5;
    if (iVar7 <= iVar3) {
      iVar7 = iVar3;
    }
    iVar4 = *piVar13 - param_4;
    iVar2 = iVar2 - param_3;
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    if (iVar3 <= iVar12) {
      iVar12 = iVar3;
    }
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
  fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar20 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = ((fVar15 + 0.5) - (fVar14 + -0.5)) * 0.5;
  fVar18 = ((fVar18 + 0.5) - (fVar17 + -0.5)) * 0.5;
  fVar15 = ((fVar20 + 0.5) - (fVar19 + -0.5)) * 0.5;
  param_1[5] = fVar16;
  param_1[4] = fVar18;
  param_1[3] = fVar15;
  param_1[2] = fVar14 + -0.5 + fVar16;
  param_1[1] = fVar17 + -0.5 + fVar18;
  *param_1 = fVar19 + -0.5 + fVar15;
  return;
}

