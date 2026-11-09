/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnPostNoAdsBundles
void Rotatelab_Shop_ShopPanelController__SpawnPostNoAdsBundles (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d2b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$SpawnPostNoAdsBundles
   void Rotatelab_Shop_ShopPanelController__SpawnPostNoAdsBundles
   (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__SpawnPostNoAdsBundles_10c296c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  
  pcVar4 = (char *)(_UNK_010d2bc4 + 0x10d2984);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2bc8 + 0x10d2998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2bcc + 0x10d29a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2bd0 + 0x10d29b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2bd4 + 0x10d29bc));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x14);
  uVar5 = 0;
  while( true ) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar6 + 0xc) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar8 = *(int *)(iVar6 + 0x10 + uVar5 * 4);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0x14) == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d2bd8 + 0x10d2a34));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0x84) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle_fe7450
                        (*(int *)(iVar1 + 0x84),iVar8,0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    uVar7 = *(undefined4 *)(iVar8 + 0x20);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10);
    if (*(int *)(**(int **)(_UNK_010d2bdc + 0x10d2aa8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar2 = (int *)UnityEngine_Object__Instantiate_object__14d4e4c
                              (uVar7,uVar9,0,**(undefined4 **)(_UNK_010d2be0 + 0x10d2ad0));
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 0xe8))(piVar2,iVar8,*(undefined4 *)(*piVar2 + 0xec));
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar1 + 8);
    uVar10 = *(uint *)(iVar1 + 0xc);
    piVar3 = *(int **)(_UNK_010d2be4 + 0x10d2b34);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar10 + 1;
      piVar3 = (int *)(iVar11 + uVar10 * 4 + 0x10);
      *piVar3 = (int)piVar2;
      thunk_FUN_00ec5080(piVar3,piVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,piVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    if (*(int *)(iVar8 + 0x14) == 0) {
      *(int *)(param_1 + 0x80) = (int)piVar2;
      thunk_FUN_00ec5080((int *)(param_1 + 0x80),piVar2);
    }
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

