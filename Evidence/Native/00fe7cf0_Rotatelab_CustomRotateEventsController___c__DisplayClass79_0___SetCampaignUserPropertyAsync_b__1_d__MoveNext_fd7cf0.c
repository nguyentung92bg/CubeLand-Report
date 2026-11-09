/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass79_0.<<SetCampaignUserPropertyAsync>b__1>d$$MoveNext
void Rotatelab_CustomRotateEventsController___c__DisplayClass79_0___SetCampaignUserPropertyAsync_b__1_d__MoveNext (Rotatelab_CustomRotateEventsController___c__DisplayClass79_0___SetCampaignUserPropertyAsync_b__1_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CustomRotateEventsController.<>c__DisplayClass79_0.<<SetCampaignUserPropertyAsync>b__1>d$$MoveNext
   void 
   Rotatelab_CustomRotateEventsController___c__DisplayClass79_0___SetCampaignUserPropertyAsync_b__1_d__MoveNext
   (Rotatelab_CustomRotateEventsController___c__DisplayClass79_0___SetCampaignUserPropertyAsync_b__1_d_o
   __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController___c__DisplayClass79_0___SetCampaignUserPropertyAsync_b__1_d__MoveNext_fd7cf0
               (int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_00fe80a0 + 0xfe7d08);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80a4 + 0xfe7d1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80a8 + 0xfe7d28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80ac + 0xfe7d34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80b0 + 0xfe7d40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80b4 + 0xfe7d4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80b8 + 0xfe7d58));
    *pcVar4 = '\x01';
  }
  iVar5 = param_1[3];
  iStack_1c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_1c = param_1[4];
    param_1[4] = 0;
  }
  else {
    puVar7 = *(undefined4 **)(_UNK_00fe80bc + 0xfe7d88);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = *(int **)(*(int *)(iVar1 + 0x24) + 0x10);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x28);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar6;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_00fe80c0 + 0xfe7df8)) {
          puVar7 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xf8);
          goto LAB_00fe7e58;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fe80c0 + 0xfe7df8),7);
LAB_00fe7e58:
    iVar1 = (*(code *)*puVar7)(piVar6,uVar8,0,0,0,puVar7[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_1c = System_Threading_Tasks_Task_object___GetAwaiter_1b58780
                          (iVar1,**(undefined4 **)(_UNK_00fe80c4 + 0xfe7e98));
    iVar1 = System_Runtime_CompilerServices_TaskAwaiter_object___get_IsCompleted_1b45ac8
                      (&iStack_1c,**(undefined4 **)(_UNK_00fe80c8 + 0xfe7eac));
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_1c;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x00ff4928(param_1 + 1,&iStack_1c,param_1,**(undefined4 **)(_UNK_00fe80cc + 0xfe7fa4));
      return;
    }
  }
  uVar8 = System_Runtime_CompilerServices_TaskAwaiter_object___GetResult_1b45b3c
                    (&iStack_1c,**(undefined4 **)(_UNK_00fe80d0 + 0xfe7ecc));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = (undefined4 *)(iVar5 + 8);
  *puVar7 = uVar8;
  thunk_FUN_00ec5080(puVar7,uVar8);
  iVar5 = _UNK_00fe80d4;
  *param_1 = -2;
  if (*(char *)(iVar5 + 0xfe7f08) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe80d8 + 0xfe7f1c));
    *(char *)(iVar5 + 0xfe7f08) = '\x01';
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar5 = *piVar6;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_00fe80dc + 0xfe7f40)) {
          puVar7 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xd0);
          goto LAB_00fe7fc4;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fe80dc + 0xfe7f40),2);
LAB_00fe7fc4:
    (*(code *)*puVar7)(piVar6,puVar7[1]);
  }
  return;
}

