/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnEnable
void Rotatelab_Shop_NoAdsOfferButton__OnEnable (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnEnable
   void Rotatelab_Shop_NoAdsOfferButton__OnEnable (Rotatelab_Shop_NoAdsOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_NoAdsOfferButton__OnEnable_10cf864(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar6 = (char *)(_UNK_010df9cc + 0x10df878);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9d0 + 0x10df88c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9d4 + 0x10df898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9d8 + 0x10df8a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9dc + 0x10df8b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9e0 + 0x10df8bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9e4 + 0x10df8c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df9e8 + 0x10df8d4));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__OnEnable_10ce400(param_1);
  piVar9 = *(int **)(_UNK_010df9ec + 0x10df8f0);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x120);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010df9f0 + 0x10df914));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar5,param_1,**(undefined4 **)(_UNK_010df9f4 + 0x10df934),0);
  uVar5 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar5,**(undefined4 **)(_UNK_010df9f8 + 0x10df94c));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x120) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010df9fc + 0x10df974));
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dfa00 + 0x10df988));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010dfa04 + 0x10df9a4),0);
  if (iVar4 != 0) {
    pcVar6 = (char *)(_UNK_01083be4 + 0x1083b68);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083be8 + 0x1083b7c),uVar5,0);
      *pcVar6 = '\x01';
    }
    piVar9 = *(int **)(_UNK_01083bec + 0x1083b94);
    iVar1 = *(int *)(iVar4 + 0x98);
    while( true ) {
      piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar5,0);
      piVar8 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar8 = piVar2, *piVar2 != *piVar9)) break;
      iVar3 = FUN_00efd180((int *)(iVar4 + 0x98),piVar8,iVar1);
      bVar10 = iVar3 == iVar1;
      iVar1 = iVar3;
      if (bVar10) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

