/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnTutorialStepCompletedHandler
void Rotatelab_CustomRotateEventsController__OnTutorialStepCompletedHandler (Rotatelab_CustomRotateEventsController_o* __this, int32_t stepIndex, System_String_o* tutorialName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnTutorialStepCompletedHandler
   void Rotatelab_CustomRotateEventsController__OnTutorialStepCompletedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, int32_t stepIndex, System_String_o*
   tutorialName, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnTutorialStepCompletedHandler_fd09e4
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
  
  pcVar4 = (char *)(_UNK_00fe0c48 + 0xfe0a04);
  iStack_24 = param_2;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c4c + 0xfe0a18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c50 + 0xfe0a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c54 + 0xfe0a30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c58 + 0xfe0a3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c5c + 0xfe0a48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c60 + 0xfe0a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe0c64 + 0xfe0a60));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe0c68 + 0xfe0a78),2);
  piVar6 = *(int **)(_UNK_00fe0c6c + 0xfe0a8c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  puVar7 = *(undefined4 **)(_UNK_00fe0c70 + 0xfe0ab0);
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
  piVar6 = *(int **)(_UNK_00fe0c74 + 0xfe0bb0);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x34);
  if (*(int *)(**(int **)(_UNK_00fe0c78 + 0xfe0bd0) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fe0c78 + 0xfe0bd0));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar5,piVar1,0);
  uVar5 = System_Int32__ToString_2b6b9ec(&iStack_24,0);
  uVar5 = System_String__Concat_2a0bdec
                    (**(undefined4 **)(_UNK_00fe0c7c + 0xfe0c20),uVar5,
                     **(undefined4 **)(_UNK_00fe0c80 + 0xfe0c2c),param_3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar5,uVar5);
  Rotatelab_CustomRotateEventsController__SetUserProperties_fca284();
  return;
}

