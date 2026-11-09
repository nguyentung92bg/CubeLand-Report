/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_Shop_SeasonalOfferButton__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_Shop_SeasonalOfferButton__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_SeasonalOfferButton__OnInitOtherShopItemsOutsideOfShopHandler_10d0ea0
              (int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar12;
  
  pcVar6 = (char *)(_UNK_010e1084 + 0x10e0eb4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1088 + 0x10e0ec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e108c + 0x10e0ed4));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  iVar5 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164));
  if (iVar5 != 0) {
    iVar7 = param_1[0x16];
    iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(param_1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar7,*(undefined4 *)(iVar5 + 0xc),0);
    iVar7 = param_1[0x17];
    iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(param_1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar7,*(undefined4 *)(iVar5 + 0x10),0);
    iVar7 = param_1[0x18];
    iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(param_1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc(iVar7,*(undefined4 *)(iVar5 + 0x14),0);
    piVar9 = *(int **)(_UNK_010e1090 + 0x10e0fc4);
    iVar5 = param_1[0x1b];
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
    if (iVar5 != 0) {
      iVar5 = param_1[0x14];
      iVar7 = param_1[0x15];
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar5 = UnityEngine_Object__Instantiate_object__14d4dd0
                        (iVar7,iVar5,**(undefined4 **)(_UNK_010e1094 + 0x10e1018));
      param_1[0x1b] = iVar5;
      thunk_FUN_00ec5080(param_1 + 0x1b,iVar5);
      iVar7 = param_1[0x1b];
      iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(param_1);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *(undefined4 *)(iVar5 + 8);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar7 + 0x10);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      BundlePurchaseButton__Initialize_fa6868
                (*(int *)(iVar5 + 0x10),uVar8,(char)param_1[0x12] != '\0',0,unaff_r4,unaff_r5,
                 unaff_r6,unaff_r7,unaff_r11,unaff_lr);
      Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(iVar5,uVar8);
      iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar7,0);
      if (iVar7 == 0) {
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
      iVar7 = DG_Tweening_TweenExtensions__IsActive_1169428(*puVar10,0);
      if (iVar7 != 0) {
        DG_Tweening_TweenExtensions__Kill_1168b64(*puVar10,0,0);
      }
      if (*(int *)(iVar5 + 0x2c) != 0) {
        if (*(int *)(*(int *)(iVar5 + 0x2c) + 0xc) == 0) {
          return 0;
        }
        if (*(int *)(**(int **)(_UNK_010d0ca4 + 0x10d0b70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = 0;
        uVar8 = DG_Tweening_DOTween__Sequence_1167c00(0);
        *puVar10 = uVar8;
        thunk_FUN_00ec5080(puVar10,uVar8);
        fVar1 = _UNK_010d0c88;
        puVar11 = *(undefined4 **)(_UNK_010d0ca8 + 0x10d0bac);
        while( true ) {
          if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar8 = *puVar10;
          if (*(int *)(*(int *)(iVar5 + 0x2c) + 0xc) <= iVar7) {
            uVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar8,0x3f800000,0);
            iVar7 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da26c
                              (uVar8,0xffffffff,**(undefined4 **)(_UNK_010d0cac + 0x10d0c44));
            uVar8 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
            pcVar6 = (char *)(_UNK_015ea250 + 0x15ea170);
            cVar2 = *pcVar6;
            if (cVar2 == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_015ea254 + 0x15ea184),uVar8,5,
                           **(undefined4 **)(_UNK_010d0cb0 + 0x10d0c70),unaff_r4,unaff_r5,unaff_r6,
                           unaff_r7,unaff_r11,unaff_lr);
              FUN_00ec37c0(*(undefined4 *)(_UNK_015ea258 + 0x15ea190));
              FUN_00ec37c0(*(undefined4 *)(_UNK_015ea25c + 0x15ea19c));
              cVar2 = '\x01';
              *pcVar6 = '\x01';
            }
            if (iVar7 != 0) {
              cVar2 = *(char *)(iVar7 + 0x94);
            }
            if ((iVar7 != 0 && cVar2 != '\0') && (*(char *)(iVar7 + 0x95) == '\0')) {
              if (*(int *)(**(int **)(_UNK_015ea260 + 0x15ea1d4) + 0x74) == 0) {
                FUN_00ec3934();
              }
              iVar5 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
              if (iVar5 == 0) {
                uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_015ea264 + 0x15ea208));
                DG_Tweening_Core_TweenLink___ctor_11815bc(uVar4,uVar8,5,0);
                if (*(int *)(**(int **)(_UNK_015ea268 + 0x15ea22c) + 0x74) == 0) {
                  FUN_00ec3934();
                }
                DG_Tweening_Core_TweenManager__AddTweenLink_11833dc(iVar7,uVar4,0);
              }
            }
            return iVar7;
          }
          if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(iVar5 + 0x2c),iVar7,*puVar11);
          if (iVar3 == 0) break;
          uVar4 = Rotatelab_Shop_BundleOffer__GetAnimationSequence_10c0518(iVar3);
          fVar12 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
          DG_Tweening_TweenSettingsExtensions__Insert_116d090(uVar8,fVar12 * fVar1,uVar4,0);
          iVar7 = iVar7 + 1;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return 0;
}

