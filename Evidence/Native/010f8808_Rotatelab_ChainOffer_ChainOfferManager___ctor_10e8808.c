/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$.ctor
void Rotatelab_ChainOffer_ChainOfferManager___ctor (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$.ctor
   void Rotatelab_ChainOffer_ChainOfferManager___ctor (Rotatelab_ChainOffer_ChainOfferManager_o*
   __this, const MethodInfo* method); */

int Rotatelab_ChainOffer_ChainOfferManager___ctor_10e8808(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f88a4 + 0x10f881c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f88a8 + 0x10f8830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f88ac + 0x10f883c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f88b0 + 0x10f8848));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f88b4 + 0x10f885c));
  Rotatelab_ForcedOfferPopupTracker___ctor_1079438
            (uVar1,**(undefined4 **)(_UNK_010f88b8 + 0x10f8874),0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

