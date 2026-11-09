/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$IsTriggeredOfferEligible
bool Rotatelab_Shop_StarterBundleOfferButton__IsTriggeredOfferEligible (Rotatelab_Shop_StarterBundleOfferButton_o* __this, int32_t trigger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$IsTriggeredOfferEligible
   bool Rotatelab_Shop_StarterBundleOfferButton__IsTriggeredOfferEligible
   (Rotatelab_Shop_StarterBundleOfferButton_o* __this, int32_t trigger, const MethodInfo* method);
    */

undefined1
Rotatelab_Shop_StarterBundleOfferButton__IsTriggeredOfferEligible_10d1af4(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_010e1ba0 + 0x10e1b0c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1ba4 + 0x10e1b20));
    *pcVar6 = '\x01';
  }
  iVar5 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164));
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e1ba8 + 0x10e1b50));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x78) + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (param_2 == 1) {
    puVar1 = (undefined1 *)(iVar5 + 0x25);
  }
  else {
    if (param_2 != 0) {
      iStack_14 = param_2;
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c54 + 0xff8bf0),param_2,0);
      uVar2 = FUN_00ec393c(uVar2,&iStack_14);
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c58 + 0xff8c08));
      uVar3 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c5c + 0xff8c1c));
      System_ArgumentOutOfRangeException___ctor_2b0f0f0(uVar3,uVar4,uVar2,0,0);
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_00ff8c60 + 0xff8c44));
      func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    puVar1 = (undefined1 *)(iVar5 + 0x24);
  }
  return *puVar1;
}

