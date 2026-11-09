/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Show
void Rotatelab_Shop_ShopPanelController__Show (Rotatelab_Shop_ShopPanelController_o* __this, bool autoHideOnAnyPurchase, System_Action_o* onClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Show
   void Rotatelab_Shop_ShopPanelController__Show (Rotatelab_Shop_ShopPanelController_o* __this, bool
   autoHideOnAnyPurchase, System_Action_o* onClose, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__Show_10c1d9c(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_010d21d8 + 0x10d1db8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d21dc + 0x10d1dcc));
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
  piVar8 = *(int **)(_UNK_010d2204 + 0x10d1e4c);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  if (**(char **)(iVar1 + 0x5c) == '\0') {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010d1fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x14));
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    return;
  }
  *(int *)(param_1 + 0x88) = param_3;
  *(undefined1 *)(param_1 + 0x85) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x88),param_3);
  puVar2 = *(undefined4 **)(_UNK_010d2208 + 0x10d1ea4);
  *(undefined1 *)(param_1 + 0x86) = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar1,1,param_1,0);
  puVar2 = *(undefined4 **)(_UNK_010d220c + 0x10d1edc);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + 0x10);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x28),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,iVar1 != 0,0);
  iVar6 = *(int *)(param_1 + 0x24);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = param_1;
  if ((*(int *)(*(int *)(iVar3 + 0x14) + 0x10) != 0) &&
     (iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d2210 + 0x10d1f8c)), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = UnityEngine_Component__get_transform_35fe190(iVar4,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar6,uVar5,0,0);
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  *(undefined1 *)(param_1 + 0x84) = 1;
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIManager__OpenPage_11276ec(iVar1,2,0);
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d2214 + 0x10d203c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar1,1,0);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_39bbcf8
            (*(int *)(param_1 + 0x2c),0x3f800000,0);
  Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d2218 + 0x10d20c0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x84) != 0) {
    Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle_fe87bc(*(int *)(iVar1 + 0x84),0)
    ;
    if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 0x14);
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
    piVar8 = *(int **)(_UNK_010d2220 + 0x10d2150);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
    piVar8 = *(int **)(_UNK_010d2224 + 0x10d2190);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

