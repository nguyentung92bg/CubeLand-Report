/* IL2CPP: Rotatelab.Shop.MainScreenBundleOfferItem$$Initialize
void Rotatelab_Shop_MainScreenBundleOfferItem__Initialize (Rotatelab_Shop_MainScreenBundleOfferItem_o* __this, ShopBundleSO_o* bundleSo, bool isDiscountAvailable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.MainScreenBundleOfferItem$$Initialize
   void Rotatelab_Shop_MainScreenBundleOfferItem__Initialize
   (Rotatelab_Shop_MainScreenBundleOfferItem_o* __this, ShopBundleSO_o* bundleSo, bool
   isDiscountAvailable, const MethodInfo* method); */

int Rotatelab_Shop_MainScreenBundleOfferItem__Initialize_10c0064
              (int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 unaff_r6;
  int iVar8;
  undefined4 unaff_r7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar11;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  BundlePurchaseButton__Initialize_fa6868(*(int *)(iVar8 + 0x10),param_2,param_3,0);
  Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(iVar8,param_2);
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar8,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar3,0);
  if (iVar3 == 0) {
    return 0;
  }
  pcVar7 = (char *)(_UNK_010d0c8c + 0x10d0ad4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c90 + 0x10d0ae8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c94 + 0x10d0af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c98 + 0x10d0b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0c9c + 0x10d0b0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0ca0 + 0x10d0b18));
    *pcVar7 = '\x01';
  }
  puVar9 = (undefined4 *)(iVar8 + 0x30);
  iVar3 = DG_Tweening_TweenExtensions__IsActive_1169428(*puVar9,0);
  if (iVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*puVar9,0,0);
  }
  if (*(int *)(iVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar8 + 0x2c) + 0xc) == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_010d0ca4 + 0x10d0b70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = 0;
  uVar4 = DG_Tweening_DOTween__Sequence_1167c00(0);
  *puVar9 = uVar4;
  thunk_FUN_00ec5080(puVar9,uVar4);
  fVar1 = _UNK_010d0c88;
  puVar10 = *(undefined4 **)(_UNK_010d0ca8 + 0x10d0bac);
  while( true ) {
    if (*(int *)(iVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *puVar9;
    if (*(int *)(*(int *)(iVar8 + 0x2c) + 0xc) <= iVar3) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3f800000,0);
      iVar3 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da26c
                        (uVar4,0xffffffff,**(undefined4 **)(_UNK_010d0cac + 0x10d0c44));
      uVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar8,0);
      pcVar7 = (char *)(_UNK_015ea250 + 0x15ea170);
      cVar2 = *pcVar7;
      if (cVar2 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_015ea254 + 0x15ea184),uVar4,5,
                     **(undefined4 **)(_UNK_010d0cb0 + 0x10d0c70),unaff_r4,unaff_r5,unaff_r6,
                     unaff_r7,unaff_r11,unaff_lr);
        FUN_00ec37c0(*(undefined4 *)(_UNK_015ea258 + 0x15ea190));
        FUN_00ec37c0(*(undefined4 *)(_UNK_015ea25c + 0x15ea19c));
        cVar2 = '\x01';
        *pcVar7 = '\x01';
      }
      if (iVar3 != 0) {
        cVar2 = *(char *)(iVar3 + 0x94);
      }
      if ((iVar3 != 0 && cVar2 != '\0') && (*(char *)(iVar3 + 0x95) == '\0')) {
        if (*(int *)(**(int **)(_UNK_015ea260 + 0x15ea1d4) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar8 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
        if (iVar8 == 0) {
          uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_015ea264 + 0x15ea208));
          DG_Tweening_Core_TweenLink___ctor_11815bc(uVar6,uVar4,5,0);
          if (*(int *)(**(int **)(_UNK_015ea268 + 0x15ea22c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          DG_Tweening_Core_TweenManager__AddTweenLink_11833dc(iVar3,uVar6,0);
        }
      }
      return iVar3;
    }
    if (*(int *)(iVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar8 + 0x2c),iVar3,*puVar10);
    if (iVar5 == 0) break;
    uVar6 = Rotatelab_Shop_BundleOffer__GetAnimationSequence_10c0518(iVar5);
    fVar11 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    DG_Tweening_TweenSettingsExtensions__Insert_116d090(uVar4,fVar11 * fVar1,uVar6,0);
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

