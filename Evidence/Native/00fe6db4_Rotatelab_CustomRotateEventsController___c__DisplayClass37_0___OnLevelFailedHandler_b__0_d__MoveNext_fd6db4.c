/* IL2CPP: Rotatelab.CustomRotateEventsController.<>c__DisplayClass37_0.<<OnLevelFailedHandler>b__0>d$$MoveNext
void Rotatelab_CustomRotateEventsController___c__DisplayClass37_0___OnLevelFailedHandler_b__0_d__MoveNext (Rotatelab_CustomRotateEventsController___c__DisplayClass37_0___OnLevelFailedHandler_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CustomRotateEventsController.<>c__DisplayClass37_0.<<OnLevelFailedHandler>b__0>d$$MoveNext
   void 
   Rotatelab_CustomRotateEventsController___c__DisplayClass37_0___OnLevelFailedHandler_b__0_d__MoveNext
   (Rotatelab_CustomRotateEventsController___c__DisplayClass37_0___OnLevelFailedHandler_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController___c__DisplayClass37_0___OnLevelFailedHandler_b__0_d__MoveNext_fd6db4
               (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_00fe70d0 + 0xfe6dcc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe70d4 + 0xfe6de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe70d8 + 0xfe6dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe70dc + 0xfe6df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe70e0 + 0xfe6e04));
    *pcVar7 = '\x01';
  }
  iVar8 = param_1[3];
  iStack_24 = 0;
  uStack_28 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[4];
    param_1[4] = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe70e4 + 0xfe6e34));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_GameExtensions__ToSatoriParameters_fb5f5c(*(undefined4 *)(iVar8 + 8),0);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar9 = *(undefined4 *)(iVar8 + 0xc);
    uStack_40 = 0;
    System_Nullable_DateTime____ctor_17d8038
              (&uStack_40,**(undefined4 **)(_UNK_00fe70e8 + 0xfe6e78),*(undefined4 *)(iVar8 + 0x10),
               *(undefined4 *)(iVar8 + 0x14),**(undefined4 **)(_UNK_00fe70e8 + 0xfe6e78));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = Hiro_SatoriSystem__LogEventAsync_296ba04
                      (iVar1,**(undefined4 **)(_UNK_00fe70ec + 0xfe6eb4),uVar2,uVar9,uStack_40,
                       uStack_3c,uStack_38,uStack_34,0,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iStack_24 = System_Threading_Tasks_Task__GetAwaiter_2bf1e70(iVar8,0);
    iVar8 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2a9339c(&iStack_24,0);
    if (iVar8 == 0) {
      *param_1 = 0;
      param_1[4] = iStack_24;
      thunk_FUN_00ec5080(param_1 + 4,0);
      func_0x00ff45c8(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_00fe70f0 + 0xfe6f30));
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2a93488(&iStack_24,0);
  iVar8 = _UNK_00fe70f4;
  *param_1 = -2;
  if (*(char *)(iVar8 + 0xfe6f78) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe70f8 + 0xfe6f8c));
    *(char *)(iVar8 + 0xfe6f78) = '\x01';
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar8 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_00fe70fc + 0xfe6fb0)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_00fe6ff8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fe70fc + 0xfe6fb0),2);
LAB_00fe6ff8:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  return;
}

