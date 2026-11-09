/* IL2CPP: Rotatelab.UI.SettingPanelController$$OnHomeButtonClicked
void Rotatelab_UI_SettingPanelController__OnHomeButtonClicked (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$OnHomeButtonClicked
   void Rotatelab_UI_SettingPanelController__OnHomeButtonClicked
   (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__OnHomeButtonClicked_112af50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0113b2b0 + 0x113af68);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2b4 + 0x113af7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2b8 + 0x113af88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2bc + 0x113af94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2c0 + 0x113afa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2c4 + 0x113afac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2c8 + 0x113afb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2cc + 0x113afc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2d0 + 0x113afd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b2d4 + 0x113afdc));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113b2d8 + 0x113aff8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar3,0);
  if (iVar3 != 0) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0113b2dc + 0x113b030));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_PopupController__Show_1124734(*(int *)(iVar3 + 0x1c),0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
    uVar10 = *(undefined4 *)(param_1 + 0x14);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
    uVar2 = uStack_54;
    uVar1 = uStack_58;
    uVar8 = uStack_5c;
    uVar5 = uStack_60;
    if (*(int *)(**(int **)(_UNK_0113b2e0 + 0x113b0b4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPosition_2ce6e40
              (&uStack_60,uVar10,0,0x453b8000,0x3ecccccd,uVar5,uVar8,uVar1,uVar2,uStack_50,1,0,0,0,0
               ,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    piVar9 = *(int **)(_UNK_0113b2e4 + 0x113b150);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *piVar9;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    puVar4 = *(undefined4 **)(iVar3 + 0x5c);
    iVar7 = puVar4[3];
    if (iVar7 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar8 = *puVar4;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113b2e8 + 0x113b1a4));
      System_Action_object____ctor_1f11414
                (iVar7,uVar8,**(undefined4 **)(_UNK_0113b2ec + 0x113b1c4),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0xc);
      *piVar9 = iVar7;
      thunk_FUN_00ec5080(piVar9,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_60,&uStack_38,uVar5,iVar7,0,**(undefined4 **)(_UNK_0113b2f0 + 0x113b1fc));
    iVar3 = *(int *)(**(int **)(_UNK_0113b2f4 + 0x113b218) + 0x74);
    if (iVar3 == 0) {
      FUN_00ec3934();
      iVar3 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_60,iVar3,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x10));
  piVar9 = *(int **)(_UNK_0113b2f8 + 0x113b274);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  return;
}

