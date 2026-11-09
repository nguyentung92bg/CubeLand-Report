/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$Awake
void Rotatelab_Boosters_VacuumBoosterController__Awake (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$Awake
   void Rotatelab_Boosters_VacuumBoosterController__Awake
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__Awake_1137b10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar7 = (char *)(_UNK_01147e50 + 0x1147b30);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147e54 + 0x1147b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147e58 + 0x1147b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01147e5c + 0x1147b5c));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_60,*(int *)(param_1 + 0x10),0);
  iVar8 = *(int *)(param_1 + 0x40);
  *(ulonglong *)(param_1 + 0x5c) = CONCAT44(uStack_5c,uStack_60);
  *(undefined4 *)(param_1 + 100) = uStack_58;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = uStack_58;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x5c) + -6.0;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar8 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar8 + 0x14),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_48,iVar8,0);
  *(undefined4 *)(param_1 + 0x50) = uStack_40;
  *(undefined8 *)(param_1 + 0x48) = uStack_48;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_Renderer__get_materials_35c59a8(*(int *)(param_1 + 0x24),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar8 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar8 + 0x14);
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_Animations_Rigging_RigConstraint_ChainIKConstraintJob__ChainIKConstraintData__object___get_data_1a85e28
                    (*(int *)(param_1 + 0x38),**(undefined4 **)(_UNK_01147e60 + 0x1147c84));
  iVar8 = *(int *)(iVar8 + 4);
  uVar12 = 0;
  uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar15 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  while( true ) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = (undefined4 *)
             UnityEngine_Animations_Rigging_RigConstraint_ChainIKConstraintJob__ChainIKConstraintData__object___get_data_1a85e28
                       (*(int *)(param_1 + 0x38),**(undefined4 **)(_UNK_01147e6c + 0x1147cb4));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Transform__IsChildOf_3617490(iVar8,*puVar5,0);
    if (iVar6 == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    UnityEngine_Transform__get_localRotation_3614f58(&uStack_60,iVar8,0);
    uVar4 = uStack_54;
    uVar3 = uStack_58;
    uVar2 = uStack_5c;
    uVar1 = uStack_60;
    uStack_50 = 0;
    uStack_60 = uVar12;
    uStack_5c = uVar13;
    uStack_58 = uVar14;
    uStack_54 = uVar15;
    System_ValueTuple_object__Quaternion____ctor_1d54580
              (&uStack_60,iVar8,uVar1,uVar2,uVar3,uVar4,**(undefined4 **)(_UNK_01147e64 + 0x1147d40)
              );
    if (iVar6 == 0) break;
    iVar10 = *(int *)(iVar6 + 8);
    uVar11 = *(uint *)(iVar6 + 0xc);
    iVar9 = **(int **)(_UNK_01147e68 + 0x1147d88);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar11 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar11 + 1;
      iVar10 = iVar10 + uVar11 * 0x14;
      *(undefined4 *)(iVar10 + 0x10) = uStack_60;
      *(undefined4 *)(iVar10 + 0x20) = uStack_50;
      *(undefined4 *)(iVar10 + 0x14) = uStack_5c;
      *(undefined4 *)(iVar10 + 0x18) = uStack_58;
      *(undefined4 *)(iVar10 + 0x1c) = uStack_54;
      thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x10),0);
    }
    else {
      System_Collections_Generic_List_ValueTuple_object__Quaternion____AddWithResize_25b9a10
                (iVar6,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                 *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = UnityEngine_Transform__get_parent_36148d8(iVar8,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

