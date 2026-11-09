/* IL2CPP: Rotatelab.ChainOffer.FreeOfferButton$$Initialize
void Rotatelab_ChainOffer_FreeOfferButton__Initialize (Rotatelab_ChainOffer_FreeOfferButton_o* __this, Rotatelab_ChainOffer_ChainOfferSo_ChainOfferData_o* data, Rotatelab_ChainOffer_BaseChainOfferController_o* controller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.FreeOfferButton$$Initialize
   void Rotatelab_ChainOffer_FreeOfferButton__Initialize (Rotatelab_ChainOffer_FreeOfferButton_o*
   __this, Rotatelab_ChainOffer_ChainOfferSo_ChainOfferData_o* data,
   Rotatelab_ChainOffer_BaseChainOfferController_o* controller, const MethodInfo* method); */

void Rotatelab_ChainOffer_FreeOfferButton__Initialize_10eb5d4
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  
  pcVar5 = (char *)(_UNK_010fb848 + 0x10fb5f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb84c + 0x10fb608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb850 + 0x10fb614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb854 + 0x10fb620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb858 + 0x10fb62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb85c + 0x10fb638));
    *pcVar5 = '\x01';
  }
  *(int *)(param_1 + 0x24) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x24),param_2);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),param_3);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_010fb860 + 0x10fb688),
                       *(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc));
  *(int *)(param_1 + 0x30) = iVar1;
  thunk_FUN_00ec5080();
  iVar1 = 4;
  iVar10 = 0x10;
  while( true ) {
    if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = iVar1 - 4;
    if (*(int *)(*(int *)(param_2 + 0xc) + 0xc) <= (int)uVar9) break;
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    piVar8 = *(int **)(param_1 + 0x30);
    if (*(int *)(**(int **)(_UNK_010fb864 + 0x10fb6d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar6,uVar7,0,**(undefined4 **)(_UNK_010fb868 + 0x10fb708));
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
      uVar6 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar6,0);
    }
    if ((uint)piVar8[3] <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)((int)piVar8 + iVar10) = iVar2;
    thunk_FUN_00ec5080((int *)((int)piVar8 + iVar10),iVar2);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar2 + iVar1 * 4);
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_BundleOffer__Initialize_10c03d8(iVar3,*(undefined4 *)(iVar2 + iVar1 * 4),0);
    iVar10 = iVar10 + 4;
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fb86c + 0x10fb7fc));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar6,param_1,**(undefined4 **)(_UNK_010fb870 + 0x10fb81c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar6,uVar6,0);
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar5 = '\x01';
  }
  iVar10 = *(int *)(iVar1 + 0xc);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar10 + 8);
  uVar9 = *(uint *)(iVar10 + 0xc);
  piVar8 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar10 + 0xc) = uVar9 + 1;
    puVar4 = (undefined4 *)(iVar2 + uVar9 * 4 + 0x10);
    *puVar4 = uVar6;
    thunk_FUN_00ec5080(puVar4,uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar10,uVar6,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

