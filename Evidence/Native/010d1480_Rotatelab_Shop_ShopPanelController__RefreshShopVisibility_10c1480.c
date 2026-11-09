/* IL2CPP: Rotatelab.Shop.ShopPanelController$$RefreshShopVisibility
void Rotatelab_Shop_ShopPanelController__RefreshShopVisibility (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$RefreshShopVisibility
   void Rotatelab_Shop_ShopPanelController__RefreshShopVisibility
   (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__RefreshShopVisibility_10c1480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_010d19a8 + 0x10d1498);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19ac + 0x10d14ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19b0 + 0x10d14b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19b4 + 0x10d14c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19b8 + 0x10d14d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19bc + 0x10d14dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19c0 + 0x10d14e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19c4 + 0x10d14f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19c8 + 0x10d1500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19cc + 0x10d150c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d19d0 + 0x10d1518));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d19d4 + 0x10d1534));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = 0;
  uVar2 = Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased_10a01b8(iVar1,0);
  iVar3 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar2,0);
  if (iVar3 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable_10a3248(iVar1,0);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x78),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar9,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d19d8 + 0x10d15d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x74),0);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar4 + 0x34),0);
  if (iVar4 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked_107982c
                      (*(undefined4 *)(iVar1 + 0xc),0);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar2,0);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x7c),0);
  piVar7 = *(int **)(_UNK_010d19dc + 0x10d16a0);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar9 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar9,0);
  if (iVar4 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked_107982c
                      (*(undefined4 *)(iVar1 + 0x10),0);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar2,0);
  if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x80),0);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar9 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar9,0);
  if (iVar4 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_ForcedOfferPopupTracker__IsShopUnlocked_107982c
                      (*(undefined4 *)(iVar1 + 0x14),0);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar3) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0x6c),**(undefined4 **)(_UNK_010d19e0 + 0x10d17e8));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar11 = *(undefined4 **)(_UNK_010d19e4 + 0x10d1814);
  piVar7 = *(int **)(_UNK_010d19e8 + 0x10d181c);
  puStack_44 = &uStack_38;
  while( true ) {
    iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_38,*puVar11);
    iVar1 = iStack_2c;
    if (iVar3 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_010d19ec + 0x10d18f0));
      Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(param_1);
      piVar7 = *(int **)(_UNK_010d19f4 + 0x10d190c);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar7;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xec);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
      return;
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(iStack_2c,0);
    if (iVar3 == 0) break;
    iVar3 = UnityEngine_GameObject__get_activeSelf_360212c(iVar3,0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x70);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar3 + 8);
      uVar8 = *(uint *)(iVar3 + 0xc);
      iVar10 = *piVar7;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar8 + 1;
        piVar5 = (int *)(iVar4 + uVar8 * 4 + 0x10);
        *piVar5 = iVar1;
        thunk_FUN_00ec5080(piVar5,iVar1);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar3,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

