/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnBuyWithCoinButtonClicked
void Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithCoinButtonClicked (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnBuyWithCoinButtonClicked
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithCoinButtonClicked
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__OnBuyWithCoinButtonClicked_1087090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(_UNK_0109747c + 0x10970a8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097480 + 0x10970bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097484 + 0x10970c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097488 + 0x10970d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109748c + 0x10970e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097490 + 0x10970ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097494 + 0x10970f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097498 + 0x1097104));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109749c + 0x1097110));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010974a0 + 0x109711c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010974a4 + 0x1097128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010974a8 + 0x1097134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010974ac + 0x1097140));
    *pcVar6 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010974b0 + 0x1097154));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  puVar8 = *(undefined4 **)(_UNK_010974b4 + 0x109718c);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar2 + 0x28),0);
  puVar9 = *(undefined4 **)(_UNK_010974b8 + 0x10971d0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 < *(int *)(iVar3 + 0x10)) {
    puVar8 = (undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + 0xc) = *puVar8;
    thunk_FUN_00ec5080();
    *puVar8 = 0;
    thunk_FUN_00ec5080(puVar8,0);
    Rotatelab_Currency_UI_HeartPurchasePopup__Hide_1086e3c(param_1);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010974cc + 0x109722c));
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010974d0 + 0x1097240));
    System_Action___ctor_2b10bac(uVar4,iVar1,**(undefined4 **)(_UNK_010974d4 + 0x109725c),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_ShopPanelController__Show_10c1d9c(iVar2,1,uVar4,0);
    piVar7 = *(int **)(_UNK_010974d8 + 0x1097290);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x11c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__bool__bool___Raise_23a5cbc
              (iVar1,0,1,1,**(undefined4 **)(_UNK_010974dc + 0x10972d0));
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(iVar1 + 0x28);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = (**(code **)(*piVar7 + 0xf0))(piVar7,*(undefined4 *)(*piVar7 + 0xf4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(uint *)(iVar1 + 0x10);
  (**(code **)(*piVar7 + 0xf8))
            (piVar7,uVar5,(uint)uVar10 - uVar5,
             (int)((ulonglong)uVar10 >> 0x20) -
             (((int)uVar5 >> 0x1f) + (uint)((uint)uVar10 < uVar5)),*(undefined4 *)(*piVar7 + 0xfc));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(iVar1 + 0x58);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (**(code **)(*piVar7 + 0x110))(piVar7,*(undefined4 *)(*piVar7 + 0x114));
  piVar7 = *(int **)(_UNK_010974bc + 0x10973d8);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  Rotatelab_Currency_UI_HeartPurchasePopup__OnHeartsBought_10874e8
            (param_1,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8));
  piVar7 = *(int **)(_UNK_010974c0 + 0x109740c);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))
            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar1 + 0x10),
             **(undefined4 **)(_UNK_010974c8 + 0x109746c),*(undefined4 *)(iVar2 + 0x14));
  return;
}

