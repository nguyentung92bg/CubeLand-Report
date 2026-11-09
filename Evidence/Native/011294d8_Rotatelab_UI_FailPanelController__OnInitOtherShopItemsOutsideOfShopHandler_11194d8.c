/* IL2CPP: Rotatelab.UI.FailPanelController$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_UI_FailPanelController__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_UI_FailPanelController__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__OnInitOtherShopItemsOutsideOfShopHandler_11194d8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  
  pcVar5 = (char *)(_UNK_0112977c + 0x11294f0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01129780 + 0x1129504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01129784 + 0x1129510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01129788 + 0x112951c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112978c + 0x1129528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01129790 + 0x1129534));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0 < *(int *)(*(int *)(param_1 + 0xb4) + 0xc)) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01129794 + 0x112956c));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Networking_SatoriBundleConfigFlag__GetBundle_fe7450
                    (*(int *)(iVar3 + 0x88),*(undefined4 *)(param_1 + 0x60),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(param_1 + 0x70);
  uVar10 = *(undefined4 *)(iVar3 + 0x20);
  if (*(int *)(**(int **)(_UNK_01129798 + 0x11295c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar12 = *(undefined4 **)(_UNK_0112979c + 0x11295ec);
  uVar7 = UnityEngine_Object__Instantiate_object__14d4dd0(uVar10,uVar7,*puVar12);
  puVar8 = (undefined4 *)(param_1 + 0xbc);
  *puVar8 = uVar7;
  thunk_FUN_00ec5080(puVar8,uVar7);
  piVar9 = (int *)*puVar8;
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar9 + 0xe8))(piVar9,iVar3,*(undefined4 *)(*piVar9 + 0xec));
  iVar3 = *(int *)(param_1 + 0xb4);
  uVar7 = *(undefined4 *)(param_1 + 0xbc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  piVar9 = *(int **)(_UNK_011297a0 + 0x1129660);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar11 != 0) {
    if (uVar6 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar6 + 1;
      puVar8 = (undefined4 *)(iVar11 + uVar6 * 4 + 0x10);
      *puVar8 = uVar7;
      thunk_FUN_00ec5080(puVar8,uVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar3,uVar7,*(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38));
    }
    if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = (int *)UnityEngine_Object__Instantiate_object__14d4dd0
                              (*(undefined4 *)(*(int *)(param_1 + 100) + 0x20),
                               *(undefined4 *)(param_1 + 0x70),*puVar12);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar4 + 0xe8))
              (piVar4,*(undefined4 *)(param_1 + 100),*(undefined4 *)(*piVar4 + 0xec));
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 != 0) {
      iVar11 = *(int *)(iVar3 + 8);
      uVar6 = *(uint *)(iVar3 + 0xc);
      iVar13 = *piVar9;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar6 < *(uint *)(iVar11 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar6 + 1;
        piVar9 = (int *)(iVar11 + uVar6 * 4 + 0x10);
        *piVar9 = (int)piVar4;
      }
      else {
        uVar6 = *(uint *)(iVar3 + 0xc);
        System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                  (iVar3,uVar6 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar11 = *(int *)(iVar3 + 8);
        *(uint *)(iVar3 + 0xc) = uVar6 + 1;
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar9 = (int *)(iVar11 + uVar6 * 4 + 0x10);
        *piVar9 = (int)piVar4;
      }
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar9 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

