/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsWithinOfferWindow
bool Rotatelab_Shop_SeasonalOfferButton__get_IsWithinOfferWindow (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsWithinOfferWindow
   bool Rotatelab_Shop_SeasonalOfferButton__get_IsWithinOfferWindow
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_SeasonalOfferButton__get_IsWithinOfferWindow_10d0488(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_010e0574 + 0x10e049c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0578 + 0x10e04b0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010e057c + 0x10e04c4);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = 0;
  System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_38,0);
  uVar4 = uStack_2c;
  uVar3 = uStack_30;
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime_10d0580(&uStack_38);
  iVar5 = System_DateTimeOffset__op_GreaterThanOrEqual_2b51504
                    (uVar1,uVar2,uVar3,uVar4,uStack_38,uStack_34,uStack_30,uStack_2c,0);
  if (iVar5 != 0) {
    Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime_10d06d4(&uStack_38);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = System_DateTimeOffset__op_LessThan_2b51414
                      (uVar1,uVar2,uVar3,uVar4,uStack_38,uStack_34,uStack_30,uStack_2c,0);
  }
  return uVar7;
}

