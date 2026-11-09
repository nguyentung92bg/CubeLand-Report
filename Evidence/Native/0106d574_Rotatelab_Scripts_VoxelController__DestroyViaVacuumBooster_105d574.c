/* IL2CPP: Rotatelab.Scripts.VoxelController$$DestroyViaVacuumBooster
void Rotatelab_Scripts_VoxelController__DestroyViaVacuumBooster (Rotatelab_Scripts_VoxelController_o* __this, UnityEngine_Transform_o* hoseTip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$DestroyViaVacuumBooster
   void Rotatelab_Scripts_VoxelController__DestroyViaVacuumBooster
   (Rotatelab_Scripts_VoxelController_o* __this, UnityEngine_Transform_o* hoseTip, const MethodInfo*
   method); */

void Rotatelab_Scripts_VoxelController__DestroyViaVacuumBooster_105d574(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  
  pcVar10 = (char *)(_UNK_0106dc70 + 0x106d598);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc74 + 0x106d5ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc78 + 0x106d5b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc7c + 0x106d5c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc80 + 0x106d5d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc84 + 0x106d5dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc88 + 0x106d5e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc8c + 0x106d5f4));
    *pcVar10 = '\x01';
  }
  fStack_74 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_70 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_6c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_78 = 0.0;
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar6,0,1,0);
  puVar13 = *(undefined4 **)(_UNK_0106dc90 + 0x106d644);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  uVar7 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__RemoveFromGrid_1107024(iVar6,param_1,uVar7,0);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  uVar7 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__ShowTargetablesAdjacentToCells_1108600(iVar6,uVar7,0);
  PrimeTween_Sequence__Create_2cef1e0(&fStack_88,1,0,1,0,0,0);
  fStack_78 = fStack_88;
  fStack_74 = (float)uStack_84;
  fStack_70 = (float)uStack_80;
  iStack_6c = uStack_7c;
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_b0,iVar6,0);
  fVar4 = fStack_a8;
  fVar2 = fStack_ac;
  fVar1 = fStack_b0;
  iVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_b0,iVar6,0);
  fVar17 = fStack_a8;
  fVar16 = fStack_ac;
  fVar15 = fStack_b0;
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0106dc94 + 0x106d780));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_b0,*(int *)(iVar6 + 0x50),0);
  fVar5 = fStack_a8;
  fVar3 = fStack_ac;
  fVar14 = fStack_b0;
  pcVar10 = (char *)(_UNK_0106dc98 + 0x106d7cc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dc9c + 0x106d7e0));
    *pcVar10 = '\x01';
  }
  pcVar10 = (char *)(_UNK_0106dca0 + 0x106d7f4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106dca4 + 0x106d808));
    *pcVar10 = '\x01';
  }
  fVar17 = fVar17 - fVar5;
  fVar16 = fVar16 - fVar3;
  fVar15 = fVar15 - fVar14;
  if (*(int *)(**(int **)(_UNK_0106dca8 + 0x106d828) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar14 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17);
  if (fVar14 <= _UNK_0106d868) {
    pfVar8 = *(float **)(**(int **)(_UNK_0106dcac + 0x106d878) + 0x5c);
    fVar15 = *pfVar8;
    fVar16 = pfVar8[1];
    fVar17 = pfVar8[2];
  }
  else {
    fVar17 = fVar17 / fVar14;
    fVar16 = fVar16 / fVar14;
    fVar15 = fVar15 / fVar14;
  }
  fVar14 = (float)UnityEngine_Random__Range_35f8ac0(0x3dcccccd,0x3f333333,0);
  uVar9 = UnityEngine_Random__Range_35f8ac0(0x3d8f5c29,0x3e19999a,0);
  if (*(int *)(**(int **)(_UNK_0106dcb0 + 0x106d8ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Position_2ce50e8
            (&fStack_b0,uVar7,fVar1 + fVar15 * fVar14,fVar2 + fVar16 * fVar14,
             fVar4 + fVar17 * fVar14,uVar9,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_98,&fStack_78,fStack_b0,fStack_ac,fStack_a8,iStack_a4,0);
  fStack_78 = fStack_98;
  fStack_74 = (float)uStack_94;
  fStack_70 = (float)uStack_90;
  iStack_6c = uStack_8c;
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_b0,param_2,0);
  fVar4 = fStack_a8;
  fVar2 = fStack_ac;
  fVar1 = fStack_b0;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_b0,5,0);
  PrimeTween_Tween__Position_2ce50e8
            (&fStack_b0,uVar7,fVar1,fVar2,fVar4,0x3e99999a,fStack_b0,fStack_ac,fStack_a8,iStack_a4,
             uStack_a0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_c0,&fStack_78,fStack_b0,fStack_ac,fStack_a8,iStack_a4,0);
  fStack_78 = fStack_c0;
  fStack_74 = (float)uStack_bc;
  fStack_70 = (float)uStack_b8;
  iStack_6c = uStack_b4;
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  UnityEngine_Random__get_rotation_35f8cb4(&fStack_b0,0);
  iVar6 = iStack_a4;
  fVar4 = fStack_a8;
  fVar2 = fStack_ac;
  fVar1 = fStack_b0;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_b0,5,0);
  PrimeTween_Tween__LocalRotation_2ce631c
            (&fStack_b0,uVar7,fVar1,fVar2,fVar4,iVar6,0x3e99999a,fStack_b0,fStack_ac,fStack_a8,
             iStack_a4,uStack_a0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&fStack_d0,&fStack_78,fStack_b0,fStack_ac,fStack_a8,iStack_a4,0);
  fStack_78 = fStack_d0;
  fStack_74 = (float)uStack_cc;
  fStack_70 = (float)uStack_c8;
  iStack_6c = uStack_c4;
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_b0,5,0);
  PrimeTween_Tween__Scale_2ce4684
            (&fStack_b0,uVar7,0x3e800000,0x3e99999a,fStack_b0,fStack_ac,fStack_a8,iStack_a4,
             uStack_a0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&fStack_b0,&fStack_78,fStack_b0,fStack_ac,fStack_a8,iStack_a4,0);
  piVar11 = *(int **)(_UNK_0106dcb4 + 0x106db94);
  iVar6 = *piVar11;
  fStack_78 = fStack_b0;
  fStack_74 = fStack_ac;
  fStack_70 = fStack_a8;
  iStack_6c = iStack_a4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar11;
  }
  puVar13 = *(undefined4 **)(iVar6 + 0x5c);
  iVar12 = puVar13[1];
  if (iVar12 == 0) {
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      puVar13 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar7 = *puVar13;
    iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106dcb8 + 0x106dbe4));
    System_Action_object____ctor_1f11414
              (iVar12,uVar7,**(undefined4 **)(_UNK_0106dcbc + 0x106dc04),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar11 = iVar12;
    thunk_FUN_00ec5080(piVar11,iVar12);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&fStack_b0,&fStack_78,param_1,iVar12,0,**(undefined4 **)(_UNK_0106dcc0 + 0x106dc34));
  param_1[10] = (int)fStack_b0;
  param_1[0xb] = (int)fStack_ac;
  param_1[0xc] = (int)fStack_a8;
  param_1[0xd] = iStack_a4;
  thunk_FUN_00ec5080(param_1 + 0xc,0);
  return;
}

