/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_Shop_StarterBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_Shop_StarterBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarterBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler_10d1ffc
              (int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar12;
  
  pcVar6 = (char *)(_UNK_010e20f8 + 0x10e2010);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e20fc + 0x10e2024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2100 + 0x10e2030));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  piVar8 = *(int **)(_UNK_010e2104 + 0x10e2050);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
  if (iVar5 == 0) {
    return 0;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  uVar9 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar9,uVar7,**(undefined4 **)(_UNK_010e2108 + 0x10e20a4));
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x58),uVar7);
  uVar7 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x58) + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x10) != 0) {
    BundlePurchaseButton__Initialize_fa6868
              (*(int *)(iVar5 + 0x10),uVar7,*(char *)(param_1 + 0x48) != '\0',0,unaff_r4,unaff_r5,
               unaff_r6,unaff_r7,unaff_r11,unaff_lr);
    Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(iVar5,uVar7);
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar3,0);
    if (iVar3 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_010d0c8c + 0x10d0ad4);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c90 + 0x10d0ae8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c94 + 0x10d0af4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c98 + 0x10d0b00));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c9c + 0x10d0b0c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0ca0 + 0x10d0b18));
      *pcVar6 = '\x01';
    }
    puVar10 = (undefined4 *)(iVar5 + 0x30);
    iVar3 = DG_Tweening_TweenExtensions__IsActive_1169428(*puVar10,0);
    if (iVar3 != 0) {
      DG_Tweening_TweenExtensions__Kill_1168b64(*puVar10,0,0);
    }
    if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar5 + 0x2c) + 0xc) == 0) {
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_010d0ca4 + 0x10d0b70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = 0;
    uVar7 = DG_Tweening_DOTween__Sequence_1167c00(0);
    *puVar10 = uVar7;
    thunk_FUN_00ec5080(puVar10,uVar7);
    fVar1 = _UNK_010d0c88;
    puVar11 = *(undefined4 **)(_UNK_010d0ca8 + 0x10d0bac);
    while( true ) {
      if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = *puVar10;
      if (*(int *)(*(int *)(iVar5 + 0x2c) + 0xc) <= iVar3) {
        uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar7,0x3f800000,0);
        iVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da26c
                          (uVar7,0xffffffff,**(undefined4 **)(_UNK_010d0cac + 0x10d0c44));
        uVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
        pcVar6 = (char *)(_UNK_015ea250 + 0x15ea170);
        cVar2 = *pcVar6;
        if (cVar2 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea254 + 0x15ea184),uVar7,5,
                       **(undefined4 **)(_UNK_010d0cb0 + 0x10d0c70),unaff_r4,unaff_r5,unaff_r6,
                       unaff_r7,unaff_r11,unaff_lr);
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea258 + 0x15ea190));
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea25c + 0x15ea19c));
          cVar2 = '\x01';
          *pcVar6 = '\x01';
        }
        if (iVar3 != 0) {
          cVar2 = *(char *)(iVar3 + 0x94);
        }
        if ((iVar3 != 0 && cVar2 != '\0') && (*(char *)(iVar3 + 0x95) == '\0')) {
          if (*(int *)(**(int **)(_UNK_015ea260 + 0x15ea1d4) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
          if (iVar5 == 0) {
            uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_015ea264 + 0x15ea208));
            DG_Tweening_Core_TweenLink___ctor_11815bc(uVar9,uVar7,5,0);
            if (*(int *)(**(int **)(_UNK_015ea268 + 0x15ea22c) + 0x74) == 0) {
              FUN_00ec3934();
            }
            DG_Tweening_Core_TweenManager__AddTweenLink_11833dc(iVar3,uVar9,0);
          }
        }
        return iVar3;
      }
      if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(iVar5 + 0x2c),iVar3,*puVar11);
      if (iVar4 == 0) break;
      uVar9 = Rotatelab_Shop_BundleOffer__GetAnimationSequence_10c0518(iVar4);
      fVar12 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      DG_Tweening_TweenSettingsExtensions__Insert_116d090(uVar7,fVar12 * fVar1,uVar9,0);
      iVar3 = iVar3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

