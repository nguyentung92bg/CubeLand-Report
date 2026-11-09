/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$RefreshRemainingTimeRegularlyCoroutine
System_Collections_IEnumerator_o* Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$RefreshRemainingTimeRegularlyCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine
   (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method); */

int Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_10e7f00
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f7f6c + 0x10f7f14);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7f70 + 0x10f7f28));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f7f74 + 0x10f7f3c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

