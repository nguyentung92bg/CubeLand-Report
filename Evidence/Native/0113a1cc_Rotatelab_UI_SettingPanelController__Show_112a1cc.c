/* IL2CPP: Rotatelab.UI.SettingPanelController$$Show
void Rotatelab_UI_SettingPanelController__Show (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$Show
   void Rotatelab_UI_SettingPanelController__Show (Rotatelab_UI_SettingPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__Show_112a1cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r1;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  
  pcVar8 = (char *)(_UNK_0113a6e0 + 0x113a1e4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6e4 + 0x113a1f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6e8 + 0x113a204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6ec + 0x113a210));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6f0 + 0x113a21c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6f4 + 0x113a228));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6f8 + 0x113a234));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a6fc + 0x113a240));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a700 + 0x113a24c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a704 + 0x113a258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113a708 + 0x113a264));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x9c) != '\0') {
    if (*(char *)(param_1 + 100) != '\0') {
      Rotatelab_UI_SettingPanelController__ShowSettingsPage_112a740(param_1);
    }
    puVar9 = *(undefined4 **)(_UNK_0113a70c + 0x113a2b0);
    piVar10 = *(int **)(param_1 + 0x38);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = System_String__Concat_29fee38
                      (**(undefined4 **)(_UNK_0113a710 + 0x113a2d8),*(undefined4 *)(iVar5 + 0x14),0)
    ;
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar10 + 0x2b0))(piVar10,uVar6,*(undefined4 *)(*piVar10 + 0x2b4));
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar5,*(char *)(*(int *)(iVar7 + 0x20) + 0x10) != '\0',0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x20),0);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar5,*(char *)(*(int *)(iVar7 + 0x20) + 0x10) != '\0',0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x10),0);
    piVar10 = *(int **)(param_1 + 0x28);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0113a714 + 0x113a414));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar5,0);
    puVar9 = *(undefined4 **)(_UNK_0113a71c + 0x113a44c);
    if (iVar5 != 0) {
      puVar9 = *(undefined4 **)(_UNK_0113a718 + 0x113a444);
    }
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar10 + 0x2b0))(piVar10,*puVar9,*(undefined4 *)(*piVar10 + 0x2b4));
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x14),0,0xc53b8000,0)
    ;
    PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_48,&uStack_38,0x3dcccccd,0);
    piVar10 = *(int **)(_UNK_0113a720 + 0x113a4f4);
    iVar5 = *piVar10;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar10;
    }
    puVar9 = *(undefined4 **)(iVar5 + 0x5c);
    iVar7 = puVar9[1];
    if (iVar7 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar9 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar6 = *puVar9;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113a724 + 0x113a544));
      System_Action___ctor_2b10bac(iVar7,uVar6,**(undefined4 **)(_UNK_0113a728 + 0x113a564),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
      *piVar10 = iVar7;
      thunk_FUN_00ec5080(piVar10,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_48,&uStack_38,iVar7,0,0);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    pcVar8 = (char *)(_UNK_0113a72c + 0x113a5ac);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113a730 + 0x113a5cc));
      *pcVar8 = '\x01';
    }
    puVar9 = *(undefined4 **)(**(int **)(_UNK_0113a734 + 0x113a5ec) + 0x5c);
    uVar11 = *puVar9;
    uVar12 = puVar9[1];
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
    uVar4 = uStack_54;
    uVar3 = uStack_58;
    uVar2 = uStack_5c;
    uVar1 = uStack_60;
    if (*(int *)(**(int **)(_UNK_0113a738 + 0x113a60c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPosition_2ce70f0
              (&uStack_60,uVar6,0,0xc53b8000,uVar11,uVar12,0x3e99999a,uVar1,uVar2,uVar3,uVar4,
               uStack_50,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
    iVar5 = *(int *)(**(int **)(_UNK_0113a73c + 0x113a6a8) + 0x74);
    if (iVar5 == 0) {
      FUN_00ec3934();
      iVar5 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_60,iVar5,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  }
  return;
}

