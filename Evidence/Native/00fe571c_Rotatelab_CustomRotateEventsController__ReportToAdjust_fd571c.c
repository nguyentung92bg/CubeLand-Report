/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportToAdjust
void Rotatelab_CustomRotateEventsController__ReportToAdjust (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* token, int64_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportToAdjust
   void Rotatelab_CustomRotateEventsController__ReportToAdjust
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* token, int64_t count, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__ReportToAdjust_fd571c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_00fe59dc + 0xfe5738);
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59e0 + 0xfe5750));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59e4 + 0xfe575c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59e8 + 0xfe5768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59ec + 0xfe5774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59f0 + 0xfe5780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59f4 + 0xfe578c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59f8 + 0xfe5798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe59fc + 0xfe57a4));
    *pcVar4 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fe5a00 + 0xfe57b8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 1) != '\0') {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe5a04 + 0xfe57e8));
    AdjustSdk_AdjustEvent___ctor_f9b4cc(iVar1,param_2,0);
    piVar3 = *(int **)(_UNK_00fe5a08 + 0xfe5808);
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    piVar3 = *(int **)(_UNK_00fe5a0c + 0xfe5828);
    uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x78);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934(*piVar3);
    }
    pcVar4 = (char *)(_UNK_00fe5a10 + 0xfe5850);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5a14 + 0xfe5864));
      *pcVar4 = '\x01';
    }
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    AdjustSdk_AdjustEvent__AddPartnerParameter_f9b58c(iVar1,uVar5,**(undefined4 **)(iVar2 + 0x5c),0)
    ;
    AdjustSdk_Adjust__TrackEvent_f89a80(iVar1,0);
    iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_00fe5a18 + 0xfe58c8),5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = **(undefined4 **)(_UNK_00fe5a1c + 0xfe58e8);
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar5);
    if (*(uint *)(iVar1 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_2);
    uVar5 = **(undefined4 **)(_UNK_00fe5a20 + 0xfe5944);
    if (*(uint *)(iVar1 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),uVar5);
    uVar5 = System_Int64__ToString_2b6cd68(&uStack_20,0);
    if (*(uint *)(iVar1 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x1c),uVar5);
    uVar5 = **(undefined4 **)(_UNK_00fe5a24 + 0xfe59a8);
    if (*(uint *)(iVar1 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar1 + 0x20) = uVar5;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20),uVar5);
    uVar5 = System_String__Concat_2a0bee8(iVar1,0);
    Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar5,uVar5);
  }
  return;
}

