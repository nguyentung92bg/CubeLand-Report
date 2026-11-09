/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnCoinButtonClicked
void Rotatelab_Currency_UI_CurrencyPanel__OnCoinButtonClicked (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d1fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnCoinButtonClicked
   void Rotatelab_Currency_UI_CurrencyPanel__OnCoinButtonClicked
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__OnCoinButtonClicked_1085278(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_010952dc + 0x1095288);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010952e0 + 0x109529c));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010952e4 + 0x10952b0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_010d21d8 + 0x10d1db8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21dc + 0x10d1dcc),0,0,0,unaff_r4);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e0 + 0x10d1dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e4 + 0x10d1de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e8 + 0x10d1df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21ec + 0x10d1dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f0 + 0x10d1e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f4 + 0x10d1e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f8 + 0x10d1e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21fc + 0x10d1e2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2200 + 0x10d1e38));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010d2204 + 0x10d1e4c);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  if (**(char **)(iVar2 + 0x5c) == '\0') {
    return;
  }
  if (*(char *)(iVar1 + 0x84) != '\0') {
    return;
  }
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x88),0);
  puVar3 = *(undefined4 **)(_UNK_010d2208 + 0x10d1ea4);
  *(undefined1 *)(iVar1 + 0x86) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar2,1,iVar1,0);
  puVar3 = *(undefined4 **)(_UNK_010d220c + 0x10d1edc);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0x10);
  if (*(int *)(iVar1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar1 + 0x28),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,iVar2 != 0,0);
  iVar8 = *(int *)(iVar1 + 0x24);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = iVar1;
  if ((*(int *)(*(int *)(iVar4 + 0x14) + 0x10) != 0) &&
     (iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d2210 + 0x10d1f8c)), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar8,uVar6,0,0);
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
  *(undefined1 *)(iVar1 + 0x84) = 1;
  if (iVar2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIManager__OpenPage_11276ec(iVar2,2,0);
  }
  else {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d2214 + 0x10d203c));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar2,1,0);
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_39bbcf8
            (*(int *)(iVar1 + 0x2c),0x3f800000,0);
  Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(iVar1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d2218 + 0x10d20c0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x84) != 0) {
    Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle_fe87bc(*(int *)(iVar2 + 0x84),0)
    ;
    if (*(int *)(iVar1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x80) + 0x14);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged_10c0134(iVar1);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d221c + 0x10d2124));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_IAP_PurchasesListener__OnShopOpened_109a79c(iVar1,0);
    piVar9 = *(int **)(_UNK_010d2220 + 0x10d2150);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
    if (iVar1 != 0) {
      Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
      piVar9 = *(int **)(_UNK_010d2224 + 0x10d2190);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

