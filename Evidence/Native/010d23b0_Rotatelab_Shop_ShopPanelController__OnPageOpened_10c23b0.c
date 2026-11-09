/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnPageOpened
void Rotatelab_Shop_ShopPanelController__OnPageOpened (Rotatelab_Shop_ShopPanelController_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0108bc88) */
/* WARNING: Removing unreachable block (ram,0x0108bc98) */
/* WARNING: Removing unreachable block (ram,0x010d1fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnPageOpened
   void Rotatelab_Shop_ShopPanelController__OnPageOpened (Rotatelab_Shop_ShopPanelController_o*
   __this, int32_t type, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__OnPageOpened_10c23b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  int *piVar15;
  bool bVar16;
  
  if (param_2 == 2) {
    pcVar14 = (char *)(_UNK_010d21d8 + 0x10d1db8);
    if (*pcVar14 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21dc + 0x10d1dcc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e0 + 0x10d1dd8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e4 + 0x10d1de4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21e8 + 0x10d1df0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21ec + 0x10d1dfc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f0 + 0x10d1e08));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f4 + 0x10d1e14));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21f8 + 0x10d1e20));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d21fc + 0x10d1e2c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d2200 + 0x10d1e38));
      *pcVar14 = '\x01';
    }
    piVar15 = *(int **)(_UNK_010d2204 + 0x10d1e4c);
    iVar2 = *piVar15;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar15;
    }
    if (**(char **)(iVar2 + 0x5c) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x84) != '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x85) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x88),0);
    puVar3 = *(undefined4 **)(_UNK_010d2208 + 0x10d1ea4);
    *(undefined1 *)(param_1 + 0x86) = 0;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar2,1,param_1,0);
    puVar3 = *(undefined4 **)(_UNK_010d220c + 0x10d1edc);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0x10);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x28),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar4,iVar2 != 0,0);
    iVar12 = *(int *)(param_1 + 0x24);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = param_1;
    if ((*(int *)(*(int *)(iVar4 + 0x14) + 0x10) != 0) &&
       (iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010d2210 + 0x10d1f8c)), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615994(iVar12,uVar6,0,0);
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar4,1,0);
    *(undefined1 *)(param_1 + 0x84) = 1;
    if (iVar2 == 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_UIManager__OpenPage_11276ec(iVar2,2,0);
    }
    else {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d2214 + 0x10d203c));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar2,1,0);
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_39bbcf8
              (*(int *)(param_1 + 0x2c),0x3f800000,0);
    Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(param_1);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d2218 + 0x10d20c0));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x84) != 0) {
      Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle_fe87bc
                (*(int *)(iVar2 + 0x84),0);
      if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0x14);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged_10c0134(iVar2);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010d221c + 0x10d2124));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_IAP_PurchasesListener__OnShopOpened_109a79c(iVar2,0);
      piVar15 = *(int **)(_UNK_010d2220 + 0x10d2150);
      iVar2 = *piVar15;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar15;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x3c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction__Raise_fc08b8(iVar2,0);
      piVar15 = *(int **)(_UNK_010d2224 + 0x10d2190);
      iVar2 = *piVar15;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar15;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x114);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),0,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_1 + 0x84) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  thunk_FUN_00ec5080();
  pcVar14 = (char *)(_UNK_010d1d64 + 0x10d1ae8);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d68 + 0x10d1afc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d6c + 0x10d1b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d70 + 0x10d1b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d74 + 0x10d1b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d78 + 0x10d1b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d7c + 0x10d1b38));
    *pcVar14 = '\x01';
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    bVar16 = true;
  }
  else {
    bVar16 = *(char *)(param_1 + 0x86) != '\0';
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
  *(undefined2 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x28),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar2,uVar6,0,0);
  piVar15 = *(int **)(_UNK_010d1d80 + 0x10d1c10);
  iVar2 = *piVar15;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar15;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x40);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar2,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d1d84 + 0x10d1c50));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar2,0,param_1,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d1d88 + 0x10d1c84));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar2,0,0);
  piVar15 = *(int **)(_UNK_010d1d8c + 0x10d1cb4);
  iVar2 = *piVar15;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar15;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x114);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,**(undefined4 **)(_UNK_010d1d90 + 0x10d1cec));
  piVar15 = (int *)(param_1 + 0x88);
  iVar2 = *piVar15;
  *piVar15 = 0;
  thunk_FUN_00ec5080(piVar15,0);
  if (bVar16) {
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010d1d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
      return;
    }
    return;
  }
  if (*(int *)(**(int **)(_UNK_010d1d94 + 0x10d1d3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar14 = (char *)(_UNK_0108bdec + 0x108b770);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf0 + 0x108b784),iVar2,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf4 + 0x108b790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf8 + 0x108b79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdfc + 0x108b7a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be00 + 0x108b7b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be04 + 0x108b7c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be08 + 0x108b7cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be0c + 0x108b7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be10 + 0x108b7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be14 + 0x108b7f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be18 + 0x108b7fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be1c + 0x108b808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be20 + 0x108b814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be24 + 0x108b820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be28 + 0x108b82c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be2c + 0x108b838));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be30 + 0x108b844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108be34 + 0x108b850));
    *pcVar14 = '\x01';
  }
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be38 + 0x108b868));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(_UNK_0108be3c + 0x108b894);
  *(undefined4 *)(iVar4 + 8) = 0;
  iVar12 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar12 + 0x14) + 0x10) == 0) {
    iVar12 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar12,0);
    if (iVar12 != 1) goto LAB_0108bca0;
  }
  piVar15 = *(int **)(_UNK_0108be40 + 0x108b900);
  iVar12 = *piVar15;
  if (*(int *)(iVar12 + 0x74) == 0) {
    FUN_00ec3934();
    iVar12 = *piVar15;
  }
  iVar5 = *(int *)(iVar4 + 0xc);
  uVar6 = **(undefined4 **)(iVar12 + 0x5c);
  if (iVar5 == 0) {
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be44 + 0x108b93c));
    System_Func_object__bool____ctor_239b120
              (iVar5,iVar4,**(undefined4 **)(_UNK_0108be48 + 0x108b958),0);
    *(int *)(iVar4 + 0xc) = iVar5;
    thunk_FUN_00ec5080((int *)(iVar4 + 0xc),iVar5);
  }
  uVar6 = System_Linq_Enumerable__Where_object__1479294
                    (uVar6,iVar5,**(undefined4 **)(_UNK_0108be4c + 0x108b980));
  piVar10 = *(int **)(_UNK_0108be50 + 0x108b998);
  iVar12 = *piVar10;
  if (*(int *)(iVar12 + 0x74) == 0) {
    FUN_00ec3934();
    iVar12 = *piVar10;
  }
  puVar3 = *(undefined4 **)(iVar12 + 0x5c);
  iVar5 = puVar3[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar12 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar11 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be54 + 0x108b9e0));
    System_Func_object__Int32Enum____ctor_239b3a8
              (iVar5,uVar11,**(undefined4 **)(_UNK_0108be58 + 0x108ba00),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
    *piVar10 = iVar5;
    thunk_FUN_00ec5080(piVar10,iVar5);
  }
  piVar10 = (int *)System_Linq_Enumerable__OrderBy_object__Int32Enum__146d818
                             (uVar6,iVar5,**(undefined4 **)(_UNK_0108be5c + 0x108ba2c));
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0108be60 + 0x108ba54)) {
        puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0108ba9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0108be60 + 0x108ba54),0);
LAB_0108ba9c:
  piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  piVar13 = *(int **)(_UNK_0108be64 + 0x108bacc);
  piVar8 = *(int **)(_UNK_0108be68 + 0x108bad4);
  puVar3 = *(undefined4 **)(_UNK_0108be6c + 0x108badc);
  do {
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar13) {
          puVar1 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0108bb38;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar10,*piVar13,0);
LAB_0108bb38:
    iVar12 = (*(code *)*puVar1)(piVar10,puVar1[1]);
    if (iVar12 == 0) {
      if (piVar10 == (int *)0x0) goto LAB_0108bca0;
      iVar12 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 == 0) goto LAB_0108bc54;
      piVar15 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      break;
    }
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar12 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar1 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0108bbb0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piVar10,*piVar8,0);
LAB_0108bbb0:
    uVar6 = (*(code *)*puVar1)(piVar10,puVar1[1]);
    iVar12 = *piVar15;
    if (*(int *)(iVar12 + 0x74) == 0) {
      FUN_00ec3934();
      iVar12 = *piVar15;
    }
    iVar12 = *(int *)(*(int *)(iVar12 + 0x5c) + 4);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70(iVar12,uVar6,*puVar3);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 2;
    if (uVar7 == 0) break;
    if (piVar15[-1] == **(int **)(_UNK_0108be70 + 0x108bc28)) {
      puVar3 = (undefined4 *)(iVar12 + *piVar15 * 8 + 0xc0);
      goto LAB_0108bc70;
    }
  }
LAB_0108bc54:
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0108be70 + 0x108bc28),0);
LAB_0108bc70:
  (*(code *)*puVar3)(piVar10,puVar3[1]);
LAB_0108bca0:
  piVar15 = *(int **)(_UNK_0108be74 + 0x108bcac);
  iVar12 = *piVar15;
  if (*(int *)(iVar12 + 0x74) == 0) {
    FUN_00ec3934();
    iVar12 = *piVar15;
  }
  iVar12 = *(int *)(*(int *)(iVar12 + 0x5c) + 4);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar12 + 0x14) == 0) {
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  else {
    iVar12 = *piVar15;
    if (*(int *)(iVar12 + 0x74) == 0) {
      FUN_00ec3934();
      iVar12 = *piVar15;
    }
    piVar10 = (int *)(*(int *)(iVar12 + 0x5c) + 0xc);
    *piVar10 = iVar2;
    thunk_FUN_00ec5080(piVar10,iVar2);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108be78 + 0x108bd14));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(_UNK_0108be7c + 0x108bd38);
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar2,1,*(undefined4 *)(*(int *)(*piVar15 + 0x5c) + 8),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(*(undefined4 *)(iVar4 + 8));
  }
  return;
}

