/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$Initialize
void Rotatelab_Scripts_ShrinkingCoverController__Initialize (Rotatelab_Scripts_ShrinkingCoverController_o* __this, Rotatelab_ShrinkingCoverData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$Initialize
   void Rotatelab_Scripts_ShrinkingCoverController__Initialize
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, Rotatelab_ShrinkingCoverData_o* data,
   const MethodInfo* method); */

void Rotatelab_Scripts_ShrinkingCoverController__Initialize_1050b34(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01060eb8 + 0x1060b50);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ebc + 0x1060b64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ec0 + 0x1060b70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ec4 + 0x1060b7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ec8 + 0x1060b88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ecc + 0x1060b94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ed0 + 0x1060ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060ed4 + 0x1060bac));
    *pcVar9 = '\x01';
  }
  param_1[0xe] = param_2;
  thunk_FUN_00ec5080(param_1 + 0xe,param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_2 + 0x34) + 0xc) == 0) {
    pcVar9 = (char *)(_UNK_01060ed8 + 0x1060c6c);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01060edc + 0x1060c80));
      *pcVar9 = '\x01';
    }
    puVar6 = *(undefined4 **)(**(int **)(_UNK_01060ee0 + 0x1060c94) + 0x5c);
    uStack_34 = *puVar6;
    uStack_30 = puVar6[1];
    uStack_2c = puVar6[2];
    uStack_28 = puVar6[3];
  }
  else {
    iVar10 = *(int *)(param_2 + 0x34);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(int *)(iVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_HpTextData__get_Rotation_1070db8(&uStack_34,*(int *)(iVar10 + 0x10),0);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetLocalPositionAndRotation_3615d88
            (iVar1,uVar2,uVar3,uVar4,uStack_34,uStack_30,uStack_2c,uStack_28,0);
  piVar5 = (int *)param_1[4];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
    param_1[0xf] = 0;
  }
  else {
    iVar1 = **(int **)(_UNK_01060ee4 + 0x1060ce0);
    uVar7 = (uint)*(byte *)(iVar1 + 0xb8);
    piVar11 = (int *)0x0;
    if ((uVar7 <= *(byte *)(*piVar5 + 0xb8)) &&
       (piVar11 = piVar5, *(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) != iVar1)) {
      piVar11 = (int *)0x0;
    }
    param_1[0xf] = (int)piVar11;
    if (*(byte *)(*piVar5 + 0xb8) < uVar7) {
      piVar5 = (int *)0x0;
    }
    else if (*(int *)(*(int *)(*piVar5 + 100) + uVar7 * 4 + -4) != iVar1) {
      piVar5 = (int *)0x0;
    }
  }
  thunk_FUN_00ec5080(param_1 + 0xf,piVar5);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  iVar1 = *(int *)(param_2 + 0x30);
  param_1[0x23] = 0x40000000;
  pcVar8 = *(code **)(*param_1 + 0x108);
  uVar2 = *(undefined4 *)(*param_1 + 0x10c);
  param_1[0x22] = 0x41a00000;
  param_1[0x1a] = iVar1;
  param_1[0x1b] = iVar1;
  (*pcVar8)(param_1,uVar3,uVar2);
  Rotatelab_Scripts_ShrinkingCoverController__UpdateSize_1050f00(param_1);
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(undefined4 *)(param_1[0xe] + 0x38);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01060ee8 + 0x1060db0));
  System_Collections_Generic_List_Vector3Int____ctor_26ff2dc
            (iVar1,uVar2,**(undefined4 **)(_UNK_01060eec + 0x1060dcc));
  piVar5 = param_1 + 0x25;
  *piVar5 = iVar1;
  thunk_FUN_00ec5080(piVar5,iVar1);
  piVar11 = *(int **)(_UNK_01060ef0 + 0x1060df4);
  iVar10 = *piVar5;
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x5c);
  iVar12 = puVar6[1];
  if (iVar12 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar2 = *puVar6;
    iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01060ef4 + 0x1060e40));
    System_Comparison_Vector3Int____ctor_1f27f84
              (iVar12,uVar2,**(undefined4 **)(_UNK_01060ef8 + 0x1060e60),0);
    piVar5 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
    *piVar5 = iVar12;
    thunk_FUN_00ec5080(piVar5,iVar12);
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_Vector3Int___Sort_2701958
            (iVar10,iVar12,**(undefined4 **)(_UNK_01060efc + 0x1060e98));
  Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,1,0);
  return;
}

