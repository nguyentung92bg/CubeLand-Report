/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass36_0$$<OnLevelStartedHandler>b__0
void Rotatelab_CustomRotateEventsController___c__DisplayClass36_0___OnLevelStartedHandler_b__0 (Rotatelab_CustomRotateEventsController___c__DisplayClass36_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass36_0$$<OnLevelStartedHandler>b__0
   void Rotatelab_CustomRotateEventsController___c__DisplayClass36_0___OnLevelStartedHandler_b__0
   (Rotatelab_CustomRotateEventsController___c__DisplayClass36_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController___c__DisplayClass36_0___OnLevelStartedHandler_b__0_fd6ac4
               (int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_00fe6cb0 + 0xfe6adc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cb4 + 0xfe6af0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cb8 + 0xfe6afc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cbc + 0xfe6b08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cc0 + 0xfe6b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cc4 + 0xfe6b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6cc8 + 0xfe6b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6ccc + 0xfe6b38));
    *pcVar2 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(**(int **)(_UNK_00fe6cd0 + 0xfe6b4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_10609ac(uVar4,uVar3,0);
  uVar4 = *(undefined4 *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  iVar6 = *(int *)(_UNK_00fe6cd4 + 0xfe6b8c);
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&uStack_1c);
  uVar3 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_00fe6cd8 + 0xfe6bb0),uVar4,uVar3,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar3,uVar3);
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar5 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CustomRotateEventsController__get_LastLevelStartThatReportedToAxon_fc6610();
    if (iVar1 < iVar5) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe6cdc + 0xfe6c04));
      System_Collections_Generic_Dictionary_object__object____ctor_20688f4
                (iVar5,**(undefined4 **)(_UNK_00fe6ce0 + 0xfe6c1c));
      uStack_20 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&uStack_20);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_object__object___Add_206933c
                (iVar5,**(undefined4 **)(_UNK_00fe6ce8 + 0xfe6c64),uVar3,
                 **(undefined4 **)(_UNK_00fe6ce4 + 0xfe6c58));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
                        (iVar1,**(undefined4 **)(_UNK_00fe6cec + 0xfe6c88),iVar5);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_CustomRotateEventsController__set_LastLevelStartThatReportedToAxon_fc6664
                (uVar3,*(undefined4 *)(param_1 + 0x14));
    }
  }
  return;
}

