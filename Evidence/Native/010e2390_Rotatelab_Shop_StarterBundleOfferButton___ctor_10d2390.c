/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$.ctor
void Rotatelab_Shop_StarterBundleOfferButton___ctor (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$.ctor
   void Rotatelab_Shop_StarterBundleOfferButton___ctor (Rotatelab_Shop_StarterBundleOfferButton_o*
   __this, const MethodInfo* method); */

int Rotatelab_Shop_StarterBundleOfferButton___ctor_10d2390(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010e2418 + 0x10e23a4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e241c + 0x10e23b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2420 + 0x10e23c4));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e2424 + 0x10e23d8));
  Rotatelab_ForcedOfferPopupTracker___ctor_1079438
            (uVar1,**(undefined4 **)(_UNK_010e2428 + 0x10e23f0),0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x5c),uVar1);
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

