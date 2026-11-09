/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnTutorialStepStartedHandler
void Rotatelab_CustomRotateEventsController__OnTutorialStepStartedHandler (Rotatelab_CustomRotateEventsController_o* __this, int32_t stepIndex, System_String_o* tutorialName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnTutorialStepStartedHandler
   void Rotatelab_CustomRotateEventsController__OnTutorialStepStartedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, int32_t stepIndex, System_String_o*
   tutorialName, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnTutorialStepStartedHandler_fd0744
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_00fe09a8 + 0xfe0764);
  iStack_24 = param_2;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09ac + 0xfe0778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09b0 + 0xfe0784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09b4 + 0xfe0790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09b8 + 0xfe079c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09bc + 0xfe07a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09c0 + 0xfe07b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe09c4 + 0xfe07c0));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe09c8 + 0xfe07d8),2);
  piVar6 = *(int **)(_UNK_00fe09cc + 0xfe07ec);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  puVar7 = *(undefined4 **)(_UNK_00fe09d0 + 0xfe0810);
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar7);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar2,uVar5,param_2,param_2 >> 0x1f,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
  iVar2 = thunk_FUN_00f00cdc(*puVar7);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar5,param_3,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 5,iVar2);
  piVar6 = *(int **)(_UNK_00fe09d4 + 0xfe0910);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x30);
  if (*(int *)(**(int **)(_UNK_00fe09d8 + 0xfe0930) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fe09d8 + 0xfe0930));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar5,piVar1,0);
  uVar5 = System_Int32__ToString_2b6b9ec(&iStack_24,0);
  uVar5 = System_String__Concat_2a0bdec
                    (**(undefined4 **)(_UNK_00fe09dc + 0xfe0980),uVar5,
                     **(undefined4 **)(_UNK_00fe09e0 + 0xfe098c),param_3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar5,uVar5);
  Rotatelab_CustomRotateEventsController__SetUserProperties_fca284();
  return;
}

