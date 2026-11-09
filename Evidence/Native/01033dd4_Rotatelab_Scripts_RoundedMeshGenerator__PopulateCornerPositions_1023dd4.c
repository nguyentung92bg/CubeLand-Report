/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$PopulateCornerPositions
void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCornerPositions (UnityEngine_Vector3_array* cornerPositions, int32_t ix, int32_t iy, int32_t iz, Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$PopulateCornerPositions
   void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCornerPositions (UnityEngine_Vector3_array*
   cornerPositions, int32_t ix, int32_t iy, int32_t iz,
   Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o grid, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator__PopulateCornerPositions_1023dd4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar6 = (char *)(_UNK_01033f78 + 0x1033df8);
  uStack_5c = param_12;
  uStack_68 = param_9;
  uStack_60 = param_11;
  uStack_64 = param_10;
  fStack_6c = param_8;
  uStack_78 = param_5;
  uStack_74 = param_6;
  uStack_70 = param_7;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033f7c + 0x1033e48));
    *pcVar6 = '\x01';
  }
  iVar4 = 0;
  Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid__GetPoint_1024b84
            (&fStack_84,&uStack_78,param_2,param_3,param_4,0);
  uVar3 = 0;
  piVar5 = *(int **)(_UNK_01033f80 + 0x1033e8c);
  while( true ) {
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(iVar1 + 0x5c) + 0xc) <= (int)uVar3) {
      return;
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = iVar1 + iVar4;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(param_1 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = param_1 + iVar4;
    iVar4 = iVar4 + 0xc;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = uVar3 + 1;
    fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar2 + 0x18) = fStack_7c + fStack_6c * fVar7;
    *(float *)(iVar2 + 0x14) = fStack_80 + fStack_6c * fVar8;
    *(float *)(iVar2 + 0x10) = fStack_84 + fStack_6c * fVar9;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

