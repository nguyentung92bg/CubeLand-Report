/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_CurrentOffer
Rotatelab_ShopSeasonalOfferSO_SeasonalOfferData_o* Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_CurrentOffer
   Rotatelab_ShopSeasonalOfferSO_SeasonalOfferData_o*
   Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer (Rotatelab_Shop_SeasonalOfferButton_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_SeasonalOfferButton__get_CurrentOffer_10d02d0(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  uint uVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_010e0354 + 0x10e02e4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e0358 + 0x10e02f8));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(uint *)(iVar1 + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) <= uVar4) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_2b955c8
              (0,uVar4,**(undefined4 **)(_UNK_010e035c + 0x10e0348),extraout_r3,unaff_r4,unaff_r5,
               unaff_r11,unaff_lr);
  }
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10);
}

