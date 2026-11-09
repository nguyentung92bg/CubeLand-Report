/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$Initialize
void Rotatelab_Scripts_DoubleLargeVoxelController__Initialize (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this, Rotatelab_DoubleLargeVoxelData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$Initialize
   void Rotatelab_Scripts_DoubleLargeVoxelController__Initialize
   (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this, Rotatelab_DoubleLargeVoxelData_o* data,
   const MethodInfo* method); */

void Rotatelab_Scripts_DoubleLargeVoxelController__Initialize_1018a78(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_48;
  int iStack_44;
  
  *(undefined4 *)(param_1 + 0x38) = 2;
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LargeVoxelController__Initialize_10136d4
            (*(int *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LargeVoxelController__Initialize_10136d4
            (*(int *)(param_1 + 0x24),*(undefined4 *)(param_2 + 0x24));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  iVar8 = *(int *)(param_2 + 0x20);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar1,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),
             *(undefined4 *)(iVar8 + 0x14));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  iVar8 = *(int *)(param_2 + 0x24);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc
            (iVar1,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10),
             *(undefined4 *)(iVar8 + 0x14));
  if (*(int *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_MergedBlockController__GenerateTwoColorMesh_1018c34
            (param_1,*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x2c),
             *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c),0x3f800000);
  pcVar5 = (char *)(_UNK_010290c8 + 0x1028d4c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010290cc + 0x1028d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010290d0 + 0x1028d6c));
    *pcVar5 = '\x01';
  }
  piVar13 = *(int **)(_UNK_010290d4 + 0x1028d88);
  puVar11 = (undefined4 *)(param_1 + 0x3c);
  uVar6 = *puVar11;
  iStack_44 = 0;
  fStack_48 = 0.0;
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  if (iVar1 != 0) {
    uVar6 = *puVar11;
    if (*(int *)(*piVar13 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar6,0);
    *puVar11 = 0;
    thunk_FUN_00ec5080(puVar11,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  uVar9 = *(undefined4 *)(iVar1 + 0x1c);
  uVar12 = *(undefined4 *)(iVar1 + 0x20);
  iVar8 = *(int *)(param_2 + 0x24);
  uVar18 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(iVar8 + 0x1c);
  uVar16 = *(undefined4 *)(iVar8 + 0xc);
  uVar15 = *(undefined4 *)(iVar8 + 0x10);
  uVar14 = *(undefined4 *)(iVar8 + 0x14);
  uVar17 = *(undefined4 *)(iVar8 + 0x18);
  uVar10 = *(undefined4 *)(iVar8 + 0x20);
  if (*(int *)(**(int **)(_UNK_010290d8 + 0x1028e64) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = Rotatelab_Scripts_SeamRibbonMeshGenerator__TryDetectSeam_1024bc8
                    (uVar18,uVar6,uVar3,uVar4,uVar9,uVar12,uVar16,uVar15,uVar14,uVar17,uVar7,uVar10,
                     &iStack_44,&fStack_48,0);
  iVar1 = iStack_44;
  if (iVar8 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  else {
    if (iStack_44 == 0) {
      pfVar2 = (float *)(param_2 + 8);
    }
    else if (iStack_44 == 2) {
      pfVar2 = (float *)(param_2 + 0x10);
    }
    else {
      if (iStack_44 != 1) {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010290dc + 0x1029088));
        uVar6 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010290e0 + 0x102909c));
        System_IndexOutOfRangeException___ctor_2b69538(uVar6,uVar3,0);
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010290e4 + 0x10290b8));
        func_0x00ec3920(uVar6,uVar3);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      pfVar2 = (float *)(param_2 + 0xc);
    }
    fVar19 = *(float *)(param_2 + 0x14);
    fVar20 = *(float *)(param_2 + 0x18);
    fVar21 = *(float *)(param_2 + 0x1c);
    fVar22 = fStack_48 - *pfVar2;
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    if (*(int *)(**(int **)(_UNK_010290e8 + 0x1028f78) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = Rotatelab_Scripts_SeamRibbonMeshGenerator__Generate_1024d70
                      (fVar19 + fVar19,fVar20 + fVar20,fVar21 + fVar21,iVar1,fVar22,uVar6,8,uVar3,0)
    ;
    *puVar11 = uVar6;
    thunk_FUN_00ec5080(puVar11,uVar6);
    uVar6 = *puVar11;
    if (*(int *)(**(int **)(_UNK_010290ec + 0x1028fe0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MeshFilter__set_sharedMesh_35ce1a4
                (*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),0);
      iVar1 = *(int *)(param_1 + 0x2c);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = 1;
      goto LAB_01029064;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = 0;
LAB_01029064:
  UnityEngine_Renderer__set_enabled_35c51f8(iVar1,uVar6,0);
  return;
}

