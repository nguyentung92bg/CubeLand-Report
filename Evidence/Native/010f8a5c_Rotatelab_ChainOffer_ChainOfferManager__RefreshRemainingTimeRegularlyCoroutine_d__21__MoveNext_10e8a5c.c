/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager.<RefreshRemainingTimeRegularlyCoroutine>d__21$$MoveNext
bool Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_d__21__MoveNext (Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.ChainOffer.ChainOfferManager.<RefreshRemainingTimeRegularlyCoroutine>d__21$$MoveNext
   bool 
   Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_d__21__MoveNext
   (Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_d__21_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_ChainOffer_ChainOfferManager__RefreshRemainingTimeRegularlyCoroutine_d__21__MoveNext_10e8a5c
          (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_010f8e50 + 0x10f8a74);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e54 + 0x10f8a88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e58 + 0x10f8a94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e5c + 0x10f8aa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e60 + 0x10f8aac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e64 + 0x10f8ab8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e68 + 0x10f8ac4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e6c + 0x10f8ad0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e70 + 0x10f8adc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f8e74 + 0x10f8ae8));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0x10);
  uStack_24 = 0;
  uStack_28 = 0;
  if (iVar1 == 2 || iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_ChainOffer_ChainOfferManager__GetCycleEndTime_10e8714(&uStack_30);
    *(undefined4 *)(param_1 + 0x18) = uStack_30;
    *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = *(int **)(_UNK_010f8e78 + 0x10f8b30);
  uVar7 = *(undefined4 *)(iVar10 + 0x10);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar2[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f8e7c + 0x10f8b7c));
    System_Predicate_object____ctor_1876380
              (iVar9,uVar6,**(undefined4 **)(_UNK_010f8e80 + 0x10f8b9c),0);
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
    *piVar4 = iVar9;
    thunk_FUN_00ec5080(piVar4,iVar9);
  }
  piVar4 = *(int **)(_UNK_010f8e84 + 0x10f8bc4);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__Exists_object__1486804
                    (uVar7,iVar9,**(undefined4 **)(_UNK_010f8e88 + 0x10f8be4));
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_010f8e8c + 0x10f8d4c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080();
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010f8e90 + 0x10f8c04) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_30,0);
    System_DateTime__op_Subtraction_2b4c068(&uStack_28,uStack_2c,uVar7,uVar6,uStack_30,uStack_2c,0);
    piVar8 = *(int **)(_UNK_010f8e94 + 0x10f8c54);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar11 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_28,0);
    if (dVar11 <= 0.0) {
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar8;
      }
      uStack_28 = **(undefined4 **)(iVar1 + 0x5c);
      uStack_24 = (*(undefined4 **)(iVar1 + 0x5c))[1];
      Rotatelab_ChainOffer_ChainOfferManager__Refresh_10e81b0(iVar10);
      Rotatelab_ChainOffer_ChainOfferManager__GetCycleEndTime_10e8714(&uStack_30);
      *(undefined4 *)(param_1 + 0x18) = uStack_30;
      *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010f8e98 + 0x10f8cd0));
    uVar6 = uStack_24;
    uVar7 = uStack_28;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = 0;
      uVar7 = Rotatelab_Extensions__GetTimeText_fc3638(uVar7,uVar6,0);
      iVar1 = *(int *)(iVar10 + 0x18);
      while( true ) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) break;
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar4 = *(int **)(iVar1 + 0x10 + uVar5 * 4);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2b4));
        uVar5 = uVar5 + 1;
      }
    }
    if (*(int *)(**(int **)(_UNK_010f8e9c + 0x10f8d0c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080();
    uVar7 = 2;
  }
  *(undefined4 *)(param_1 + 8) = uVar7;
  return 1;
}

