/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$SpawnOffers
void Rotatelab_Shop_ShopBundleOfferController__SpawnOffers (Rotatelab_Shop_ShopBundleOfferController_o* __this, ShopBundleSO_o* bundle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$SpawnOffers
   void Rotatelab_Shop_ShopBundleOfferController__SpawnOffers
   (Rotatelab_Shop_ShopBundleOfferController_o* __this, ShopBundleSO_o* bundle, const MethodInfo*
   method); */

void Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  pcVar3 = (char *)(_UNK_010d0a88 + 0x10d07d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0a8c + 0x10d07e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0a90 + 0x10d07f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0a94 + 0x10d07fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0a98 + 0x10d0808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0a9c + 0x10d0814));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
  thunk_FUN_00ec5080();
  iVar9 = *(int *)(param_2 + 0x1c);
  uVar4 = 0;
  do {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar9 + 0xc) <= (int)uVar4) {
      uVar6 = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(**(int **)(_UNK_010d0ab8 + 0x10d0a44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
      if (iVar9 == 0) {
        return;
      }
      pcVar3 = (char *)(_UNK_010d0d68 + 0x10d0cc8);
      if (*pcVar3 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010d0d6c + 0x10d0cdc));
        *pcVar3 = '\x01';
      }
      iVar9 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = *(uint *)(*(int *)(param_1 + 0x2c) + 0xc);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *(int *)(iVar9 + 0xc) - 1;
      if ((int)uVar4 < (int)uVar8) {
        uVar8 = uVar4;
      }
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar5 = *(int *)(param_1 + 0x24);
      uVar6 = *(undefined4 *)(iVar9 + uVar8 * 4 + 0x10);
      if (iVar5 != 0) {
        uVar7 = *(undefined4 *)(iVar5 + 0x50);
        pcVar3 = (char *)(_UNK_039bbfbc + 0x39bbf74);
        if (*pcVar3 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039bbfc0 + 0x39bbf88),uVar6,uVar7,0);
          *pcVar3 = '\x01';
        }
        UnityEngine_UI_LayoutGroup__SetProperty_Vector2__14add20
                  (iVar5,iVar5 + 0x4c,uVar6,uVar7,**(undefined4 **)(_UNK_039bbfc4 + 0x39bbfa8));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar9 + 0x10 + uVar4 * 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar5 + 8);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_010d0aa0 + 0x10d0894) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar5 + 8);
        goto LAB_010d0904;
      }
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = FUN_00f88368(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14));
      TMPro_TMP_Text__SetText_34ffc34(iVar1,**(undefined4 **)(_UNK_010d0aa4 + 0x10d08f4),uVar6,0);
    }
    else {
LAB_010d0904:
      if (iVar1 == 7) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          if (*(int *)(**(int **)(_UNK_010d0aa8 + 0x10d0924) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar6 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
          iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar6,0);
          if (iVar1 == 0) goto LAB_010d094c;
        }
      }
      else {
LAB_010d094c:
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(**(int **)(_UNK_010d0aac + 0x10d0958) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__Instantiate_object__14d4e4c
                          (uVar7,uVar6,0,**(undefined4 **)(_UNK_010d0ab0 + 0x10d0984));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Shop_BundleOffer__Initialize_10c03d8(iVar1,iVar5);
        iVar5 = *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar10 = *(int *)(iVar5 + 8);
        uVar8 = *(uint *)(iVar5 + 0xc);
        piVar2 = *(int **)(_UNK_010d0ab4 + 0x10d09dc);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar8 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar8 + 1;
          piVar2 = (int *)(iVar10 + uVar8 * 4 + 0x10);
          *piVar2 = iVar1;
          thunk_FUN_00ec5080(piVar2,iVar1);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_267dae0
                    (iVar5,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

