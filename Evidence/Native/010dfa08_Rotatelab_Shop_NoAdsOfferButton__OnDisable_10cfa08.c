/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnDisable
void Rotatelab_Shop_NoAdsOfferButton__OnDisable (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnDisable
   void Rotatelab_Shop_NoAdsOfferButton__OnDisable (Rotatelab_Shop_NoAdsOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_NoAdsOfferButton__OnDisable_10cfa08(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_010dfb70 + 0x10dfa1c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb74 + 0x10dfa30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb78 + 0x10dfa3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb7c + 0x10dfa48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb80 + 0x10dfa54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb84 + 0x10dfa60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb88 + 0x10dfa6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfb8c + 0x10dfa78));
    *pcVar6 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__OnDisable_10ce584(param_1);
  piVar9 = *(int **)(_UNK_010dfb90 + 0x10dfa94);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x120);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dfb94 + 0x10dfab8));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar5,param_1,**(undefined4 **)(_UNK_010dfb98 + 0x10dfad8),0);
  uVar5 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar5,**(undefined4 **)(_UNK_010dfb9c + 0x10dfaf0));
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x120) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010dfba0 + 0x10dfb18));
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dfba4 + 0x10dfb2c));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010dfba8 + 0x10dfb48),0);
  if (iVar4 != 0) {
    pcVar6 = (char *)(_UNK_01083c84 + 0x1083c08);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083c88 + 0x1083c1c),uVar5,0);
      *pcVar6 = '\x01';
    }
    piVar9 = *(int **)(_UNK_01083c8c + 0x1083c34);
    iVar1 = *(int *)(iVar4 + 0x98);
    while( true ) {
      piVar2 = (int *)System_Delegate__Remove_2bbcc8c(iVar1,uVar5,0);
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

