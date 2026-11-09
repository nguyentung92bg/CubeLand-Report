/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$ApplyOffersGridSpacing
void Rotatelab_Shop_ShopBundleOfferController__ApplyOffersGridSpacing (Rotatelab_Shop_ShopBundleOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$ApplyOffersGridSpacing
   void Rotatelab_Shop_ShopBundleOfferController__ApplyOffersGridSpacing
   (Rotatelab_Shop_ShopBundleOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopBundleOfferController__ApplyOffersGridSpacing_10c0cb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  pcVar3 = (char *)(_UNK_010d0d68 + 0x10d0cc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0d6c + 0x10d0cdc));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(uint *)(*(int *)(param_1 + 0x2c) + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(int *)(iVar6 + 0xc) - 1;
  if ((int)uVar7 < (int)uVar4) {
    uVar4 = uVar7;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar2 = *(int *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(iVar6 + uVar4 * 4 + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  pcVar3 = (char *)(_UNK_039bbfbc + 0x39bbf74);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039bbfc0 + 0x39bbf88),uVar5,uVar1,0);
    *pcVar3 = '\x01';
  }
  UnityEngine_UI_LayoutGroup__SetProperty_Vector2__14add20
            (iVar2,iVar2 + 0x4c,uVar5,uVar1,**(undefined4 **)(_UNK_039bbfc4 + 0x39bbfa8));
  return;
}

