/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnAllShopItems
void Rotatelab_Shop_ShopPanelController__SpawnAllShopItems (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnAllShopItems
   void Rotatelab_Shop_ShopPanelController__SpawnAllShopItems (Rotatelab_Shop_ShopPanelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__SpawnAllShopItems_10c1450(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 unaff_r4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  Rotatelab_Shop_ShopPanelController__SpawnCarouselBundles_10c23fc();
  Rotatelab_Shop_ShopPanelController__SpawnSeasonPassBundleItem_10c265c(param_1);
  Rotatelab_Shop_ShopPanelController__SpawnNoAdsItem_10c27e4(param_1);
  Rotatelab_Shop_ShopPanelController__SpawnPostNoAdsBundles_10c296c(param_1);
  pcVar6 = (char *)(_UNK_010d2d3c + 0x10d2bfc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2d40 + 0x10d2c10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2d44 + 0x10d2c1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2d48 + 0x10d2c28));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (*(int *)(**(int **)(_UNK_010d2d4c + 0x10d2c60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar3 = (int *)UnityEngine_Object__Instantiate_object__14d4e4c
                            (uVar7,uVar8,0,**(undefined4 **)(_UNK_010d2d50 + 0x10d2c88),unaff_r4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xf0))
              (piVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*piVar3 + 0xf4));
    iVar5 = *(int *)(param_1 + 0x68);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    piVar4 = *(int **)(_UNK_010d2d54 + 0x10d2cec);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
      *piVar4 = (int)piVar3;
    }
    else {
      uVar10 = *(uint *)(iVar5 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar5,uVar10 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar9 = *(int *)(iVar5 + 8);
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar4 = (int *)(iVar9 + uVar10 * 4 + 0x10);
      *piVar4 = (int)piVar3;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

