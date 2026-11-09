/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferStartTime
System_DateTimeOffset_o Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferStartTime
   System_DateTimeOffset_o Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime_10d0580(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int extraout_r1;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar4 = (char *)(_UNK_010e06c0 + 0x10e0598);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e06c4 + 0x10e05ac));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x14) == 0) {
    piVar5 = *(int **)(_UNK_010e06c8 + 0x10e066c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    puVar2 = *(undefined8 **)(iVar1 + 0x5c);
  }
  else {
    iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(int *)(iVar1 + 0x14) - (uint)(*(int *)(iVar1 + 0x10) == 0);
    bVar8 = 0xfff4417e < *(int *)(iVar1 + 0x10) - 1U;
    if (uVar3 < 0x3b && (uint)bVar8 <= uVar3 - 0x3a) {
      iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec(uVar3 - (!bVar8 + 0x3a));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      uVar7 = *(undefined4 *)(iVar1 + 0x14);
      iVar1 = *(int *)(**(int **)(_UNK_010e06d0 + 0x10e0628) + 0x74);
      if (iVar1 == 0) {
        FUN_00ec3934();
        iVar1 = extraout_r1;
      }
      System_DateTimeOffset__FromUnixTimeSeconds_2b4eb1c(&uStack_28,iVar1,uVar6,uVar7,0);
      goto LAB_010e06b4;
    }
    piVar5 = *(int **)(_UNK_010e06cc + 0x10e0694);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    puVar2 = (undefined8 *)(*(int *)(iVar1 + 0x5c) + 0x10);
  }
  uStack_28 = *puVar2;
  uStack_20 = puVar2[1];
LAB_010e06b4:
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  return;
}

