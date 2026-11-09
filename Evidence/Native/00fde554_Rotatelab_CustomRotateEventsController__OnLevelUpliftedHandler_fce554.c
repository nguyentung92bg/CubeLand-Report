/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelUpliftedHandler
void Rotatelab_CustomRotateEventsController__OnLevelUpliftedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelUpliftedHandler
   void Rotatelab_CustomRotateEventsController__OnLevelUpliftedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnLevelUpliftedHandler_fce554(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_00fde798 + 0xfde568);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde79c + 0xfde57c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7a0 + 0xfde588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7a4 + 0xfde594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7a8 + 0xfde5a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7ac + 0xfde5ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7b0 + 0xfde5b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fde7b4 + 0xfde5c4));
    *pcVar5 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fde7b8 + 0xfde5dc),2);
  if (*(int *)(**(int **)(_UNK_00fde7bc + 0xfde5f0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar8 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar2,0);
  puVar7 = *(undefined4 **)(_UNK_00fde7c0 + 0xfde628);
  iVar3 = thunk_FUN_00f00cdc(*puVar7);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar3,**(undefined4 **)(_UNK_00fde7c4 + 0xfde644),(int)uVar8,
             (int)((ulonglong)uVar8 >> 0x20),0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar3 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar4 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar3;
  thunk_FUN_00ec5080(piVar1 + 4,iVar3);
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  iVar4 = thunk_FUN_00f00cdc(*puVar7);
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar4,**(undefined4 **)(_UNK_00fde7c8 + 0xfde6dc),iVar3 + 1,iVar3 + 1 >> 0x1f,0);
  if ((iVar4 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar2 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar2,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar4;
  thunk_FUN_00ec5080(piVar1 + 5,iVar4);
  piVar6 = *(int **)(_UNK_00fde7cc + 0xfde744);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28);
  if (*(int *)(**(int **)(_UNK_00fde7d0 + 0xfde764) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fde7d0 + 0xfde764));
  }
  pcVar5 = (char *)(_UNK_01070b30 + 0x1070a70);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b34 + 0x1070a84),piVar1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b38 + 0x1070a90));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01070b3c + 0x1070aa8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread_3213808(0);
  iVar4 = *(int *)(**(int **)(_UNK_01070b40 + 0x1070ad8) + 0x74);
  if (iVar3 == 0) {
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__QueueEvent_1060b44(uVar2,piVar1);
    Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_10604d8();
  }
  else {
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__SendEventAsync_1060df8(uVar2,piVar1);
  }
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&stack0xffffffef,0);
  return;
}

