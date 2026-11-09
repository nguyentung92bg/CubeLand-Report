/* IL2CPP: Rotatelab.UI.AdBreakController$$OnNoAdsTappedHandler
void Rotatelab_UI_AdBreakController__OnNoAdsTappedHandler (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$OnNoAdsTappedHandler
   void Rotatelab_UI_AdBreakController__OnNoAdsTappedHandler (Rotatelab_UI_AdBreakController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_AdBreakController__OnNoAdsTappedHandler_111792c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_011279f4 + 0x1127940);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011279f8 + 0x1127954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011279fc + 0x1127960));
    *pcVar10 = '\x01';
  }
  iVar7 = param_1 + 0x38;
  piVar11 = *(int **)(_UNK_01127a00 + 0x1127978);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = PrimeTween_Tween__get_isAlive_2ce3e0c(iVar7,0);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01127a04 + 0x11279a8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_IAP_PurchasesListener__get_IsPurchasePending_109643c(iVar3,0);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_02cfd38c + 0x2cfd154);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02cfd390 + 0x2cfd168),uVar4,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_02cfd394 + 0x2cfd174));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar11 = *(int **)(_UNK_02cfd398 + 0x2cfd190);
  uStack_48 = 0;
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = PrimeTween_Tween__TryManipulate_2ce3eb4(iVar7,1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = PrimeTween_TweenArray__get_Item_2cf4b68(*(int *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar9 = (uint *)(*(int *)(*(int *)(iVar8 + 8) + 0x18) + *(int *)(iVar8 + 0xc) * 0x40);
  uVar5 = *puVar9;
  if (uVar4 == (uVar5 & 0x20000) >> 0x11) {
    return;
  }
  *puVar9 = uVar5 & 0xfffdffff | (uVar4 & 1) << 0x11;
  if ((uVar5 & 0x20000) == 0) {
    return;
  }
  if (uVar4 != 0) {
    return;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar6 = (float)PrimeTween_Tween__get_timeScale_2ced3c4(iVar7);
  if (0.0 < fVar6) {
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar6 = (float)PrimeTween_Tween__get_progressTotal_2cecf74(iVar7);
    if (1.0 <= fVar6) goto LAB_02cfd2f0;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar6 = (float)PrimeTween_Tween__get_timeScale_2ced3c4(iVar7);
  if (0.0 <= fVar6) {
    return;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar6 = (float)PrimeTween_Tween__get_progressTotal_2cecf74(iVar7);
  if (fVar6 != 0.0) {
    return;
  }
LAB_02cfd2f0:
  if (*(char *)((int)puVar9 + 0x26) == '%') {
    if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    PrimeTween_Tween___ctor_2cebf54(&uStack_38,*(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10));
    uVar2 = uStack_34;
    uVar1 = uStack_38;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    thunk_FUN_00ec5080(&uStack_50,0);
    uStack_48 = uVar1;
    uStack_44 = uVar2;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    PrimeTween_Sequence__ReleaseTweens_2ced4c8(&uStack_48,0);
  }
  else {
    if (*(int *)(**(int **)(_UNK_02cfd39c + 0x2cfd368) + 0x74) == 0) {
      FUN_00ec3934();
    }
    *puVar9 = *puVar9 & 0xfffffeff;
  }
  return;
}

