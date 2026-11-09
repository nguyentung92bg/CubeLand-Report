/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$InstantiateOfferButton
Rotatelab_ChainOffer_OfferButton_o* Rotatelab_ChainOffer_BaseChainOfferController__InstantiateOfferButton (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, int32_t order, int32_t offerIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$InstantiateOfferButton
   Rotatelab_ChainOffer_OfferButton_o*
   Rotatelab_ChainOffer_BaseChainOfferController__InstantiateOfferButton
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, int32_t order, int32_t offerIndex,
   const MethodInfo* method); */

int * Rotatelab_ChainOffer_BaseChainOfferController__InstantiateOfferButton_10e95bc
                (int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_010f9838 + 0x10f95dc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f983c + 0x10f95f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9840 + 0x10f95fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9844 + 0x10f9608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9848 + 0x10f9614));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= param_3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar5 = *(int *)(iVar5 + param_3 * 4 + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(_UNK_010f984c + 0x10f966c);
  uVar6 = *(undefined4 *)(iVar5 + 8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  iVar3 = 0x28;
  if (iVar1 != 0) {
    iVar3 = 0x2c;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + iVar3);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar7 = (int *)UnityEngine_Object__Instantiate_object__14d4e4c
                            (uVar8,uVar6,0,**(undefined4 **)(_UNK_010f9850 + 0x10f96d0));
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0xf0))(piVar7,iVar5,param_1,*(undefined4 *)(*piVar7 + 0xf4));
  if (*(int *)(**(int **)(_UNK_010f9854 + 0x10f9710) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = Rotatelab_Extensions__RectTransform_fc1bd0(piVar7,0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_28,iVar1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar5,uStack_28,uStack_24,0);
  Rotatelab_ChainOffer_OfferButton__SetLockedState_10e985c(piVar7,0 < (int)param_2);
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar5 + 8);
  uVar9 = *(uint *)(iVar5 + 0xc);
  piVar2 = *(int **)(_UNK_010f9858 + 0x10f97e0);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar9 + 1;
    piVar2 = (int *)(iVar1 + uVar9 * 4 + 0x10);
    *piVar2 = (int)piVar7;
    thunk_FUN_00ec5080(piVar2,piVar7);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar5,piVar7,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  return piVar7;
}

