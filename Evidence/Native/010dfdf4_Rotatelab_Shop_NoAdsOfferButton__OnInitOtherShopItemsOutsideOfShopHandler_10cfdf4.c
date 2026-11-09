/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_Shop_NoAdsOfferButton__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_Shop_NoAdsOfferButton__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_NoAdsOfferButton__OnInitOtherShopItemsOutsideOfShopHandler_10cfdf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_010dfe98 + 0x10dfe08);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfe9c + 0x10dfe1c));
    *pcVar4 = '\x01';
  }
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  if (*(int *)(**(int **)(_UNK_010dfea0 + 0x10dfe38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar3 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar2,0);
  if (iVar3 != 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_00fb6f28 + 0xfb6dec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb6f2c + 0xfb6e00),iVar3,*(char *)(param_1 + 0x48) != '\0',0
                );
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb6f30 + 0xfb6e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb6f34 + 0xfb6e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb6f38 + 0xfb6e24));
    *pcVar4 = '\x01';
  }
  *(int *)(iVar5 + 0x20) = iVar3;
  thunk_FUN_00ec5080((int *)(iVar5 + 0x20),iVar3);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
  thunk_FUN_00ec5080();
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
  thunk_FUN_00ec5080();
  iVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar5,**(undefined4 **)(_UNK_00fb6f3c + 0xfb6e74));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb6f40 + 0xfb6e98));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,iVar5,**(undefined4 **)(_UNK_00fb6f44 + 0xfb6eb8),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fb6f48 + 0xfb6eec));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_IAP_PurchasesListener__AddIAPButton_109a0c0
            (iVar1,iVar5,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),0);
  return;
}

