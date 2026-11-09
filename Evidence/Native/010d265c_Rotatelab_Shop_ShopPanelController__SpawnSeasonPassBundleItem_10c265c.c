/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnSeasonPassBundleItem
void Rotatelab_Shop_ShopPanelController__SpawnSeasonPassBundleItem (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnSeasonPassBundleItem
   void Rotatelab_Shop_ShopPanelController__SpawnSeasonPassBundleItem
   (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__SpawnSeasonPassBundleItem_10c265c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  
  pcVar3 = (char *)(_UNK_010d27c8 + 0x10d2670);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d27cc + 0x10d2684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d27d0 + 0x10d2690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d27d4 + 0x10d269c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (*(int *)(**(int **)(_UNK_010d27d8 + 0x10d26d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (uVar4,uVar6,0,**(undefined4 **)(_UNK_010d27dc + 0x10d26fc));
  puVar7 = (undefined4 *)(param_1 + 0x78);
  *puVar7 = uVar4;
  thunk_FUN_00ec5080(puVar7,uVar4);
  piVar8 = (int *)*puVar7;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xe8))
              (piVar8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*piVar8 + 0xec));
    iVar5 = *(int *)(param_1 + 0x68);
    uVar4 = *(undefined4 *)(param_1 + 0x78);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    piVar8 = *(int **)(_UNK_010d27e0 + 0x10d2778);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      puVar7 = (undefined4 *)(iVar9 + uVar10 * 4 + 0x10);
      *puVar7 = uVar4;
    }
    else {
      uVar10 = *(uint *)(iVar5 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar5,uVar10 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38) +
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
      puVar7 = (undefined4 *)(iVar9 + uVar10 * 4 + 0x10);
      *puVar7 = uVar4;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar7 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar7 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

