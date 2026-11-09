/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$get_IsOfferVisible
bool Rotatelab_Shop_StarterBundleOfferButton__get_IsOfferVisible (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$get_IsOfferVisible
   bool Rotatelab_Shop_StarterBundleOfferButton__get_IsOfferVisible
   (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method); */

bool Rotatelab_Shop_StarterBundleOfferButton__get_IsOfferVisible_10d1a4c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010e1ae8 + 0x10e1a5c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1aec + 0x10e1a70));
    *pcVar4 = '\x01';
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar3 + 0x34),0);
  if (iVar3 != 0) {
    return false;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e1af0 + 0x10e1ab4));
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x78) + 0xc);
    pcVar4 = (char *)(_UNK_01089820 + 0x10897b0);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01089824 + 0x10897c4),0,extraout_r2,extraout_r3,unaff_r4);
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_01089828 + 0x10897d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    if (iVar3 != 0) {
      return *(int *)(iVar3 + 8) <= iVar2;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

