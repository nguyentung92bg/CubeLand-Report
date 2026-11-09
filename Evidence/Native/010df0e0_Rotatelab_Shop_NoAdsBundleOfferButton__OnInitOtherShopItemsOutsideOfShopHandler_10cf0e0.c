/* IL2CPP: Rotatelab.Shop.NoAdsBundleOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_Shop_NoAdsBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_Shop_NoAdsBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsBundleOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_Shop_NoAdsBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_Shop_NoAdsBundleOfferButton_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_NoAdsBundleOfferButton__OnInitOtherShopItemsOutsideOfShopHandler_10cf0e0
              (int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_r6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar13;
  
  pcVar4 = (char *)(_UNK_010df22c + 0x10df0f4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df230 + 0x10df108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df234 + 0x10df114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df238 + 0x10df120));
    *pcVar4 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  piVar9 = *(int **)(_UNK_010df23c + 0x10df140);
  piVar5 = (int *)(param_1 + 0x58);
  iVar7 = *piVar5;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Equality_36033f4(iVar7,0,0);
  if (iVar7 == 0) {
    return 0;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x50);
  uVar10 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar10,uVar8,**(undefined4 **)(_UNK_010df240 + 0x10df194));
  *piVar5 = iVar7;
  thunk_FUN_00ec5080(piVar5,iVar7);
  iVar6 = *piVar5;
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010df244 + 0x10df1bc));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar7 + 0x84) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle_fe7450
                    (*(int *)(iVar7 + 0x84),*(undefined4 *)(param_1 + 0x4c),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  BundlePurchaseButton__Initialize_fa6868
            (*(int *)(iVar7 + 0x10),uVar8,*(char *)(param_1 + 0x48) != '\0',0,unaff_r4,unaff_r5,
             unaff_r6,unaff_r7,unaff_r11,unaff_lr);
  Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(iVar7,uVar8);
  iVar6 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar6,0);
  if (iVar6 != 0) {
    pcVar4 = (char *)(_UNK_010d0c8c + 0x10d0ad4);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c90 + 0x10d0ae8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c94 + 0x10d0af4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c98 + 0x10d0b00));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c9c + 0x10d0b0c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d0ca0 + 0x10d0b18));
      *pcVar4 = '\x01';
    }
    puVar11 = (undefined4 *)(iVar7 + 0x30);
    iVar6 = DG_Tweening_TweenExtensions__IsActive_1169428(*puVar11,0);
    if (iVar6 != 0) {
      DG_Tweening_TweenExtensions__Kill_1168b64(*puVar11,0,0);
    }
    if (*(int *)(iVar7 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar7 + 0x2c) + 0xc) == 0) {
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_010d0ca4 + 0x10d0b70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = 0;
    uVar8 = DG_Tweening_DOTween__Sequence_1167c00(0);
    *puVar11 = uVar8;
    thunk_FUN_00ec5080(puVar11,uVar8);
    fVar1 = _UNK_010d0c88;
    puVar12 = *(undefined4 **)(_UNK_010d0ca8 + 0x10d0bac);
    while( true ) {
      if (*(int *)(iVar7 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *puVar11;
      if (*(int *)(*(int *)(iVar7 + 0x2c) + 0xc) <= iVar6) {
        uVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar8,0x3f800000,0);
        iVar6 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da26c
                          (uVar8,0xffffffff,**(undefined4 **)(_UNK_010d0cac + 0x10d0c44));
        uVar8 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
        pcVar4 = (char *)(_UNK_015ea250 + 0x15ea170);
        cVar2 = *pcVar4;
        if (cVar2 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea254 + 0x15ea184),uVar8,5,
                       **(undefined4 **)(_UNK_010d0cb0 + 0x10d0c70),unaff_r4,unaff_r5,unaff_r6,
                       unaff_r7,unaff_r11,unaff_lr);
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea258 + 0x15ea190));
          FUN_00ec37c0(*(undefined4 *)(_UNK_015ea25c + 0x15ea19c));
          cVar2 = '\x01';
          *pcVar4 = '\x01';
        }
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + 0x94);
        }
        if ((iVar6 != 0 && cVar2 != '\0') && (*(char *)(iVar6 + 0x95) == '\0')) {
          if (*(int *)(**(int **)(_UNK_015ea260 + 0x15ea1d4) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
          if (iVar7 == 0) {
            uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_015ea264 + 0x15ea208));
            DG_Tweening_Core_TweenLink___ctor_11815bc(uVar10,uVar8,5,0);
            if (*(int *)(**(int **)(_UNK_015ea268 + 0x15ea22c) + 0x74) == 0) {
              FUN_00ec3934();
            }
            DG_Tweening_Core_TweenManager__AddTweenLink_11833dc(iVar6,uVar10,0);
          }
        }
        return iVar6;
      }
      if (*(int *)(iVar7 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(iVar7 + 0x2c),iVar6,*puVar12);
      if (iVar3 == 0) break;
      uVar10 = Rotatelab_Shop_BundleOffer__GetAnimationSequence_10c0518(iVar3);
      fVar13 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      DG_Tweening_TweenSettingsExtensions__Insert_116d090(uVar8,fVar13 * fVar1,uVar10,0);
      iVar6 = iVar6 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return 0;
}

