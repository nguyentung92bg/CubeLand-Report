/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$OnDestroy
void Rotatelab_ChainOffer_ChainOfferManager__OnDestroy (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$OnDestroy
   void Rotatelab_ChainOffer_ChainOfferManager__OnDestroy (Rotatelab_ChainOffer_ChainOfferManager_o*
   __this, const MethodInfo* method); */

uint Rotatelab_ChainOffer_ChainOfferManager__OnDestroy_10e7f78(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010f7fd4 + 0x10f7f8c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7fd8 + 0x10f7fa0));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010f7fdc + 0x10f7fb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_0108b740 + 0x108b6c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b744 + 0x108b6dc),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b748 + 0x108b6e8));
    *pcVar4 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0108b74c + 0x108b6fc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 != 0) {
    uVar2 = System_Array__IndexOf_object__16445f0
                      (*(undefined4 *)(iVar1 + 8),param_1,0,*(undefined4 *)(iVar1 + 0xc),
                       *(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_0108b750 +
                                                                                0x108b734) + 0x10) +
                                                            0x60) + 100) + 0x10) + 0x60) + 0xa4));
    if (-1 < (int)uVar2) {
      System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar1,uVar2);
    }
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

