/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Unregister
void Rotatelab_TriggeredOfferPresenter__Unregister (Rotatelab_ITriggeredOffer_o* offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter$$Unregister
   void Rotatelab_TriggeredOfferPresenter__Unregister (Rotatelab_ITriggeredOffer_o* offer, const
   MethodInfo* method); */

uint Rotatelab_TriggeredOfferPresenter__Unregister_107b6b4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0108b740 + 0x108b6c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b744 + 0x108b6dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b748 + 0x108b6e8));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108b74c + 0x108b6fc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
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

