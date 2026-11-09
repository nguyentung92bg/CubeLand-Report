/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferEndTime
System_DateTimeOffset_o Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferEndTime
   System_DateTimeOffset_o Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime_10d06d4(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar3 = (char *)(_UNK_010e07c8 + 0x10e06ec);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e07cc + 0x10e0700));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(int *)(iVar1 + 0x1c) - (uint)(*(int *)(iVar1 + 0x18) == 0);
  bVar7 = 0xfff4417e < *(int *)(iVar1 + 0x18) - 1U;
  if (uVar2 < 0x3b && (uint)bVar7 <= uVar2 - 0x3a) {
    iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec(uVar2 - (!bVar7 + 0x3a));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    iVar1 = *(int *)(**(int **)(_UNK_010e07d4 + 0x10e075c) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1;
    }
    System_DateTimeOffset__FromUnixTimeSeconds_2b4eb1c(&uStack_28,iVar1,uVar5,uVar6,0);
  }
  else {
    piVar4 = *(int **)(_UNK_010e07d0 + 0x10e07a0);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    uStack_28 = **(undefined8 **)(iVar1 + 0x5c);
    uStack_20 = (*(undefined8 **)(iVar1 + 0x5c))[1];
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  return;
}

