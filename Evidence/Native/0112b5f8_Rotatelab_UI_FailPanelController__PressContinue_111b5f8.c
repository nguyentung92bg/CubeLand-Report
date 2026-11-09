/* IL2CPP: Rotatelab.UI.FailPanelController$$PressContinue
void Rotatelab_UI_FailPanelController__PressContinue (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$PressContinue
   void Rotatelab_UI_FailPanelController__PressContinue (Rotatelab_UI_FailPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__PressContinue_111b5f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  char *pcVar8;
  int *piVar9;
  undefined4 unaff_r6;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  undefined8 uVar11;
  
  pcVar8 = (char *)(_UNK_0112b8fc + 0x112b610);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b900 + 0x112b624));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b904 + 0x112b630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b908 + 0x112b63c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b90c + 0x112b648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b910 + 0x112b654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b914 + 0x112b660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b918 + 0x112b66c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b91c + 0x112b678));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b920 + 0x112b684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b924 + 0x112b690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b928 + 0x112b69c));
    *pcVar8 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112b92c + 0x112b6b0));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,3,0);
  puVar10 = *(undefined4 **)(_UNK_0112b930 + 0x112b6e0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar3,0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  if (*(int *)(param_1 + 0xe0) <= iVar3) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar3,0);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = (**(code **)(*piVar9 + 0xf0))(piVar9,*(undefined4 *)(*piVar9 + 0xf4));
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    uVar6 = *(uint *)(param_1 + 0xe0);
    (**(code **)(*piVar9 + 0xf8))
              (piVar9,iVar3,(uint)uVar11 - uVar6,
               iVar3 - (((int)uVar6 >> 0x1f) + (uint)((uint)uVar11 < uVar6)),
               *(undefined4 *)(*piVar9 + 0xfc));
    piVar9 = *(int **)(_UNK_0112b934 + 0x112b868);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    Rotatelab_UI_FailPanelController__TriggerPlayOn_111b958
              (param_1,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4),*(undefined4 *)(param_1 + 0xe0),
               *(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
    piVar9 = *(int **)(_UNK_0112b938 + 0x112b8a4);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x18);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(param_1 + 0xe0),
               **(undefined4 **)(_UNK_0112b940 + 0x112b8ec),*(undefined4 *)(iVar3 + 0x14));
    return;
  }
  piVar9 = *(int **)(_UNK_0112b944 + 0x112b720);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x11c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__bool__bool___Raise_23a5cbc
            (iVar3,0,1,1,**(undefined4 **)(_UNK_0112b948 + 0x112b760));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x10),0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112b94c + 0x112b794));
  iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112b950 + 0x112b7a8));
  System_Action___ctor_2b10bac(iVar5,param_1,**(undefined4 **)(_UNK_0112b954 + 0x112b7c4),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_010d21d8 + 0x10d1db8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21dc + 0x10d1dcc),1,iVar5,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e0 + 0x10d1dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e4 + 0x10d1de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e8 + 0x10d1df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21ec + 0x10d1dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f0 + 0x10d1e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f4 + 0x10d1e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f8 + 0x10d1e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21fc + 0x10d1e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2200 + 0x10d1e38));
    *pcVar8 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010d2204 + 0x10d1e4c);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  if (**(char **)(iVar1 + 0x5c) == '\0') {
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010d1fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
      return;
    }
    return;
  }
  if (*(char *)(iVar3 + 0x84) != '\0') {
    return;
  }
  *(int *)(iVar3 + 0x88) = iVar5;
  *(undefined1 *)(iVar3 + 0x85) = 1;
  thunk_FUN_00ec5080((int *)(iVar3 + 0x88),iVar5);
  puVar10 = *(undefined4 **)(_UNK_010d2208 + 0x10d1ea4);
  *(undefined1 *)(iVar3 + 0x86) = 0;
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar5,1,iVar3,0);
  puVar10 = *(undefined4 **)(_UNK_010d220c + 0x10d1edc);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x14) + 0x10);
  if (*(int *)(iVar3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar3 + 0x28),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,iVar5 != 0,0);
  iVar7 = *(int *)(iVar3 + 0x24);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = iVar3;
  if ((*(int *)(*(int *)(iVar1 + 0x14) + 0x10) != 0) &&
     (iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d2210 + 0x10d1f8c)), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar7,uVar4,0,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  *(undefined1 *)(iVar3 + 0x84) = 1;
  if (iVar5 == 0) {
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIManager__OpenPage_11276ec(iVar5,2,0);
  }
  else {
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d2214 + 0x10d203c));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar5,1,0);
  }
  if (*(int *)(iVar3 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_39bbcf8
            (*(int *)(iVar3 + 0x2c),0x3f800000,0);
  Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(iVar3);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d2218 + 0x10d20c0));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x84) != 0) {
    Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle_fe87bc(*(int *)(iVar5 + 0x84),0)
    ;
    if (*(int *)(iVar3 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x80) + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged_10c0134(iVar3);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d221c + 0x10d2124));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_IAP_PurchasesListener__OnShopOpened_109a79c(iVar3,0);
    piVar9 = *(int **)(_UNK_010d2220 + 0x10d2150);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
    piVar9 = *(int **)(_UNK_010d2224 + 0x10d2190);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),0,*(undefined4 *)(iVar3 + 0x14));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

