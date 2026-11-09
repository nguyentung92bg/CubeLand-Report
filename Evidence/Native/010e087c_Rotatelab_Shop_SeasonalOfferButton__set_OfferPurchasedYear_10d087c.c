/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$set_OfferPurchasedYear
void Rotatelab_Shop_SeasonalOfferButton__set_OfferPurchasedYear (Rotatelab_Shop_SeasonalOfferButton_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$set_OfferPurchasedYear
   void Rotatelab_Shop_SeasonalOfferButton__set_OfferPurchasedYear
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, int32_t value, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__set_OfferPurchasedYear_10d087c
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_010e08f4 + 0x10e0890);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e08f8 + 0x10e08a4));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int32__ToString_2b6b9ec(iVar1 + 0xc,0);
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010e08fc + 0x10e08e0),uVar2,0);
  iVar1 = UnityEngine_PlayerPrefs__TrySetInt_35f6358(uVar2,param_2,0,extraout_r3,unaff_r4,unaff_lr);
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

