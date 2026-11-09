/* IL2CPP: Rotatelab.ChainOffer.PaidOfferButton$$get_RewardEntries
System_Collections_Generic_IList_BundleOffer__o* Rotatelab_ChainOffer_PaidOfferButton__get_RewardEntries (Rotatelab_ChainOffer_PaidOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.PaidOfferButton$$get_RewardEntries
   System_Collections_Generic_IList_BundleOffer__o*
   Rotatelab_ChainOffer_PaidOfferButton__get_RewardEntries (Rotatelab_ChainOffer_PaidOfferButton_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_ChainOffer_PaidOfferButton__get_RewardEntries_10ebcec(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010fbd48 + 0x10fbd00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fbd4c + 0x10fbd14));
    *pcVar2 = '\x01';
  }
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_010fbd50 + 0x10fbd28));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x2c);
}

