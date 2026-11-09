/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnCarouselBundles
void Rotatelab_Shop_ShopPanelController__SpawnCarouselBundles (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnCarouselBundles
   void Rotatelab_Shop_ShopPanelController__SpawnCarouselBundles
   (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__SpawnCarouselBundles_10c23fc(int param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  pcVar3 = (char *)(_UNK_010d263c + 0x10d2414);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2640 + 0x10d2428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2644 + 0x10d2434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2648 + 0x10d2440));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar9 = 0;
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar9) {
      return;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar10 = *(int *)(iVar4 + 0x10 + uVar9 * 4);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(iVar10 + 0x20);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10);
    if (*(int *)(**(int **)(_UNK_010d264c + 0x10d24bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar1 = (int *)UnityEngine_Object__Instantiate_object__14d4e4c
                              (uVar6,uVar8,0,**(undefined4 **)(_UNK_010d2650 + 0x10d24e4));
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar1 + 0xe8))(piVar1,iVar10,*(undefined4 *)(*piVar1 + 0xec));
    iVar7 = *(int *)(param_1 + 0x68);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar7 + 8);
    uVar5 = *(uint *)(iVar7 + 0xc);
    piVar2 = *(int **)(_UNK_010d2654 + 0x10d2544);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar11 == 0) break;
    if (uVar5 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar5 + 1;
      piVar2 = (int *)(iVar11 + uVar5 * 4 + 0x10);
      *piVar2 = (int)piVar1;
      thunk_FUN_00ec5080(piVar2,piVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,piVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
    }
    iVar7 = *(int *)(param_1 + 0x6c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar7 + 8);
    uVar5 = *(uint *)(iVar7 + 0xc);
    piVar2 = *(int **)(_UNK_010d2658 + 0x10d25c0);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar5 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar5 + 1;
      piVar2 = (int *)(iVar11 + uVar5 * 4 + 0x10);
      *piVar2 = (int)piVar1;
      thunk_FUN_00ec5080(piVar2,piVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,piVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
    }
    if (*(int *)(iVar10 + 0x14) == 1) {
      *(int *)(param_1 + 0x74) = (int)piVar1;
      thunk_FUN_00ec5080((int *)(param_1 + 0x74),piVar1);
    }
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

