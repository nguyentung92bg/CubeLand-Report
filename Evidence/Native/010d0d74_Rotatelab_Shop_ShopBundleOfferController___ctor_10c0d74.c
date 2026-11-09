/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$.ctor
void Rotatelab_Shop_ShopBundleOfferController___ctor (Rotatelab_Shop_ShopBundleOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$.ctor
   void Rotatelab_Shop_ShopBundleOfferController___ctor (Rotatelab_Shop_ShopBundleOfferController_o*
   __this, const MethodInfo* method); */

int Rotatelab_Shop_ShopBundleOfferController___ctor_10c0d74(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010d0dfc + 0x10d0d88);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0e00 + 0x10d0d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0e04 + 0x10d0da8));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d0e08 + 0x10d0dbc));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,4,**(undefined4 **)(_UNK_010d0e0c + 0x10d0dd4));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar1);
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

