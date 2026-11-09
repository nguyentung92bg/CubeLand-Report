/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsOfferVisible
bool Rotatelab_Shop_SeasonalOfferButton__get_IsOfferVisible (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsOfferVisible
   bool Rotatelab_Shop_SeasonalOfferButton__get_IsOfferVisible
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_SeasonalOfferButton__get_IsOfferVisible_10d0380(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_010e0454 + 0x10e0394);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0458 + 0x10e03a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e045c + 0x10e03b4));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010e0460 + 0x10e03c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar4,0);
  piVar9 = *(int **)(_UNK_010e0464 + 0x10e03f8);
  iVar6 = *piVar9;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar9;
  }
  if ((*(int *)(*(int *)(iVar6 + 0x5c) + 0x28) < iVar5) &&
     (iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_IsOfferIndexValid_10d024c(param_1), iVar5 != 0
     )) {
    iVar5 = Rotatelab_Shop_SeasonalOfferButton__get_OfferPurchasedYear_10d07fc();
    iVar6 = Rotatelab_Shop_SeasonalOfferButton__get_OfferYear_10d0900();
    if (iVar5 != iVar6) {
      pcVar8 = (char *)(_UNK_010e0574 + 0x10e049c);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e0578 + 0x10e04b0));
        *pcVar8 = '\x01';
      }
      piVar9 = *(int **)(_UNK_010e057c + 0x10e04c4);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = 0;
      System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_38,0);
      uVar3 = uStack_2c;
      uVar2 = uStack_30;
      uVar1 = uStack_34;
      uVar4 = uStack_38;
      Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime_10d0580(&uStack_38);
      iVar5 = System_DateTimeOffset__op_GreaterThanOrEqual_2b51504
                        (uVar4,uVar1,uVar2,uVar3,uStack_38,uStack_34,uStack_30,uStack_2c,0);
      if (iVar5 != 0) {
        Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime_10d06d4(&uStack_38);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar7 = System_DateTimeOffset__op_LessThan_2b51414
                          (uVar4,uVar1,uVar2,uVar3,uStack_38,uStack_34,uStack_30,uStack_2c,0);
      }
      return uVar7;
    }
  }
  return 0;
}

