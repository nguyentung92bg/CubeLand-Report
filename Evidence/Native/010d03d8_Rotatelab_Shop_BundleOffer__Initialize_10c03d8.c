/* IL2CPP: Rotatelab.Shop.BundleOffer$$Initialize
void Rotatelab_Shop_BundleOffer__Initialize (Rotatelab_Shop_BundleOffer_o* __this, ShopBundleSO_BundleOfferDetails_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BundleOffer$$Initialize
   void Rotatelab_Shop_BundleOffer__Initialize (Rotatelab_Shop_BundleOffer_o* __this,
   ShopBundleSO_BundleOfferDetails_o* data, const MethodInfo* method); */

void Rotatelab_Shop_BundleOffer__Initialize_10c03d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010d050c + 0x10d03f0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0510 + 0x10d0404));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x18),param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__IsNullOrWhiteSpace_2a0a85c(*(undefined4 *)(param_2 + 0x18),0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
    if (*(int *)(**(int **)(_UNK_010d0514 + 0x10d0468) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetOffsetMinY_fc2394(uVar2,0xc1d80000,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
    Rotatelab_Extensions__SetOffsetMaxY_fc2464(uVar2,0xc1d80000,0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc),0);
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010d0508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x2b0))
            (piVar3,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(*piVar3 + 0x2b4));
  return;
}

