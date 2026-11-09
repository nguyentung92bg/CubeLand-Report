/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$get_IsOfferVisible
bool Rotatelab_Shop_NoAdsOfferButton__get_IsOfferVisible (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$get_IsOfferVisible
   bool Rotatelab_Shop_NoAdsOfferButton__get_IsOfferVisible (Rotatelab_Shop_NoAdsOfferButton_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Shop_NoAdsOfferButton__get_IsOfferVisible_10cf6e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010df790 + 0x10df6f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df794 + 0x10df704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df798 + 0x10df710));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010df79c + 0x10df724) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar3 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar2,0);
  if (iVar3 != 0) {
    return false;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010df7a0 + 0x10df75c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x78) != 0) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x78) + 0x10);
    pcVar4 = (char *)(_UNK_01089820 + 0x10897b0);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01089824 + 0x10897c4),0,extraout_r2,extraout_r3,unaff_r4);
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_01089828 + 0x10897d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    if (iVar3 != 0) {
      return *(int *)(iVar3 + 8) <= iVar1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

