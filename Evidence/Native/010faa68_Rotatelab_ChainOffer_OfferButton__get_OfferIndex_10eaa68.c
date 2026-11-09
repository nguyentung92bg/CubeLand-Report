/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$get_OfferIndex
int32_t Rotatelab_ChainOffer_OfferButton__get_OfferIndex (Rotatelab_ChainOffer_OfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.OfferButton$$get_OfferIndex
   int32_t Rotatelab_ChainOffer_OfferButton__get_OfferIndex (Rotatelab_ChainOffer_OfferButton_o*
   __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_OfferButton__get_OfferIndex_10eaa68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_010fab04 + 0x10faa7c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fab08 + 0x10faa90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fab0c + 0x10faa9c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0x1c);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  iVar6 = *(int *)(iVar6 + 0xc);
  if (*(int *)(**(int **)(_UNK_010fab10 + 0x10faad0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = **(int **)(_UNK_010fab14 + 0x10faaf8);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(iVar3);
    iVar1 = *(int *)(iVar3 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (iVar6 != 0) {
    System_Array__IndexOfImpl_object__16cb198
              (iVar6,uVar4,0,*(undefined4 *)(iVar6 + 0xc),
               *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d4d8 + 0x164d4a4));
  uVar4 = thunk_FUN_00f00cdc();
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d4dc + 0x164d4b8));
  System_ArgumentNullException___ctor_2b08d00(uVar4,uVar2,0);
  func_0x00ec3920(uVar4,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

