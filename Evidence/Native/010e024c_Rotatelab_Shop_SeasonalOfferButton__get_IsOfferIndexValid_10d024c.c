/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsOfferIndexValid
bool Rotatelab_Shop_SeasonalOfferButton__get_IsOfferIndexValid (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_IsOfferIndexValid
   bool Rotatelab_Shop_SeasonalOfferButton__get_IsOfferIndexValid
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

bool Rotatelab_Shop_SeasonalOfferButton__get_IsOfferIndexValid_10d024c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_010e02c8 + 0x10e0260);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e02cc + 0x10e0274));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(uint *)(iVar1 + 0xc) < *(uint *)(iVar3 + 0xc);
}

