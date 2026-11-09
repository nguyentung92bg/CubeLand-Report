/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$Refresh
void Rotatelab_ChainOffer_ChainOfferManager__Refresh (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$Refresh
   void Rotatelab_ChainOffer_ChainOfferManager__Refresh (Rotatelab_ChainOffer_ChainOfferManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_ChainOfferManager__Refresh_10e81b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_010f85c4 + 0x10f81c8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85c8 + 0x10f81dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85cc + 0x10f81e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85d0 + 0x10f81f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85d4 + 0x10f8200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85d8 + 0x10f820c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85dc + 0x10f8218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85e0 + 0x10f8224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85e4 + 0x10f8230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85e8 + 0x10f823c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f85ec + 0x10f8248));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010f85f0 + 0x10f825c);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  if (**(int **)(iVar2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (**(int **)(iVar2 + 0x5c),**(undefined4 **)(_UNK_010f85f4 + 0x10f8290));
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_010f85f8 + 0x10f82e4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_30,0);
    uVar1 = uStack_2c;
    uVar3 = uStack_30;
    if (*(int *)(**(int **)(_UNK_010f85fc + 0x10f830c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uVar3,uVar1,0);
  }
  else {
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar5;
    }
    uVar3 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (**(undefined4 **)(iVar2 + 0x5c),**(undefined4 **)(_UNK_010f8600 + 0x10f82cc))
    ;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  FUN_00f88884(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
  if (*(uint *)(iVar7 + 0xc) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar8 = (undefined4 *)(param_1 + 0x20);
  *puVar8 = *(undefined4 *)(iVar7 + extraout_r1 * 4 + 0x10);
  thunk_FUN_00ec5080(puVar8);
  iVar2 = Rotatelab_ChainOffer_ChainOfferManager__get_IsActive_10e78dc();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar6 = 0;
    while( true ) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar2 + 0x10 + uVar6 * 4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_ChainOffer_BaseChainOfferController__SetActive_10e8620(iVar7,0);
      uVar6 = uVar6 + 1;
    }
  }
  else {
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(_UNK_010f8604 + 0x10f83b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_30,0);
    if (*(int *)(**(int **)(_UNK_010f8608 + 0x10f83e0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uStack_30,uStack_2c,0);
    if (*(int *)(**(int **)(_UNK_010f860c + 0x10f841c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Utilities__TryChangeValue_int__1663db8
                      (iVar2 + 0x90,uVar3,**(undefined4 **)(_UNK_010f8610 + 0x10f843c));
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_010f8614 + 0x10f8458) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(**(undefined4 **)(_UNK_010f8618 + 0x10f847c),0);
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    uVar6 = 0;
    piVar5 = *(int **)(_UNK_010f861c + 0x10f84b4);
    while( true ) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar2 + 0x10 + uVar6 * 4);
      uVar3 = *puVar8;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = UnityEngine_Object__op_Equality_36033f4(iVar7,uVar3,0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_ChainOffer_BaseChainOfferController__SetActive_10e8620(iVar7,uVar3);
      uVar6 = uVar6 + 1;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  uVar3 = Rotatelab_ChainOffer_ChainOfferManager__get_IsActive_10e78dc();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,uVar3,0);
  return;
}

