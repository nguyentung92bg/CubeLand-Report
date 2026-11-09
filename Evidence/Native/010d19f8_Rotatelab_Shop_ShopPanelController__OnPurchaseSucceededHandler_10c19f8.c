/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnPurchaseSucceededHandler
void Rotatelab_Shop_ShopPanelController__OnPurchaseSucceededHandler (Rotatelab_Shop_ShopPanelController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0108bc88) */
/* WARNING: Removing unreachable block (ram,0x0108bc98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$OnPurchaseSucceededHandler
   void Rotatelab_Shop_ShopPanelController__OnPurchaseSucceededHandler
   (Rotatelab_Shop_ShopPanelController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__OnPurchaseSucceededHandler_10c19f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  
  pcVar11 = (char *)(_UNK_010d1ac8 + 0x10d1a0c);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1acc + 0x10d1a20));
    *pcVar11 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  Rotatelab_Shop_ShopPanelController__RefreshShopVisibility_10c1480(param_1);
  if (*(char *)(param_1 + 0x85) == '\0') {
    return;
  }
  puVar13 = *(undefined4 **)(_UNK_010d1ad0 + 0x10d1a50);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar4 + 0x14) + 0x10) == 0) {
    uVar5 = *puVar13;
    *(undefined1 *)(param_1 + 0x84) = 0;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIManager__OpenPage_11276ec(iVar4,1,0);
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  pcVar11 = (char *)(_UNK_010d1d64 + 0x10d1ae8);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d68 + 0x10d1afc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d6c + 0x10d1b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d70 + 0x10d1b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d74 + 0x10d1b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d78 + 0x10d1b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d1d7c + 0x10d1b38));
    *pcVar11 = '\x01';
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    bVar16 = true;
  }
  else {
    bVar16 = *(char *)(param_1 + 0x86) != '\0';
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,0,0);
  *(undefined2 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x28),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,0,0);
  iVar4 = *(int *)(param_1 + 0x24);
  uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615994(iVar4,uVar5,0,0);
  piVar12 = *(int **)(_UNK_010d1d80 + 0x10d1c10);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x40);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar4,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d1d84 + 0x10d1c50));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar4,0,param_1,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d1d88 + 0x10d1c84));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_UI_CurrencyPanel__SetVisibilityOverPopup_10857d0(iVar4,0,0);
  piVar12 = *(int **)(_UNK_010d1d8c + 0x10d1cb4);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x114);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar4,1,**(undefined4 **)(_UNK_010d1d90 + 0x10d1cec));
  piVar12 = (int *)(param_1 + 0x88);
  iVar4 = *piVar12;
  *piVar12 = 0;
  thunk_FUN_00ec5080(piVar12,0);
  if (bVar16) {
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010d1d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
      return;
    }
    return;
  }
  if (*(int *)(**(int **)(_UNK_010d1d94 + 0x10d1d3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar11 = (char *)(_UNK_0108bdec + 0x108b770);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108bdf0 + 0x108b784),iVar4,0);
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
    *pcVar11 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be38 + 0x108b868));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar13 = *(undefined4 **)(_UNK_0108be3c + 0x108b894);
  *(undefined4 *)(iVar1 + 8) = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_UI_UIManager__get_ActivePageType_1127178(iVar2,0);
    if (iVar2 != 1) goto LAB_0108bca0;
  }
  piVar12 = *(int **)(_UNK_0108be40 + 0x108b900);
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  iVar14 = *(int *)(iVar1 + 0xc);
  uVar5 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar14 == 0) {
    iVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be44 + 0x108b93c));
    System_Func_object__bool____ctor_239b120
              (iVar14,iVar1,**(undefined4 **)(_UNK_0108be48 + 0x108b958),0);
    *(int *)(iVar1 + 0xc) = iVar14;
    thunk_FUN_00ec5080((int *)(iVar1 + 0xc),iVar14);
  }
  uVar5 = System_Linq_Enumerable__Where_object__1479294
                    (uVar5,iVar14,**(undefined4 **)(_UNK_0108be4c + 0x108b980));
  piVar9 = *(int **)(_UNK_0108be50 + 0x108b998);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  puVar13 = *(undefined4 **)(iVar2 + 0x5c);
  iVar14 = puVar13[1];
  if (iVar14 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar13 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar10 = *puVar13;
    iVar14 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108be54 + 0x108b9e0));
    System_Func_object__Int32Enum____ctor_239b3a8
              (iVar14,uVar10,**(undefined4 **)(_UNK_0108be58 + 0x108ba00),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar14;
    thunk_FUN_00ec5080(piVar9,iVar14);
  }
  piVar9 = (int *)System_Linq_Enumerable__OrderBy_object__Int32Enum__146d818
                            (uVar5,iVar14,**(undefined4 **)(_UNK_0108be5c + 0x108ba2c));
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0108be60 + 0x108ba54)) {
        puVar13 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_0108ba9c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar13 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0108be60 + 0x108ba54),0);
LAB_0108ba9c:
  piVar9 = (int *)(*(code *)*puVar13)(piVar9,puVar13[1]);
  piVar15 = *(int **)(_UNK_0108be64 + 0x108bacc);
  piVar7 = *(int **)(_UNK_0108be68 + 0x108bad4);
  puVar13 = *(undefined4 **)(_UNK_0108be6c + 0x108badc);
  do {
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar15) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0108bb38;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,*piVar15,0);
LAB_0108bb38:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 == 0) {
      if (piVar9 == (int *)0x0) goto LAB_0108bca0;
      iVar2 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 == 0) goto LAB_0108bc54;
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0108bbb0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,*piVar7,0);
LAB_0108bbb0:
    uVar5 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    iVar2 = *piVar12;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar12;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70(iVar2,uVar5,*puVar13);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 2;
    if (uVar6 == 0) break;
    if (piVar12[-1] == **(int **)(_UNK_0108be70 + 0x108bc28)) {
      puVar13 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
      goto LAB_0108bc70;
    }
  }
LAB_0108bc54:
  puVar13 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_0108be70 + 0x108bc28),0);
LAB_0108bc70:
  (*(code *)*puVar13)(piVar9,puVar13[1]);
LAB_0108bca0:
  piVar12 = *(int **)(_UNK_0108be74 + 0x108bcac);
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar12;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
    }
  }
  else {
    iVar2 = *piVar12;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar12;
    }
    piVar9 = (int *)(*(int *)(iVar2 + 0x5c) + 0xc);
    *piVar9 = iVar4;
    thunk_FUN_00ec5080(piVar9,iVar4);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0108be78 + 0x108bd14));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar13 = *(undefined4 **)(_UNK_0108be7c + 0x108bd38);
    *(undefined1 *)(iVar4 + 0x1d) = 1;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c
              (iVar4,1,*(undefined4 *)(*(int *)(*piVar12 + 0x5c) + 8),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_TriggeredOfferPresenter__ShowNext_107be88(*(undefined4 *)(iVar1 + 8));
  }
  return;
}

